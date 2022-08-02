/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:12:37 by slepetit          #+#    #+#             */
/*   Updated: 2022/08/02 13:31:55 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_ra(t_stack **lst)
{
	t_stack	*lstmp;

	if (!(*lst))
		return ;
	if ((*lst)->next == NULL)
		return ;
	lstmp = (*lst);
	while (lstmp->next != NULL)
		lstmp = lstmp->next;
	lstmp->next = malloc(sizeof(t_stack));
	lstmp->next->next = NULL;
	lstmp->next->prev = (lstmp);
	lstmp->next->data = (*lst)->data;
	lstmp->next->pos = (*lst)->pos;
	lstmp = (*lst);
	(*lst) = (*lst)->next;
	(*lst)->prev = NULL;
	free(lstmp);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **lst)
{
	t_stack	*lstmp;

	if (!(*lst))
		return ;
	if ((*lst)->next == NULL)
		return ;
	lstmp = (*lst);
	while (lstmp->next != NULL)
		lstmp = lstmp->next;
	lstmp->next = malloc(sizeof(t_stack));
	lstmp->next->next = NULL;
	lstmp->next->prev = (lstmp);
	lstmp->next->data = (*lst)->data;
	lstmp->next->pos = (*lst)->pos;
	lstmp = (*lst);
	(*lst) = (*lst)->next;
	(*lst)->prev = NULL;
	free(lstmp);
	write(1, "rb\n", 3);
}
