/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 14:24:29 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/16 14:45:50 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_baselen(unsigned long long int nbr, int base)
{
	int len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / base;
		len++;
	}
	return (len);
}
