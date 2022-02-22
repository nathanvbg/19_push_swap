/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:46:54 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 17:07:57 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_check_double(char **arg)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg[i])
	{
		j = 0;
		while (arg[j])
		{
			if (i != j)
			{
				if (ft_strcmp(arg[j], arg[i]) == 0)
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_atoi(char **av)
{
	long int	nbr;
	int			i;

	i = 0;
	while (av[i])
	{
		nbr = ft_atoi(av[i]);
		if ((nbr == 0) && (ft_strncmp("0", av[i], 2) != 0))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check(char **av)
{
	int	i;
	int	j;

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
	if (!ft_check_atoi(av))
		return (0);
	if (!ft_check_double(av))
		return (0);
	return (1);
}
