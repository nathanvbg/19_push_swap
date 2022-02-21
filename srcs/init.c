#include "../include/push_swap.h"

int ft_malloc(s_list *a, s_list *b, s_list *c, int ac)
{
    a->items = malloc(ac * sizeof(int)); //comment securiser un tableau d'int?
    if (a->items == 0)
        return (0);
    b->items = malloc(ac * sizeof(int));
    if (b->items == 0)
    {
        free(a->items);// verifier
        return (0);
    }
    c->items = malloc(ac * sizeof(int));
    if (c->items == 0)
    {
        free(a->items);// verifier
        free(b->items);
        return (0);
    }
    return (1);
}

int ft_size(char **av)
{
    int i;

    i = 0;
    while (av[i])
        i++;
    return (i);
}

int ft_initlists(char **av, s_list *a, s_list *b, s_list *c)
{
    int i;

    i = 0;

    b->top = -1;
    c->top = -1;
    if (!ft_malloc(a, b, c, ft_size(av)))
        return (0);
    while (av[i])
    {
        c->top++;
        c->items[ft_size(av) - i - 1] = ft_atoi(av[i]);
        i++;
        
    }
    a->top = c->top;
    //ft_print_c(c);
    ft_adjust(a, c);
    //ft_print(a, b, "apres adjust");
    free(c->items);
    return (1);
}

int	ft_check_atoi(char **av)
{
	long int nbr;
	int i;

	i = 0;
	while (av[i])
	{
		nbr = ft_atoi(av[i]);
		if ((nbr == 0) && (ft_strncmp("0", av[i], 3) != 0))
			return (0);
		i++;
	}
	return (1);
}

int ft_check(char **av)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if (j == 0 && (av[i][j] == '-' || av[i][j] == '+'))
                j++;
            if (!ft_isdigit(av[i][j]))
                return (0);
            j++;
        }
        i++;
    }
	if(!ft_check_atoi(av))
		return (0);
    return (1);
}