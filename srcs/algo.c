#include "../include/push_swap.h"

/*
void    ft_selection_sort(s_list *a, s_list *b)
{
    int i;
    int min;

    i = 1;
    min = a->items[0];
    while (i < a->top)
    {
        if (a->items[i] < min)
            min = i;
        i++;
    }
    if (min > (a->top / 2))
    {
        while (i < a->top)
        {
            
        }
    }
    ft_pb(a, b);
}
*/
void    ft_algo_three(s_list *a)
{
    if((a->items[2] == 2) && (a->items[1] == 1) && (a->items[0] == 3))
        ft_sa(a);
    if((a->items[2] == 3) && (a->items[1] == 2) && (a->items[0] == 1))
    {
        ft_sa(a);
        ft_rra(a);
    }
    if((a->items[2] == 3) && (a->items[1] == 1) && (a->items[0] == 2))
        ft_ra(a);
    if((a->items[2] == 1) && (a->items[1] == 3) && (a->items[0] == 2))
    {
        ft_sa(a);
        ft_ra(a);
    }
    if((a->items[2] == 2) && (a->items[1] == 3) && (a->items[0] == 1))
        ft_rra(a);
   
}

void    ft_algo(s_list *a, s_list *b)
{
    ft_print(a, b);
    if (a->top == 2)
        ft_algo_three(a);
    ft_print(a, b);
}