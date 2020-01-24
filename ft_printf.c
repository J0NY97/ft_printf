/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 16:03:55 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/17 12:47:58 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_values(int *arr)
{
	int i;

	i = 4;
	while (i >= 0)
	{
		arr[i] = -1;
		i--;
	}
	arr[6] = -1;
}

void	print_width_amount_of_spaces(int *arr)
{
	ft_putnchars(arr[1], ' ');
	arr[5] += arr[1];
}

int	ft_printf(const char *restrict format, ...)
{
	va_list	ap;
	int		i;
	int		arr[7];

	i = 0;
	arr[5] = 0;
	va_start(ap, format);
	while (format[i])
	{
		reset_values(arr);
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (arr[5]);
			get_values(format, &i, arr, ap);
			//printf("\nflag: %d\nwidth %d\nprecision: %d\nlength: %d\nspecifier: %c\n",
			//arr[0], arr[1], arr[2], arr[3], arr[4]);
			// this space thingy doesnt work because of retarded shit so... i have to fix this somehow.. GREAT!
			// maybe fixed... probably knot
			(arr[0] == ' ' || arr[2] == -2) && arr[0] != '+' && arr[6] != '+' &&
			!ft_strchr("uoxX%", arr[4]) ? arr[5]++ : 0;
			arr[4] != -1 ? flag_thingys(arr, ap) : 0;
		}
		else
		{
			arr[5]++;
			ft_putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (arr[5]);
}
