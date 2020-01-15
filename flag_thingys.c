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

void	flag_thingys(int *arr, va_list ap)
{
	ft_strchr("csp", arr[4]) ? flag_csp(arr, ap) : 0;
	ft_strchr("di", arr[4]) ? flag_di(arr, ap) : 0;
	ft_strchr("uoxX", arr[4]) ? flag_uox(arr, ap) : 0;
	arr[4] == '%' ? ft_putchar('%') : 0;
	arr[4] == '%' ? arr[5]++ : 0;
	arr[4] == 'f' ? flag_f(arr, ap) : 0;
}

void	flag_csp(int *arr, va_list ap)
{
	arr[4] == 'p' ? ft_putp(arr, ap) : 0;
	arr[4] == 'c' ? ft_putc(arr, ap) : 0;
	arr[4] == 's' ? ft_puts(arr, ap) : 0;
}

void	flag_di(int *arr, va_list ap)
{
	int				len;
	long long int	nbr;

	arr[3] == -1 ? nbr = va_arg(ap, int) : 0;
	arr[3] == 3 ? nbr = (signed char)va_arg(ap, void *) : 0;
	arr[3] == 4 ? nbr = (short int)va_arg(ap, void *) : 0;
	arr[3] == 2 ? nbr = (long int)va_arg(ap, void *) : 0;
	arr[3] == 1 ? nbr = (long long int)va_arg(ap, void *) : 0;
	len = ft_llnbrlen(nbr);
	ft_putdi(nbr, len, arr);
}

void	flag_uox(int *arr, va_list ap)
{
	int						len;
	unsigned long long int	nbr;

	arr[3] == -1 ? nbr = va_arg(ap, unsigned int) : 0;
	arr[3] == 3 ? nbr = (unsigned char)va_arg(ap, void *) : 0;
	arr[3] == 4 ? nbr = (unsigned short int)va_arg(ap, void *) : 0;
	arr[3] == 1 ? nbr = (unsigned long long int)va_arg(ap, void *) : 0;
	arr[3] == 2 ? nbr = (unsigned long int)va_arg(ap, void *) : 0;
	arr[4] == 'u' ? len = ft_baselen(nbr, 10) : 0;
	arr[4] == 'o' ? len = ft_baselen(nbr, 8) : 0;
	arr[4] == 'x' || arr[4] == 'X' ? len = ft_baselen(nbr, 16) : 0;
	// added this line, could have broken something else
	!(arr[2] == '0' && nbr == 0) ? ft_putuox(nbr, len, arr) : 0;
	arr[2] == -1 && nbr == 0 && arr[0] == -1 ? ft_putchar('0') : 0;
}

void	flag_f(int *arr, va_list ap)
{
	long double nbr;

	arr[3] == -1 ? nbr = va_arg(ap, double) : 0;
	arr[3] == 5 ? nbr = (long double)va_arg(ap, long double) : 0;
	arr[3] != -1 && arr[3] != 5 ? nbr = va_arg(ap, double) : 0;
	ft_putf(nbr, arr);
}
