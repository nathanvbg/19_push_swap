#include "../include/push_swap.h"

int    ft_find_closest(s_list *a, int max, int part_size)
{
    int min;
    int i;
    int j;

    min = max - part_size;
    i = 0;
    j = a->top;
    while (i < a->top / 2)
    {
        if ((a->items[i] >= min) && (a->items[i] <= max))
            break;
        i++;
    }
    while (j > a->top / 2)
    {
        if ((a->items[j] >= min) && (a->items[j] <= max))
            break;
        j--;
    }
    if (i <= (a->top - j))
        return (i);
    else
        return (j);
}

void    ft_fill_b(s_list *a, s_list *b, int pos)
{
    if (pos <= a->top / 2)
    {
        while (pos >= 0)
        {
            ft_rra(a);
            pos--;
        }
    }
    if (pos > a->top / 2)
    {
        while (pos < a->top)
        {
            ft_ra(a);
            pos++;
        }
    }
    ft_pb(a, b);
}

void    ft_fill_a(s_list *a, s_list *b, int pos)
{
    if (pos <= b->top / 2)
    {
        while (pos >= 0)
        {
            ft_rrb(b);
            pos--;
        }
    }
    if (pos > b->top / 2)
    {
        while (pos < b->top)
        {
            ft_rb(b);
            pos++;
        }
    }
    ft_pa(a, b);
}

void    ft_refill_a(s_list *a, s_list *b)
{
    int i;

    i = 0;
    while (b->top >= 0)
    {
        if (b->items[i] == b->top + 1)
        {
            ft_fill_a(a, b, i);
            i = -1;
        }
        i++;
    }
}

void    ft_large_algo(s_list *a, s_list *b, int part, int part_size)
{
    int i;
    int j;
    int pos;

    i = 1;
    j = 1;
    while (j <= part)
    {

        while (i <= j * part_size)
        {
            pos = ft_find_closest(a, (j * part_size), part_size);
            ft_fill_b(a, b, pos);
            i++;
        }
        j++;
    }
    ft_refill_a(a, b);
}

void    ft_algo(s_list *a, s_list *b)
{
    if (a->top == 2)
        ft_algo_three(a);
    if (a->top > 5 && a->top < 100)
        ft_large_algo(a, b, 5, 20);
    if (a->top >= 100 && a->top < 500)
        ft_large_algo(a, b, 10, 50);
    if (a->top >= 500 && a->top < 1000)
        ft_large_algo(a, b, 20, 50);
    if (a->top >= 1000 && a->top < 10000)
        ft_large_algo(a, b, 100, 100);
    if (a->top >= 10000 && a->top < 100000)
        ft_large_algo(a, b, 1000, 1000);
}