/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:43:13 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/11/12 15:43:14 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_op(int *stack, int index, int num)
{
	stack[index] = num;
}

void	reverse_op(int *stack, int start, int size)
{
	int	temp;

	while (start < size)
	{
		temp = stack[start];
		stack[start] = stack[size - 1];
		stack[size - 1] = temp;
		start++;
	}
}

void	swap_op(int *stack, int size)
{
	int	temp;

	temp = stack[size];
	stack[size] = stack[size + 1];
	stack[size + 1] = temp;
}

void	rotate_op(int *stack, int start, int size)
{
	int	temp;

	while (start < size)
	{
		temp = stack[size - 1];
		stack[size - 1] = stack[start];
		stack[start] = temp;
		size--;
	}
}
