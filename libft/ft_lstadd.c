/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:40:22 by jsalmi            #+#    #+#             */
/*   Updated: 2019/10/23 10:49:30 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *temp;

	temp = *alst;
	*alst = new;
	(*alst)->next = temp;
}
