/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 12:23:18 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/17 12:44:19 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printuox(unsigned long long int nbr, int *arr)
{
	arr[4] == 'u' ? ft_putuint(nbr) : 0;
	arr[4] == 'o' ? ft_putoctal(nbr) : 0;
	arr[4] == 'x' ? ft_puthex(nbr, 0) : 0;
	arr[4] == 'X' ? ft_puthex(nbr, 1) : 0;
}

static void	ft_puthashtag(int *arr, unsigned long long int nbr)
{
	//  if precision is 0 dont print this
	// no way this is correct
	if ((arr[2] != 0 && nbr != 0) || (arr[2] == 0 && nbr != 0) || (arr[2] == 0 && nbr == 0))
	{
		arr[4] == 'o' ? ft_putchar('0') : 0;
		arr[5] += arr[4] == 'o' ? 1 : 0;
	}
	if (nbr != 0)
	{
		arr[4] == 'x' ? ft_putstr("0x") : 0;
		arr[4] == 'X' ? ft_putstr("0X") : 0;
		arr[5] += arr[4] == 'x' || arr[4] == 'X' ? 2 : 0;
	}
}

void		ft_putuox(unsigned long long int nbr, int len, int *arr)
{
	int spaces;
	int padding;
	int spacechar;
	int ishash;
	int isminus;

	ishash = arr[0] == '#' || arr[6] == '#' ? 1 : 0;
	isminus = (arr[0] == '-' || arr[6] == '-') ? 1 : 0;
	//printf("isminus: ?%d?", isminus);
	// if nbr == 0 and precision == 0 dont print the nbr => len = 0
	nbr == 0 && arr[2] == 0 ? len = 0 : 0;
	padding = (arr[2] - len < 0 ? 0 : arr[2] - len);
	// dont know if next 2 lines are correct
	// padding -= ishash && (arr[4] == 'x' || arr[4] == 'X') ? 2 : 0;
	padding -= ishash && arr[4] == 'o' && padding - 1 > 0 ? 1 : 0; //<-- probably not
	spaces = (arr[1] - (padding + len) < 0 ? 0 : arr[1] - (padding + len));
	// not sure about this one
	arr[2] > -1 && arr[0] == '0' ? arr[0] = -1 : 0;
	arr[2] > -1 && arr[6] == '0' ? arr[6] = -1 : 0;
	spacechar = ((arr[0] == '0' && arr[6] != '-') || (arr[6] == '0' && arr[0] != '-') ? '0' : ' ');
	// one needs to be removed from spaces if there is a ' ' in flags
	spaces -= (arr[0] == ' ' || arr[6] == ' ' ? 1 : 0);
	//printf("spac %d pad %d len %d %d %d\n", spaces, padding, len, arr[0], arr[6]);
	// if there is plus figure out where it goes
	if (ishash && !isminus)
	{
		spaces -= arr[4] == 'o' && nbr != 0 ? 1 : 0;
		spaces -= (arr[4] == 'x' || arr[4] == 'X') && nbr != 0 ? 2 : 0;
		if (spacechar == '0') // if no spaces or 0 as spacechar and '+' print '+' infront of '0'
		{
			ft_puthashtag(arr, nbr);
			ft_putnchars(spaces, spacechar);
		}
		else if (spacechar == ' ')
		{
			ft_putnchars(spaces, spacechar);
			ft_puthashtag(arr, nbr);
		}
		ft_putnchars(padding, '0');
		// if precision is 0 dont print the number if its 0
		arr[2] == 0 && nbr == 0 ? 0 : ft_printuox(nbr, arr);
	}
	else if (isminus)
	{
		if (ishash)
		{
			spaces -= arr[4] == 'o' && nbr != 0 ? 1 : 0;
			spaces -= (arr[4] == 'x' || arr[4] == 'X') && nbr != 0 ? 2 : 0;
			ft_puthashtag(arr, nbr);
		}
		ft_putnchars(padding, '0');
		arr[2] == 0 && nbr == 0 ? 0 : ft_printuox(nbr, arr);
		ft_putnchars(spaces, spacechar);
	}
	else // normal putting
	{
		ft_putnchars(spaces, spacechar);
		ft_putnchars(padding, '0');
		arr[2] == 0 && nbr == 0 ? 0 : ft_printuox(nbr, arr);
	}
	arr[5] += (padding > 0 ? padding : 0) + (spaces > 0 ? spaces : 0) + len;
}

