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
    printf("\na = %d\nb =%d\n", a.items[a.top], b.items[b.top]);
    ft_pb(&a, &b);
    printf("\na = %d\nb =%d\n", a.items[a.top], b.items[b.top]);
    //printf("top = %d\n", a.top);

}

int main(int ac, char **av)
{
    if (ac == 1)
        return (0);
    ft_initlist(ac - 1, &av[1]);
    return (0);
}

