/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checknum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:43:57 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/11/12 15:43:58 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_numbers(int ac, char **av)
{
	int	i;
	int	j;
	int	is_num;
	int	c_total;

	i = 1;
	c_total = 0;
	while (i < ac)
	{
		if (!ft_strlen(av[i]))
			ft_errors(1);
		j = 0;
		while (av[i][j])
		{
			is_num = 0;
			j += ft_check_number(&av[i][j], &is_num);
			if (is_num)
				c_total++;
		}
		i++;
	}
	return (c_total);
}

int	ft_check_number(char *str, int *is_num)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] != ' ')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (ft_errors(1));
		*is_num = ++i;
	}
	if (!*is_num)
		return (ft_errors(1));
	while (str[i] && str[i] == ' ')
		i++;
	return (i);
}
