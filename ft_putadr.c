/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 17:54:29 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/11 15:47:27 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadr(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_putadr(nb / 16);
		ft_putadr(nb % 16);
	}
	else
	{
		if (nb >= 10)
		{
			nb == 10 ? ft_putchar('a') : 0;
			nb == 11 ? ft_putchar('b') : 0;
			nb == 12 ? ft_putchar('c') : 0;
			nb == 13 ? ft_putchar('d') : 0;
			nb == 14 ? ft_putchar('e') : 0;
			nb == 15 ? ft_putchar('f') : 0;
		}
		else
			ft_putnbr(nb);
	}
}
