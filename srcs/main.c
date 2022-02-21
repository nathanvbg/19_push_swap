#include "../include/push_swap.h"

void    ft_print_c(s_list *c, char *str)
{
    int i;
    i = c->top;

    printf("\n%s\n", str);
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
    if (b->top >= 0)
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

int ft_process(char **arg, s_list *a, s_list *b, s_list *c)
{
    if(!ft_check(arg))
    {
        ft_putchar("Erssssror\n");
        return (0);
    }
    if (!ft_initlists(arg, a, b, c))
    {
        ft_putchar("Erroooor\n");
        return (0);
    }
    //ft_print_c(a, "A apres adjust");
    ft_algo(a, b);
    //ft_print(a, b, "apres algo");
    ft_free(a, b);
    return (1);
}

int main(int ac, char **av)
{
    s_list a;
    s_list b;
    s_list c;
    int i;

    i = 0;
    char **arg;

    //printf("AARG = %s\n", av[1]);
    if (ac == 1)
        return (0);
    if (ac == 2)
    {
        arg = ft_split(av[1], ' ');
        if (!ft_process(arg, &a, &b, &c))
            return (1);
    }
    else
    {
        if (!ft_process(&av[1], &a, &b, &c))
            return (1);
    }
    return (0);
}
