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
		ft_toupper.s\
		ft_tolower.s\
		ft_puts.s\
		ft_strlen.s

TSTDIR = Tests

TESTS = ft_bzero_tests.c\
		ft_strcat_tests.c\
		ft_isalpha_tests.c\
		ft_puts_tests.c\
		ft_strlen_tests.c

HEADERS = libftasm.h

ODIR = Objects

OBJ = $(SRCS:.s=.o)

TSTOBJ = $(TESTS:%.c=%.o)

all : $(NAME)

$(NAME) : $(ODIR)/ $(OBJ:%.o=$(ODIR)/%.o) $(TSTOBJ:%.o=$(ODIR)/%.o)
	gcc -o $(ODIR)/main.o -c main.c -g -I $(INC)
	$(LD) $(LFLAGS) -o $(NAME) $(ODIR)/main.o $(OBJ:%.o=$(ODIR)/%.o) $(TSTOBJ:%.o=$(ODIR)/%.o)

.PHONY: clean fclean re

clean :
	rm -f $(OBJ:%.o=$(ODIR)/%.o)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)

norm:
	norminette $(SRCS:%.c=$(SDIR)/%.c) $(HEADERS:%.h=$(INC)/%.h)

add:
	git add $(SRCS:%.s=$(SDIR)/%.s) $(HEADERS:%.h=$(INC)/%.h)\
		$(TESTS:%.c=$(TSTDIR)/%.c)\
		.gitignore Makefile author

test: re
	./$(NAME)

$(ODIR)/ :
	mkdir -p $@

$(ODIR)/%.o : $(SDIR)/%.s
	$(CC) $(CFLAGS) $< -o $@ -I $(INC)

$(ODIR)/%.o : $(TSTDIR)/%.c
	gcc -c $< -o $@ -I $(INC) -g -I $(INC)
