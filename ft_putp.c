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
	unsigned long int nbr;

	nbr = va_arg(ap, unsigned long);
	spaces = nbr > 0 ? arr[1] - 14 : arr[1] - 3;
	arr[0] != '-' ? ft_putnchars(spaces, ' ') : 0;
	ft_putstr("0x");
	if ((arr[2] == '0' && nbr != 0) || (arr[2] == -1 && nbr == 0) ||
		(arr[2] == -1 && nbr != 0))
	{
		ft_putadr(nbr);
		arr[5] += nbr != 0 ? 14 : 3;
	}
	else
		arr[5] += 2;
	arr[0] == '-' ? ft_putnchars(spaces, ' ') : 0;
	arr[5] += spaces > 0 ? spaces : 0;
}
