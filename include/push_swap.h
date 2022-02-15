

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct t_list{
int maxsize;
int top;
int *items;
} s_list;

void    ft_initlist(int ac, char **av);

#endif