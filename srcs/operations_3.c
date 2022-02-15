#include "../include/push_swap.h"

void    ft_rra(s_list *a)
{
    int i;
    int temp1;
    int temp2;

    i = a->top - 1;
    temp1 = a->items[a->top];
    a->items[a->top] = a->items[0];
    while (i >= 0)
    {
        temp2 = a->items[i];
        a->items[i] = temp1;
        temp1 = temp2;
        i--;
    }
    ft_putchar("rra\n");
}

void    ft_rrb(s_list *b)
{
    int i;
    int temp1;
    int temp2;

    i = b->top - 1;
    temp1 = b->items[b->top];
    b->items[b->top] = b->items[0];
    while (i >= 0)
    {
        temp2 = b->items[i];
        b->items[i] = temp1;
        temp1 = temp2;
        i--;
    }
    ft_putchar("rrb\n");
}

void    ft_rrr(s_list *a, s_list *b)
{
    ft_rra(a);
    ft_rrb(b);
}