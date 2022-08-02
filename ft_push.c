/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:10:22 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/01 12:04:11 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_pb_init_list(t_stack **a, t_stack**b)
{
	t_stack	*tmp;

	tmp = (*a);
	(*b) = malloc(sizeof(t_stack));
	(*b)->next = NULL;
	(*b)->prev = NULL;
	(*b)->data = (*a)->data;
	(*b)->pos = (*a)->pos;
	(*a) = (*a)->next;
	if (*(a) != NULL)
		(*a)->prev = NULL;
	free(tmp);
}

void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!(*a))
		return ;
	tmp = (*a);
	if ((*b) == NULL)
		ft_pb_init_list(a, b);
	else
	{
		(*b)->prev = malloc(sizeof(t_stack));
		(*b)->prev->prev = NULL;
		(*b)->prev->next = (*b);
		(*b)->prev->data = (*a)->data;
		(*b)->prev->pos = (*a)->pos;
		(*b) = (*b)->prev;
		(*a) = (*a)->next;
		if (*a != NULL)
			(*a)->prev = NULL;
		free(tmp);
	}
	write(1, "pb\n", 3);
}

void	ft_pa_init_list(t_stack **a, t_stack**b)
{
	t_stack	*tmp;

	tmp = (*b);
	(*a) = malloc(sizeof(t_stack));
	(*a)->next = NULL;
	(*a)->prev = NULL;
	(*a)->data = (*b)->data;
	(*a)->pos = (*b)->pos;
	(*b) = (*b)->next;
	if (*(b) != NULL)
		(*b)->prev = NULL;
	free(tmp);
}

void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!(*b))
		return ;
	tmp = (*b);
	if ((*a) == NULL)
		ft_pb_init_list(a, b);
	else
	{
		(*a)->prev = malloc(sizeof(t_stack));
		(*a)->prev->prev = NULL;
		(*a)->prev->next = (*a);
		(*a)->prev->data = (*b)->data;
		(*a)->prev->pos = (*b)->pos;
		(*a) = (*a)->prev;
		(*b) = (*b)->next;
		if (*b != NULL)
			(*b)->prev = NULL;
		free(tmp);
	}
	write(1, "pa\n", 3);
}
