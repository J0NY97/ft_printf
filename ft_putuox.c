/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 12:23:18 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/17 12:44:19 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printuox(unsigned long long int nbr, int *arr)
{
	arr[4] == 'u' ? ft_putuint(nbr) : 0;
	arr[4] == 'o' ? ft_putoctal(nbr) : 0;
	arr[4] == 'x' ? ft_puthex(nbr, 0) : 0;
	arr[4] == 'X' ? ft_puthex(nbr, 1) : 0;
}

static void	ft_puthashtag(int *arr)
{
	arr[4] == 'o' ? ft_putchar('0') : 0;
	arr[4] == 'x' ? ft_putstr("0x") : 0;
	arr[4] == 'X' ? ft_putstr("0X") : 0;
}

void		ft_putuox(unsigned long long int nbr, int len, int *arr)
{
	int spaces;
	int padding;

	spaces = arr[1] - ((arr[2] > len) ? arr[2] : len) -
	(arr[0] == '+' ? 1 : 0);
	spaces -= (arr[0] == '#' && (arr[4] == 'x' || arr[4] == 'X')) ? 2 : 0;
	spaces -= (arr[0] == '#' && arr[4] == 'o' && arr[2] == -1) ? 1 : 0;
	padding = arr[2] - len;
	padding -= (arr[0] == '#' && arr[4] == 'o' && arr[2] != -1) ? 1 : 0;
	if (arr[0] != '-')
	{
		arr[0] == '0' ? ft_putnchars(spaces, '0') : 0;
		arr[0] != '0' && !(arr[0] == '#' && arr[2] == 0) ? ft_putnchars(spaces, ' ') : 0;
		arr[0] == '#' ? ft_puthashtag(arr) : 0;
		arr[0] == '+' ? ft_putchar('+') : 0;
		ft_putnchars(padding, '0');
		arr[0] == '#' && arr[2] == 0 ? ft_putnchars(spaces, '0') : 0;
		nbr != 0 ? ft_printuox(nbr, arr) : 0;
	}
	else
	{
		ft_putnchars(padding, '0');
		ft_printuox(nbr, arr);
		ft_putnchars(spaces, ' ');
	}
	arr[5] += (spaces > 0 ? spaces : 0) + (padding > 0 ? padding : 0) +
	(arr[2] == 0 && arr[0] != '#' ? 0 : len) +
	(arr[0] == '#' && nbr != 0 && (arr[4] == 'x' || arr[4] == 'X') ? 2 : 0) +
	(arr[0] == '#' && nbr != 0 && arr[4] == 'o' && nbr != 0 ? 1 : 0);
}
