FT_FILE:= ft_$(shell basename *main.c | sed s/_main//)
NAME_FILE:= ft_$(shell basename *main.c .c| sed s/_main//)
FT_MAIN:= *main.c
GCC_FLAGS = -Wall\
			-Werror\
			-Wextra
OBJ = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_strlen.o
#gcc  *main.c > xargs "ft_$(basename *main.c | sed s/_main//)" 
ALL: run
run: compile
	echo "\nResult: \n"
	./$(NAME_FILE)
compile:
	gcc $(GCC_FLAGS) $(FT_FILE) $(FT_MAIN) -o $(NAME_FILE)

obj: $(OBJ)

lib: obj
	ar rc libft.a $(OBJ)

%.o: %.c libft.h
	gcc -c $< -o $@
clear: commit
	mv $(FT_MAIN) main_test/ && rm $(NAME_FILE)

fclear:
	rm  *.o libft.a

commit:
	git commit -am "Add $(FT_FILE)"
	git push