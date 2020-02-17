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

int		get_zeros(long double nbr)
{
	int i = 0;
	double n = (int)nbr - nbr;
	while ((int)n == 0)
	{
		n *= 10;
		i++;
	}
	return (i - 1);
}

void	ft_putf(long double nbr, int *arr)
{
	int		len;
	int		spaces;
	int		precision;
	char	spacechar;
	int		zeros = 0;

	//zeros = nbr != 0 ? get_zeros(nbr) : 0;
	spacechar = ((arr[0] == '0' || arr[6] == '0') && arr[0] != '-' && arr[6] != '-' ? '0' : ' ');
	precision = (arr[2] == -1 ? 6 : arr[2]);
	//precision -= zeros;
	len = ft_llnbrlen(nbr) + precision + 1 + ((arr[0] == '+' || arr[6] == '+') && nbr > 0);
	spacechar == '0' && nbr < 0 ? ft_putchar('-') : 0;
	spacechar == '0' && nbr < 0 ? nbr *= -1 : 0;
	spaces = arr[1] - len;
	arr[0] != '-' && arr[6] != '-' ? ft_putnchars(spaces, spacechar) : 0;
	(arr[0] == '+' || arr[6] == '+') && nbr > 0 ? ft_putchar('+') : 0;
	// if its -0.something
	if (nbr < 0 && nbr > -1)
	{
		arr[5]++;
	}
	ft_putfloat(nbr, precision, zeros);
	arr[0] == '-' || arr[6] == '-' ? ft_putnchars(spaces, ' ') : 0;
	arr[5] += (spaces > 0 ? spaces : 0) + len - (precision == 0 ? 1 : 0) + zeros;
	// precision thingy is so that it wont + the dot
}
