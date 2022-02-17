#include "../include/push_swap.h"

void    ft_print_c(s_list *c)
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
}

void    ft_print(s_list *a, s_list *b, char *str)
{
    int i;

    i = a->top;
    printf("\n%s\n", str);
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

void    ft_free(s_list *a, s_list *b)
{
    free(a->items);
    free(b->items);
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
    if (!ft_initlists(ac - 1, &av[1], &a, &b, &c))
    {
        ft_putchar("Error\n");
        return (1);
    }
    if (!ft_adjust(&a, &c))
    {
        ft_putchar("Error\n");
        return (1);
    }
    ft_print(&a, &b, "avant algo");
    ft_algo(&a, &b);
    ft_print(&a, &b, "apres algo");
    ft_free(&a, &b);
    return (0);
}
