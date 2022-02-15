#include "../include/push_swap.h"
//#include <stdlib.h>

void    ft_initlist(int ac, char **av)
{
    int i;
    s_list a;
    s_list b;

    i = 0;
    a.top = -1;
    a.maxsize = -1;
    b.top = -1;
    b.maxsize = -1;
    a.items = malloc(ac * sizeof(int)); //comment securiser un tableau d'int?
    b.items = malloc(ac * sizeof(int));
    while (av[i])
    {
        a.maxsize++;
        a.top++;
        a.items[i] = ft_atoi(av[i]);
        printf("%d\n", a.items[i]);
        i++;
    }
    
    //printf("\na = %d\nb =%d\n", a.items[a.top], b.items[b.top]);
    //ft_reverse_rotate(&a);
    i = 0;
    printf("\n\nA\n\n");
    ft_sa(&a);
    ft_pb(&a, &b);
    ft_pb(&a, &b);
    ft_pb(&a, &b);
    //ft_rr(&a, &b);
    //ft_rrr(&a, &b);
    ft_sa(&a);
    ft_pa(&a, &b);
    ft_pa(&a, &b);
    ft_pa(&a, &b);
    i = a.top;
    while (i >= 0)
    {
        printf("%d\n", a.items[i]);
        i--;
    }
    i = b.top;
    printf("\n\nB\n\n");
    while (i >= 0)
    {
        printf("%d\n", b.items[i]);
        i--;
    }
    //printf("\na = %d\nb =%d\n", a.items[a.top], b.items[b.top]);
    //printf("top = %d\n", a.top);

}

int main(int ac, char **av)
{
    if (ac == 1)
        return (0);
    ft_initlist(ac - 1, &av[1]);
    return (0);
}

