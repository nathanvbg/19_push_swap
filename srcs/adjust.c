#include "../include/push_swap.h"

int ft_find_smallest(s_list *c, long previous_min)
{
    int i;
    int j;
    long min;

    i = 0;
    j = 0;
    min = 2147483648;
    while (i <= c->top)
    {
        if (c->items[i] < min && c->items[i] > previous_min)
        {
            min = c->items[i];
            j = i;
        }
        i++;
    }
    return (j);
}

void    ft_adjust(s_list *a, s_list *c)
{
    int i;
    int j;
    int k;
    long previous_min;

    i = 1;
    j = 0;
    previous_min = -2147483649;
    while (j <= c->top)
    {
        k = ft_find_smallest(c, previous_min);
        printf("k = %d\n", k);
        a->items[k] = j + 1;
        previous_min = c->items[k];
        j++;
    }
}