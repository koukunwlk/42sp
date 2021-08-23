FT_FILE:= ft_$(shell basename *main.c | sed s/_main//)
NAME= libft.a
NAME_FILE:= ft_$(shell basename *main.c| sed s/_main//)
FT_MAIN:= *main.c
GCC_FLAGS = -Wall\
			-Werror\
			-Wextra
OBJ = 	ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
		ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o \
		ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o\
		ft_toupper.o ft_tolower.o ft_strchr.o ft_strncmp.o\
		ft_memchr.o ft_memcmp.o 
		
all: $(NAME)

$(NAME): obj lib

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

compile: lib
	clang $(GCC_FLAGS) $(FT_MAIN) -L. -lft

obj: $(OBJ)

lib: obj
	ar rc libft.a $(OBJ)

%.o: %.c libft.h
	gcc -c $< -o $@
