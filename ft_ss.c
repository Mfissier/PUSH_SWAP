/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:18:39 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/02 13:31:43 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sa(t_stack **lst)
{
	int	tmp;
	int	tpos;

	tmp = 0;
	tpos = 0;
	if (!(*lst))
		return ;
	if ((*lst)->next != NULL)
	{
		tmp = (*lst)->data;
		tpos = (*lst)->pos;
		(*lst)->data = (*lst)->next->data;
		(*lst)->pos = (*lst)->next->pos;
		(*lst)->next->data = tmp;
		(*lst)->next->pos = tpos;
	}
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack **lst)
{
	int	tmp;
	int	tpos;

	tmp = 0;
	tpos = 0;
	if (!(*lst))
		return ;
	if ((*lst)->next != NULL)
	{
		tpos = (*lst)->pos;
		tmp = (*lst)->data;
		(*lst)->data = (*lst)->next->data;
		(*lst)->pos = (*lst)->next->pos;
		(*lst)->next->data = tmp;
		(*lst)->next->pos = tpos;
	}
	write(1, "sb\n", 3);
}
