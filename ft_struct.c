/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:04:45 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/02 10:03:24 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_freestack(t_stack **a, t_stack **b)
{
	t_stack		*tmp;
	t_stack		*tmp2;

	if ((*a) != NULL)
	{
		tmp = (*a);
		while ((*a)->next != NULL)
		{
			tmp = tmp->next;
			free((*a));
			(*a) = tmp;
		}
		free((*a));
	}
	if ((*b) != NULL)
	{
		tmp2 = (*b);
		while (tmp2->next != NULL)
		{
			tmp2 = tmp2->next;
			free((*b));
			(*b) = tmp2;
		}
		free(*b);
	}
}

int	ft_pos_stack(int size, int *tab, int i)
{
	int		y;
	int		pos;

	y = 0;
	pos = 1;
	while (y < size)
	{
		if (y == i)
			y++;
		if (y == size)
			break ;
		if (tab[i] > tab[y])
			pos++;
		y++;
	}
	return (pos);
}

void	ft_fillstack(t_stack **a, int size, int *tab)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	(*a) = malloc(sizeof(t_stack));
	(*a)->next = NULL;
	(*a)->prev = NULL;
	(*a)->data = tab[i];
	(*a)->pos = ft_pos_stack(size, tab, i);
	i++;
	tmp = (*a);
	while (i < size)
	{
		tmp->next = malloc(sizeof(t_stack));
		tmp->next->data = tab[i];
		tmp->next->pos = ft_pos_stack(size, tab, i);
		tmp->next->next = NULL;
		tmp->next->prev = tmp;
		tmp = tmp->next;
		i++;
	}
}
