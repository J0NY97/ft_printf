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

void	ft_putc(int *arr, va_list ap)
{
	int spaces;
	int len;

	len = 0;
	spaces = arr[1] - 1;
	arr[0] != '-' ? ft_putnchars(spaces, ' ') : 0;
	ft_putchar(va_arg(ap, int));
	arr[0] == '-' ? ft_putnchars(spaces, ' ') : 0;
	len += spaces > 0 ? spaces + 1 : 1;
	arr[5] += len;
}

void	ft_puts(int *arr, va_list ap)
{
	int		len;
	int		spaces;
	char	*str;
	int		zero;

	zero = 0;
	str = va_arg(ap, char *);
	if (str == NULL)
	{
		str = ft_strdup("(null)");
		zero = 1;
	}
	arr[2] < -1 ? arr[2] *= -1 : 0;
	len = arr[2] == -1 || arr[2] > (int)ft_strlen(str) ? ft_strlen(str) : arr[2];
	arr[2] == 0 ? len = 0 : 0;
	spaces = arr[1] - len;
	arr[0] != '-' ? ft_putnchars(spaces, ' ') : 0;
	ft_putnstr(str, len);
	arr[0] == '-' ? ft_putnchars(spaces, ' ') : 0;
	zero == 1 ? ft_strdel(&str) : 0;
	arr[5] += len + (spaces > 0 ? spaces : 0);
}
