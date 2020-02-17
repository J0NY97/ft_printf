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

// the rounding is for some reason made in this function
void	ft_putnnbr(long long nb, int x)
{
		//printf("\n%d %d\n", x, ft_llnbrlen(nb));
	while (ft_llnbrlen(nb) > x)
	{
		nb /= 10;
	}
	//	ft_putchar('z');
	//printf("[%lld]",  nb);
	if ((nb % 10 == 5 && ((nb % 100 - nb % 10) / 10) % 2 != 0) || nb % 10 > 4)
	{
		nb += 10;
	}
	nb /= 10;
	ft_putllnbr(nb);
	ft_llnbrlen(nb) < x ? ft_putnchars(x - ft_llnbrlen(nb), '0') : 0;
}
