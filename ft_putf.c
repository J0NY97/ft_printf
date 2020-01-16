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

void	ft_putf(long double nbr, int *arr)
{
	int		len;
	int		spaces;
	int		precision;
	char	spacechar;

	spacechar = (arr[0] == '0' ? '0' : ' ');
	precision = (arr[2] == -1 ? 6 : arr[2]);
	len = ft_llnbrlen(nbr) + precision + 1 + (arr[0] == '+' && nbr > 0);
	spacechar == '0' && nbr < 0 ? ft_putchar('-') : 0;
	spacechar == '0' && nbr < 0 ? nbr *= -1 : 0;
	spaces = arr[1] - len;
	arr[0] != '-' ? ft_putnchars(spaces, spacechar) : 0;
	arr[0] == '+' && nbr > 0 ? ft_putchar('+') : 0;
	ft_putfloat(nbr, precision);
	arr[0] == '-' ? ft_putnchars(spaces, ' ') : 0;
	arr[5] += (spaces > 0 ? spaces : 0) + len - (precision == 0 ? 1 : 0);
	// precision thingy is so that it wont + the dot
}
