/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error_onearg.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafissie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:25:43 by mafissie          #+#    #+#             */
/*   Updated: 2022/08/04 13:17:33 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_check_error_onearg(char *str, char **sstr)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i != 0 && str[i] == '-')
		{
			if (str[i] == '-' && str[i - 1] != ' ')
			{
				ft_free(sstr);
				ft_exit();
			}
		}
		if (i != 0 && str[i] == '+')
		{
			if (str[i] == '+' && str[i - 1] != ' ')
			{
				ft_free(sstr);
				ft_exit();
			}
		}
		i++;
	}
}
