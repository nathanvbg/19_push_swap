#include "../include/push_swap.h"

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