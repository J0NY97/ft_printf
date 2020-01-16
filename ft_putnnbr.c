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

void	ft_putnnbr(long long nb, int x)
{
	while (ft_llnbrlen(nb) > x)
	{
		nb /= 10;
	}
	if (nb % 10 > 4)
		nb++;
	ft_putllnbr(nb);
	ft_llnbrlen(nb) < x ? ft_putnchars(x - ft_llnbrlen(nb), '0') : 0;
}
