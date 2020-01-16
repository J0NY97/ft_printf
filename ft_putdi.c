/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_thingys.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 12:47:19 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/17 12:49:56 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** instead of having int space_value = arr[1];
**	just type int spaces = arr[1] - ...
**
** arr[0] == '0' && arr[2] > 0... used to be
** arr[0] == '0' && arr[2] != -1 but it didnt work if precision was < 0
** which apparently should be ignored if its < 0....?
*/

static void	ft_putdineg(long long int nbr, int len, int *arr)
{
	int spaces;
	int padding;

	len--;
	spaces = arr[1] - ((arr[2] > len) ? arr[2] : len) - 1;
	padding = arr[2] - len;
	if (arr[0] != '-')
	{
		arr[0] == '0' && arr[2] > 0 ? ft_putnchars(spaces, ' ') : 0;
		arr[0] == '0' ? ft_putchar('-') : 0;
		arr[0] == '0' && arr[2] <= 0 ? ft_putnchars(spaces, '0') : 0;
		arr[0] != '0' ? ft_putnchars(spaces, ' ') : 0;
		arr[0] != '0' ? ft_putchar('-') : 0;
		ft_putnchars(padding, '0');
		nbr *= -1;
		ft_putllnbr(nbr);
	}
	else
	{
		ft_putchar('-');
		ft_putnchars(padding, '0');
		nbr *= -1;
		ft_putllnbr(nbr);
		ft_putnchars(spaces, ' ');
	}
	arr[5] += (padding >= 0 ? padding : 0) + (spaces >= 0 ? spaces : 0) + len + 1;
}

static void	ft_putdipos(long long int nbr, int len, int *arr)
{
	int spaces;
	int padding;

	spaces = arr[1] - ((arr[2] > len) ? arr[2] : len) -
	(arr[0] == '+' ? 1 : 0);
	padding = arr[2] - len;
	if (arr[0] != '-')
	{
		arr[0] == '0' && arr[2] <= 0 ? ft_putnchars(spaces, '0') : 0;
		arr[0] == '0' && arr[2] > 0 ? ft_putnchars(spaces, ' ') : 0;
		arr[0] != '0' && nbr != 0 ? ft_putnchars(spaces, ' ') : 0;
		arr[0] == '+' ? ft_putchar('+') : 0;
		ft_putnchars(padding, '0');
		arr[0] == '+' && arr[2] == 0 ? ft_putnchars(spaces, '0') : 0;
		arr[0] == '+' && nbr == 0 ? ft_putllnbr(nbr) : 0;
		arr[0] == -1 && nbr == 0 && arr[2] != 0 ? ft_putchar('0') : 0;
		nbr != 0 ? ft_putllnbr(nbr) : 0;
	}
	else
	{
		ft_putnchars(padding, '0');
		ft_putllnbr(nbr);
		ft_putnchars(spaces, ' ');
	}
	arr[5] += (padding >= 0 ? padding : 0) + (spaces >= 0 ? spaces : 0) +
	(arr[2] == 0 && arr[0] != '+' ? 0 : len) +
	(arr[0] == '+' ? 1 : 0);
}

void		ft_putdi(long long int nbr, int len, int *arr)
{
	// if the flag is space (1 or more) it will print 1 space
	arr[0] == ' ' && nbr > 0 ? write (1, " ", 1) : 0;
	// if the nbr is negative dont print space because the minus counts as one?
	// ... so you have to remove one from arr[5].....?//???
	arr[0] == ' ' && nbr < 0 ? arr[5]-- : 0;
	if (nbr < 0)
		ft_putdineg(nbr, len, arr);
	else
		ft_putdipos(nbr, len, arr);
}
