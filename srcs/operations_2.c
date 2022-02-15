#include "../include/push_swap.h"

void    ft_ra(s_list *a)
{
    int i;
    int temp1;
    int temp2;

    i = 1;
    temp1 = a->items[0];
    a->items[0] = a->items[a->top];
    while (i <= a->top)
    {
        temp2 = a->items[i];
        a->items[i] = temp1;
        temp1 = temp2;
        i++;
    }
    ft_putchar("ra\n");
}

void    ft_rb(s_list *b)
{
    int i;
    int temp1;
    int temp2;

    i = 1;
    temp1 = b->items[0];
    b->items[0] = b->items[b->top];
    while (i <= b->top)
    {
        temp2 = b->items[i];
        b->items[i] = temp1;
        temp1 = temp2;
        i++;
    }
    ft_putchar("rb\n");
}



void    ft_rr(s_list *a, s_list *b)
{
    ft_ra(a);
    ft_rb(b);
}