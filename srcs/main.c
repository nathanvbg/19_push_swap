#include "../include/push_swap.h"

void    ft_print(s_list *a, s_list *b)
{
    int i;
    i = a->top;

    printf("\n");
    while (i >= 0)
    {
        printf("%d\n", a->items[i]);
        i--;
    }
    printf("^\nA\n-\n\n");
    if (b->top > 0)
    {
        i = b->top;
        while (i >= 0)
        {
            printf("%d\n", b->items[i]);
            i--;
        }
        printf("^\nB\n-\n\n");
    }
}

int main(int ac, char **av)
{
    s_list a;
    s_list b;
    if (ac == 1)
        return (0);
    if(!ft_check(&av[1]))
    {
        ft_putchar("Erssssror\n");
        return (1);
    }
    if (ft_initlists(ac - 1, &av[1], &a, &b) == -1)
    {
        ft_putchar("Error\n");
        return (1);
    }
    //ft_adjust(&a);
    ft_algo(&a, &b);
    return (0);
}
