#include "../include/push_swap.h"

void    ft_print(s_list *c, s_list *a)
{
    int i;
    i = c->top;

    printf("\n");
    while (i >= 0)
    {
        printf("%d\n", c->items[i]);
        i--;
    }
    printf("^\nC\n-\n\n");
    if (a->top > 0)
    {
        i = a->top;
        while (i >= 0)
        {
            printf("%d\n", a->items[i]);
            i--;
        }
        printf("^\nA\n-\n\n");
    }
}

int main(int ac, char **av)
{
    s_list a;
    s_list b;
    s_list c;

    if (ac == 1)
        return (0);
    if(!ft_check(&av[1]))
    {
        ft_putchar("Erssssror\n");
        return (1);
    }
    if (ft_initlists(ac - 1, &av[1], &a, &b, &c) == -1)
    {
        ft_putchar("Error\n");
        return (1);
    }
    if (ft_adjust(&a, &c) == -1)
    {
        ft_putchar("Error\n");
        return (1);
    }
    ft_print(&c, &a);
    /*
    ft_algo(&a, &b);
    return (0);
    */
}
