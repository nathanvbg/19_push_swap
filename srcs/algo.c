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

int    ft_find_closest(s_list *a, int max)
{
    int min;
    int i;
    int j;

    min = max - 20;
    i = 0;
    j = a->top;
    while (i < a->top / 2)
    {
        //printf("i = %d\na = %d\n\n", i, a->items[i]);
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
    //printf("i = %d\nj = %d\n", i, j);
    if (i <= (a->top - j))
        return (i);
    else
        return (j);
}

/*
void    ft_sort_b(s_list *b, int nbr)
{
    int i;

    i = 0;
    while (i < b->top)
    {
        if (nbr > b->items[i])
            i++;
    }
}
*/
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
    //ft_sort_b(b, a->items[a->top]);
    ft_pb(a, b);
}

void    ft_refill_a(s_list *a, s_list *b)
{
    int i;
    
    i = b->top;
    while (b->top >= 0)
    {
        if (b->items[i] == b->top + 1)
        {
            while (i < b->top)
            {
                ft_rb(b);
                i++;
            }
            ft_pa(a, b);
        }
        i--;
    }
}

void    ft_algo_hundred(s_list *a, s_list *b)
{
    int i;
    int j;
    int pos;

    i = 1;
    j = 0;
    while (j < 5)
    {
        while (i <= j * 20)
        {
            pos = ft_find_closest(a, (j * 20)); //si i = 1, on envoit 20 pour ne chercher que les 20 premiers
            //printf("pos = %d\n", pos);
            ft_fill_b(a, b, pos);
            i++;
        }
        //ft_print(a, b, "je teste des trucs");
        j++;
    }
    //ft_print(a, b, "avant refill a");
    ft_refill_a(a, b);
    //ft_print(a, b, "apres refill a");
}

void    ft_algo(s_list *a, s_list *b)
{
    //printf("NBR ELEMENTS = %d\n\n", a->top + 1);
    if (a->top == 2)
        ft_algo_three(a);
    if (a->top > 4)
        ft_algo_hundred(a, b);
}