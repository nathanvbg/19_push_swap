#include "../include/push_swap.h"
//#include <stdlib.h>

void    ft_initlist(int ac, char **av)
{
    int i;
    s_list a;

    i = 0;
    a.top = 0;
    a.maxsize = 0;
    a.items = malloc(ac * sizeof(int)); //comment securiser un tableau d'int?
    while (av[i])
    {
        a.maxsize++;
        a.top++;
        a.items[i] = ft_atoi(av[i]);
        printf("%d\n", a.items[i]);
        i++;
    }
    printf("top = %d\n", a.top);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (0);
    ft_initlist(ac - 1, &av[1]);
    return (0);
}

