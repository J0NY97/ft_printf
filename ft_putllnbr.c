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

void	ft_putllnbr(long long int n)
{
	if (n == 9223372036854775807)
	{
		ft_putstr("9223372036854775807");
		return ;
	}
	else if (n < -9223372036854775807)
	{
		ft_putstr("9223372036854775808");
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putllnbr(n / 10);
		ft_putllnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