// void		ft_putuox_old(unsigned long long int nbr, int len, int *arr)
// {
// 	int spaces;
// 	int padding;

// 	spaces = arr[1] - ((arr[2] > len) ? arr[2] : len) -
// 	(arr[0] == '+' ? 1 : 0);
// 	spaces -= ((arr[0] == '#' || arr[6] == '#') && (arr[4] == 'x' || arr[4] == 'X')) ? 2 : 0;
// 	spaces -= (arr[0] == '#' || arr[6] == '#') && arr[4] == 'o' && arr[2] == -1 ? 1 : 0;
// 	spaces -= (arr[0] == '#' || arr[6] == '#') && arr[4] == 'o' && arr[2] == 0 ? 1 : 0;
// 	padding = arr[2] - len;
// 	padding -= (arr[0] == '#' && arr[4] == 'o' && arr[2] != -1) ? 1 : 0;
// 	if (arr[0] != '-' && arr[6] != '-')
// 	{
// 		arr[0] == '0' ? ft_putnchars(spaces, '0') : 0;
// 		arr[0] != '0' && !(arr[0] == '#' && arr[2] == 0) ? ft_putnchars(spaces, ' ') : 0;
// 		arr[0] == '#' && nbr != 0 ? ft_puthashtag(arr) : 0;
// 		arr[0] == '+' && arr[4] != 'u' ? ft_putchar('+') : 0;
// 		ft_putnchars(padding, '0');
// 		arr[0] == '#' && arr[2] == 0 ? ft_putnchars(spaces, '0') : 0;
// 		arr[0] == '#' && (nbr == 0 && (arr[2] != 0 || arr[4] == 'o'))
// 		? ft_printuox(nbr, arr) : 0;
// 		nbr != 0 ? ft_printuox(nbr, arr) : 0;
// 	}
// 	else
// 	{
// 		arr[0] == '#' || arr[6] == '#' ? ft_puthashtag(arr) : 0;
// 		ft_putnchars(padding, '0');
// 		ft_printuox(nbr, arr);
// 		ft_putnchars(spaces, ' ');
// 	}
// 	//printf("spa: %d", spaces);
// 	// printf("Len: %d\n", len);
// 	// printf("Yes: %d\n", (arr[0] == '#' && nbr != 0 && (arr[4] == 'x' || arr[4] == 'X') ? 2 : 0));
// 	// printf("Spaces: %d\n", spaces);
// 	// printf("arr[2]: %d\n", arr[2]);
// 	// printf("Yes or no: %d\n", (arr[2] == 0 && arr[0] == '#' && arr[4] != 'o' ? len : 0));
// 	arr[5] += (spaces > 0 ? spaces : 0) + (padding > 0 ? padding : 0) +
// 	(arr[2] == 0 && arr[0] != '#' && arr[6] != '#' && arr[0] != '-' && arr[6] != '-' ? 0 : len) +
// 	((arr[0] == '#' || arr[6] == '#') && nbr != 0 && (arr[4] == 'x' || arr[4] == 'X') ? 2 : 0) +
// 	((arr[0] == '#' || arr[6] == '#') && nbr != 0 && arr[4] == 'o' ? 1 : 0);
// 	// i have no idea why this needs to be here... to be seen
// 	arr[5] -= (arr[2] == 0 && arr[0] == '#' && arr[4] != 'o' && nbr == 0 ? 1 : 0);
// }
