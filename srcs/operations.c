#include "../include/push_swap.h"

void    ft_swap(s_list pile)
{
    int temp;

    if (pile.top < 1)
        return ;
    temp = pile.items[pile.top];
    pile.items[pile.top] = pile.items[pile.top - 1];
    pile.items[pile.top - 1] = temp; 
}

void    ft_ss(s_list a, s_list b)
{
    ft_swap(a);
    ft_swap(b);
}

void    ft_pa(s_list a, s_list b)
{
    if (b.top == -1)
        return ;
    a.items[a.top + 1] = b.items[b.top];
    a.top++;
    b.top--;
}

void    ft_pb(s_list *a, s_list *b)
{
    if (a->top == -1)
        return ;
    printf("pb a = %d\n", a->items[a->top]);
    b->items[b->top + 1] = a->items[a->top];
    b->top++;
    printf("pb b = %d\n", b->items[b->top]);
    a->top--;
    printf("pb a = %d\n", a->items[a->top]);
}