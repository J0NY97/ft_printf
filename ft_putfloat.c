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

int		get_nthnbr(long long nb, int n)
{
	int len;

	nb < 0 ? nb *= -1 : 0;
	len = ft_llnbrlen(nb);
	while (len > n)
	{
		nb /= 10;
		len--;
	}
	return ((int)nb);
}

int rounderoni(long long x)
{
	if ((x % 10 == 5 && ((x % 100 - x % 10) / 10) % 2 != 0) || x % 10 > 4)
		return (1);
	return (0);
}

long long rounded(long long x)
{
	printf("xXx%lldxXx", x);
	if (rounderoni(x))
		x += 10;
	x /= 10;
	printf("CCCP%lldCCCP", x);
	return (x);
}

void	ft_putfloat(long double nb, int precision, int zeros)
{
	long double f;
	long long x = 0;
	int i = 0;
	int nbrlen;

	nb < 0 ? ft_putchar('-') : 0;
	nb < 0 ? nb *= -1 : 0;
	f = (nb) - (long long)nb;
//	printf("x>%.14Lf<x", f);
	f += 0.000000000000001;
	while (precision - i > -1 )//|| f >= 0.0001)
	{
		f *= 10;
		x += (int)f;
		f = f - (int)f;
		i++;
		precision - i > -1 ? x *= 10 : 0;
		if (x == 0 && precision - i > 0)
			zeros++;
	}
	nbrlen = ft_llnbrlen(x) - 1;
	nbrlen < ft_llnbrlen(rounded(x)) && rounderoni(x) ? nb++ : 0;
	//printf("len: %d\n x: %d\n", nbrlen, ft_llnbrlen(rounded(x)));
	//printf("before: %lld\n after: %lld\n round? : %d\n", x, rounded(x), round(x));
	ft_putllnbr(nb);
	if (precision > 0)
	{
		ft_putchar('.');
		ft_putnchars(zeros, '0');
		nbrlen < ft_llnbrlen(rounded(x)) ? ft_putnchars(precision - zeros, '0') : ft_putllnbr(rounded(x));
	}
}
