/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafissie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:45:14 by mafissie          #+#    #+#             */
/*   Updated: 2022/08/02 10:16:10 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	ft_sort_group_four(t_stack **a, t_stack **b)
{
	if ((*a)->pos > (*a)->next->pos)
		ft_sa(a);
	ft_pb(a, b);
	ft_sort_group_three_a(a);
	ft_pa(a, b);
	if (!ft_is_list_sort(a))
		ft_sort_group_four(a, b);
}

int	ft_previously_tris(t_stack **lst, int size)
{
	t_stack	*tmp;
	int		bcmp;
	int		pui;
	int		i;

	i = size;
	bcmp = 0;
	tmp = *lst;
	pui = 1;
	while (--i)
		pui *= 10;
	while (--size)
	{
		if (tmp->pos > tmp->next->pos)
			bcmp += 1 * pui;
		if (size == 1)
		{
			if ((*lst)->pos > tmp->next->pos)
				bcmp += 1;
			return (bcmp);
		}
		pui /= 10;
		tmp = tmp->next;
	}
	return (bcmp);
}

void	ft_sort_group_five(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if ((*a)->pos == 1 || (*a)->pos == 2 || (*a)->pos == 3)
			ft_pb(a, b);
		else
			ft_ra(a);
		i++;
	}
	ft_sort_group_three_b(b);
	if ((*a)->pos > (*a)->next->pos)
		ft_sa(a);
	ft_pa(a, b);
	ft_pa(a, b);
	ft_pa(a, b);
}

void	ft_parse_sort(t_stack **a, t_stack **b, int size)
{
	if (size <= 5)
	{
		if (size == 2)
		{
			if ((*a)->pos > (*a)->next->pos)
				ft_sa(a);
		}
		if (size == 3)
			ft_sort_group_three_a(a);
		else if (size == 4)
			ft_sort_group_four(a, b);
		else if (size == 5)
			ft_sort_group_five(a, b);
	}
	else
		ft_radix(a, b, size);
}
