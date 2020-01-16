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

void	ft_putp(int *arr, va_list ap)
{
	int spaces;
	int padding;
	int len;
	unsigned long int nbr;

	nbr = va_arg(ap, unsigned long);
	len = ft_baselen(nbr, 16);
	padding = arr[2] - len > 0 ? arr[2] - len : 0;
	spaces = arr[1] - (padding > 0 ? padding : len) - 2;
	arr[0] != '-' ? ft_putnchars(spaces, ' ') : 0;
	ft_putstr("0x");
	nbr != 0 && arr[2] > 0 && arr[1] > arr[2] ?
		ft_putnchars(padding, '0') : 0;
	if ((arr[2] == '0' && nbr != 0) || (arr[2] != 0))
	{
		ft_putadr(nbr);
		arr[5] += len + (nbr != 0 ? 2 : 0);
	}
	else
		arr[5] += 2 + (arr[2] != -1 ? arr[2] : 0);
	nbr == 0 && arr[2] != -1 ? ft_putnchars(arr[2], '0') : 0;
	arr[0] == '-' ? ft_putnchars(spaces, ' ') : 0;
	arr[5] += spaces > 0 ? spaces : 0;
}
