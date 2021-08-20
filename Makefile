FT_FILE:= ft_$(shell basename *main.c | sed s/_main//)
NAME_FILE:= ft_$(shell basename *main.c .c| sed s/_main//)
FT_MAIN:= *main.c
GCC_FLAGS = -Wall\
			-Werror\
			-Wextra
#gcc  *main.c > xargs "ft_$(basename *main.c | sed s/_main//)" 
ALL: run
run: compile
	echo "\nResult: \n"
	./$(NAME_FILE)
compile:
	gcc $(GCC_FLAGS) $(FT_FILE) $(FT_MAIN) -o $(NAME_FILE)

clear:
	mv $(FT_MAIN) main_test/ && rm $(NAME_FILE)

commit:
	git commit -am "Add $(FT_FILE)"
	git push