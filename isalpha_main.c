#include <stdio.h>

int ft_isalpha(int c);

int main(void)
{
    char c = '1';
    printf("C = %c\nretorna no isalpha: %d\n", c, ft_isalpha(c));
}