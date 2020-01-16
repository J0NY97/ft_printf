/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 17:54:29 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/11 15:27:09 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long int nb, int upper)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, upper);
		ft_puthex(nb % 16, upper);
	}
	else
	{
		if (nb >= 10)
		{
			nb == 10 ? ft_putchar('a' - (upper * 32)) : 0;
			nb == 11 ? ft_putchar('b' - (upper * 32)) : 0;
			nb == 12 ? ft_putchar('c' - (upper * 32)) : 0;
			nb == 13 ? ft_putchar('d' - (upper * 32)) : 0;
			nb == 14 ? ft_putchar('e' - (upper * 32)) : 0;
			nb == 15 ? ft_putchar('f' - (upper * 32)) : 0;
		}
		else
			ft_putnbr(nb);
	}
}
