FT_FILE:= ft_$(shell basename *main.c | sed s/_main//)
NAME= libft.a
NAME_FILE:= ft_$(shell basename *main.c| sed s/_main//)
FT_MAIN:= *main.c
GCC_FLAGS = -Wall\
			-Werror\
			-Wextra

SRCS = 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c\
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
		ft_calloc.c	ft_strdup.c	ft_strrchr.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRCS:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJ = $(BONUS:.c=.o)
all: $(NAME)

$(NAME): obj lib

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean:
	rm -f $(NAME)

re: fclean clean all

compile: lib
	clang $(GCC_FLAGS) $(FT_MAIN) -L. -lft

obj: $(OBJ)


bonus: $(OBJ) $(BONUS_OBJ)
	ar rc $(NAME) $(OBJ) $(BONUS_OBJ)

lib: obj
	ar rc $(NAME) $(OBJ)

%.o: %.c libft.h
	gcc -c $< -o $@
so:
	gcc -nostartfiles  $(SRCS) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS_OBJ)
.PHONY: all clean fclean re $(NAME)