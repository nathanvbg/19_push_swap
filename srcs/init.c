#include "../include/push_swap.h"

int ft_initlists(int ac, char **av, s_list *a, s_list *b)
{
    int i;

    i = 0;
    a->top = -1;
    b->top = -1;
    a->items = malloc(ac * sizeof(int)); //comment securiser un tableau d'int?
    if (a->items == 0)
        return (-1);
    b->items = malloc(ac * sizeof(int));
    if (b->items == 0)
    {
        free(a->items);// verifier
        return (-1);
    }
    while (av[i])
    {
        a->top++;
        a->items[i] = ft_atoi(av[i]);
        i++;
    }
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