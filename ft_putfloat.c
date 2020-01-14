/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfloat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:23:05 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/13 15:26:48 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		getfirstnbr(long long nb)
{
	int len;

	nb < 0 ? nb *= -1 : 0;
	len = ft_llnbrlen(nb);
	while (len > 1)
	{
		nb /= 10;
		len--;
	}
	return ((int)nb);
}

void	ft_putfloat(long double nb, int precision)
{
	long long f;

	//f = (nb * 100000000000000) - ((long long)nb * 100000000000000);
	// problem here is that you can only have max .6 precision
	f = (nb * 1000000) - ((long long)nb * 1000000);
	precision <= 0 && getfirstnbr(f) > 4 && nb < 0 ? nb-- : 0;
	precision <= 0 && getfirstnbr(f) > 4 && nb > 0 ? nb++ : 0;
	ft_putllnbr(nb);
	if (precision > 0)
	{
		f < 0 ? f *= -1 : 0;
		ft_llnbrlen(f) > precision ? f++ : 0;
		ft_putchar('.');
		ft_putnnbr(f, precision);
	}
}
