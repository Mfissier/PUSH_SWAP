/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafissie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:05:36 by mafissie          #+#    #+#             */
/*   Updated: 2022/08/02 12:19:36 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_is_list_sort(t_stack **lst)
{
	t_stack	*tmp;

	tmp = *lst;
	while (tmp->next != NULL)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_size(const char *s, char c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || !s[i + 1])
			size++;
		i++;
	}
	return (size);
}

int	ft_atoi(const char *nptr)
{
	long int	neg;
	long int	nb;

	neg = 1;
	nb = 0;
	while (*nptr && (*nptr == '\r' || *nptr == '\f' || *nptr == '\v'
			|| *nptr == '\n' || *nptr == ' ' || *nptr == '\t'))
		nptr++;
	if (*nptr == '-')
	{
		neg = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		nb = (nb * 10) + *(nptr++) - 48;
		if ((((nb * neg) > INT_MAX) || (nb * neg) < INT_MIN))
			ft_exit();
	}
	return (nb * neg);
}

int	ft_atoi_free(const char *nptr, char **str)
{
	long int	neg;
	long int	nb;

	neg = 1;
	nb = 0;
	while (*nptr && (*nptr == '\r' || *nptr == '\f' || *nptr == '\v'
			|| *nptr == '\n' || *nptr == ' ' || *nptr == '\t'))
		nptr++;
	if (*nptr == '-')
	{
		neg = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		nb = (nb * 10) + *(nptr++) - 48;
		if ((((nb * neg) > INT_MAX) || (nb * neg) < INT_MIN))
		{
			ft_free(str);
			ft_exit();
		}
	}
	return (1);
}
