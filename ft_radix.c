/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:51:07 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/01 12:30:02 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./pushswap.h"

int	ft_len_max_bite(int size)
{
	int	bytes;

	bytes = 32;
	while (--bytes >= 0)
		if ((size >> bytes) & 1)
			break ;
	return (bytes);
}

void	ft_radix(t_stack **a, t_stack **b, int size)
{
	int	len_bytes;
	int	i;
	int	y;

	y = -1;
	i = -1;
	len_bytes = ft_len_max_bite(size);
	while (++i <= len_bytes)
	{
		while (++y < size)
		{
			if (((*a)->pos >> i) & 1)
				ft_ra(a);
			else
				ft_pb(a, b);
		}
		while ((*b) != NULL)
			ft_pa(a, b);
		if (ft_is_list_sort(a))
			break ;
		y = -1;
	}
}
