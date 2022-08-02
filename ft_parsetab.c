/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsetab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:34:27 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/02 10:08:30 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_len(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_double(int *tab, int end, char **str, int ac)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < end)
	{
		while (j < end)
		{
			if (j == i)
				j++;
			if (j == end)
				break ;
			if ((tab[j] == tab[i]))
			{
				free(tab);
				if (ac == 2)
					ft_free(str);
				ft_exit();
			}
			j++;
		}
		j = 0;
		i++;
	}
}

int	*ft_check(char **str, int ac)
{
	int	*tab;
	int	i;
	int	end;

	tab = NULL;
	i = 0;
	end = ft_len(str);
	tab = malloc(sizeof(int) * (end + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i])
	{
		tab[i] = ft_atoi(str[i]);
		i++;
	}
	ft_double(tab, end, str, ac);
	return (tab);
}
