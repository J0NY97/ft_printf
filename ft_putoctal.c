/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 17:54:29 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/16 14:45:13 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putoctal(unsigned long long int nb)
{
	if (nb >= 8)
	{
		ft_putoctal(nb / 8);
		ft_putoctal(nb % 8);
	}
	else
		ft_putllnbr(nb);
}
