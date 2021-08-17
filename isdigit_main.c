#include <stdio.h>

int ft_isdigit(int c);

int main(void)
{
    char c = 'a';
    printf("C = %c\nretorna no ft_isdigit: %d\n", c, ft_isdigit(c));
}