NAME = libfts.a

CC = nasm
CFLAGS = -f macho64

LD=ld
LFLAGS = -macosx_version_min 10.13 -lSystem

INC = Includes

SDIR = Srcs

SRCS =	ft_bzero.s\
		ft_strcat.s\
		ft_isalpha.s\
		ft_isdigit.s\
		ft_isalnum.s\
		ft_isascii.s\
		ft_isprint.s\
		ft_toupper.s\
		ft_tolower.s\
		ft_puts.s\
		ft_strlen.s\
		ft_memset.s\
		ft_memcpy.s\
		ft_strdup.s\
		ft_cat.s

TSTDIR = Tests

TESTS = ft_bzero_tests.c\
		ft_strcat_tests.c\
		ft_isalpha_tests.c\
		ft_isdigit_tests.c\
		ft_isalnum_tests.c\
		ft_isascii_tests.c\
		ft_isprint_tests.c\
		ft_toupper_tests.c\
		ft_tolower_tests.c\
		ft_puts_tests.c\
		ft_strlen_tests.c\
		ft_memset_tests.c\
		ft_memcpy_tests.c\
		ft_strdup_tests.c\
		test_two_int_int_funcs.c\
		ft_cat_tests.c\
		main.c

HEADERS =	libftasm.h\
			libftasm_tests.h

ODIR = Objects

OBJ = $(SRCS:.s=.o)

TSTOBJ = $(TESTS:%.c=%.o)

all : $(NAME)

$(NAME) : $(ODIR)/ $(OBJ:%.o=$(ODIR)/%.o)
	ar rc $(NAME) $(OBJ:%.o=$(ODIR)/%.o)

.PHONY: clean fclean re

clean :
	rm -f $(OBJ:%.o=$(ODIR)/%.o) $(TSTOBJ:%.o=$(ODIR)/%.o)

fclean : clean
	rm -f $(NAME) libftASM_Test

re : fclean $(NAME)

norm:
	norminette $(SRCS:%.c=$(SDIR)/%.c) $(HEADERS:%.h=$(INC)/%.h)

add:
	git add $(SRCS:%.s=$(SDIR)/%.s) $(HEADERS:%.h=$(INC)/%.h)\
		$(TESTS:%.c=$(TSTDIR)/%.c)\
		.gitignore Makefile author

tests: $(NAME) $(TSTOBJ:%.o=$(ODIR)/%.o)
	$(LD) $(LFLAGS) -o libftASM_Test $(TSTOBJ:%.o=$(ODIR)/%.o) $(NAME)

run_tests: tests
	./libftASM_Test

$(ODIR)/ :
	mkdir -p $@

$(ODIR)/%.o : $(SDIR)/%.s
	$(CC) $(CFLAGS) $< -o $@ -I $(INC)

$(ODIR)/%.o : $(TSTDIR)/%.c
	gcc -Wall -Werror -Wextra -c $< -o $@ -I $(INC) -g -I $(INC)
