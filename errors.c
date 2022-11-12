/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:43:00 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/11/12 15:43:01 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_errors(int err_num)
{
	if (err_num >= 0 && err_num <= 4)
		write(1, "Error\n", 6);
	exit(err_num);
}
