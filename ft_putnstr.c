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

void	ft_putnstr(char *str, int len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		ft_putchar(str[i]);
		len--;
		i++;
	}
}
