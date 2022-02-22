#include "../include/push_swap.h"

void    ft_algo_three(s_list *a)
{
    if ((a->items[0] > a->items[2]) && (a->items[2] > a->items[1]))
        ft_sa(a);
    else if ((a->items[2] > a->items[1]) && (a->items[1] > a->items[0]))
    {
        ft_sa(a);
        ft_rra(a);
    }
    else if ((a->items[2] > a->items[1]) && (a->items[1] < a->items[0]))
        ft_ra(a);
    else if ((a->items[2] < a->items[1]) && (a->items[0] < a->items[1]) 
        && (a->items[0] > a->items[2]))
    {
        ft_sa(a);
        ft_ra(a);
    }
    else if ((a->items[1] > a->items[2]) && (a->items[2] > a->items[0]))
        ft_rra(a); 
}

void    ft_small_a(s_list *a, s_list *b)
{
    int i;

    i = 0;
    while ((b->items[b->top] > a->items[a->top - i]) && (i <= a->top))
        i++;
    //printf("i = %d\n", i);
    if (i == a->top + 1)
    {
        ft_pa(a, b);
        ft_ra(a);
    }
    else if (i == 0)
        ft_pa(a, b);
    else if (i == 1)
    {
        ft_pa(a, b);
        ft_sa(a);
    }
    else if (i == 2)
    {
        ft_ra(a);
        ft_pa(a, b);
        ft_sa(a);
        ft_rra(a);
    }
    else if (i == 3)
    {
        ft_rra(a);
        ft_pa(a, b);
        ft_ra(a);
        ft_ra(a);
    }

}

void    ft_algo_five(s_list *a, s_list *b)
{
    int i;

    i = 0;
    ft_pb(a, b);
    if (a->top == 3)
        ft_pb(a, b);
    ft_algo_three(a);
    //ft_print(a, b, "heee");
    ft_small_a(a, b);
    //ft_print(a, b, "h8");
    if (b->top >= 0)
        ft_small_a(a, b);
    //ft_print(a, b, "ha");
}
   



   
   
/*
   
    if ((b->items[b->top] > a->items[0]) && (b->items[b->top] > a->items[1])
        && (b->items[b->top] > a->items[2]))
    {
        ft_pa(a, b);
        ft_rra(a);
    }
}
*/