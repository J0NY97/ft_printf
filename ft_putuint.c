/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:40:25 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/11 16:42:26 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint(unsigned long long int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n >= 10)
	{
		ft_putuint(n / 10);
		ft_putuint(n % 10);
	}
	else
		ft_putchar(n + '0');
}
