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

/*
** instead of having int space_value = arr[1];
**	just type int spaces = arr[1] - ...
**
** arr[0] == '0' && arr[2] > 0... used to be
** arr[0] == '0' && arr[2] != -1 but it didnt work if precision was < 0
** which apparently should be ignored if its < 0....?
*/

/*
** THESE RULES VERY IMPORTANT
*/
// if precision == 0 && nbr == 0 >> dont print nbr
// if precision == 0 && nbr != 0 >> dont print anything but the nbr
// if precison > 0 >> max printable in other chars than nbr and ' ' is precision

// if flag == '0' >> print spaces as '0'
// if flag == '+' >> print '+' infront of nbr
// if flag == '0' and flag2 == '+' >> print '+' infront of +
// if flag == '-' >> print spaces after nbr
// if flag == '0' and flag2 == '-' >> ignore '-'
// if flag == '-' and flag2 == '+' >> printf + infront of number and spaces behind
// spaces = width - len - +

static void	ft_putdipos_retry(long long int nbr, int len, int *arr)
{
	int spaces;
	int padding;
	int spacechar;
	int isplus;
	int isminus;

	nbr == 0 && arr[2] == 0 ? len = 0 : 0;
	padding = (arr[2] - len < 0 ? 0 : arr[2] - len);
	spaces = (arr[1] - (padding + len) < 0 ? 0 : arr[1] - (padding + len));
	// not sure about this one
	arr[2] > -1 && arr[0] == '0' ? arr[0] = -1 : 0;
	arr[2] > -1 && arr[6] == '0' ? arr[6] = -1 : 0;
	spacechar = ((arr[0] == '0' || arr[6] == '0') && arr[0] != '-' && arr[6] != '-'  ? '0' : ' ');
	// one needs to be removed from spaces if there is a ' ' in flags
	spaces -= (arr[0] == ' ' || arr[6] == ' ' ? 1 : 0);
	isplus = arr[0] == '+' || arr[6] == '+' ? 1 : 0;
	isminus = (arr[0] == '-' || arr[6] == '-') ? 1 : 0;
	//printf("spac %d pad %d len %d %c %d\n", spaces, padding, len, arr[0], arr[6]);
	//printf("%d - (%d + %d)", arr[1], padding, len);
	// if there is plus figure out where it goes
	if (isplus && !isminus)
	{
		spaces--;
		if (spacechar == '0') // if no spaces or 0 as spacechar and '+' print '+' infront of '0'
		{
			ft_putchar('+');
			ft_putnchars(spaces, spacechar);
		}
		else if (spacechar == ' ')
		{
			ft_putnchars(spaces, spacechar);
			ft_putchar('+');
		}
		ft_putnchars(padding, '0');
		// if precision is 0 dont print the number if its 0
		arr[2] == 0 && nbr == 0 ? 0 : ft_putllnbr(nbr);
	}
	else if (isminus) // if no plus
	{
		//printf(" minus");
		if (isplus)
		{
		//	printf(" and plus");
			spaces--;
			ft_putchar('+');
		}
		ft_putnchars(padding, '0');
		arr[2] == 0 && nbr == 0 ? 0 : ft_putllnbr(nbr);
		ft_putnchars(spaces, spacechar);
	}
	else // normal putting
	{
		ft_putnchars(spaces, spacechar);
		ft_putnchars(padding, '0');
		arr[2] == 0 && nbr == 0 ? 0 : ft_putllnbr(nbr);
	}
	arr[5] += (padding > 0 ? padding : 0) + (spaces > 0 ? spaces : 0) +
			len + isplus;
}

// this code has len++ at places because the nbr coming in is positive...
// ...and when the - is printed it will + one to len
static void	ft_putdineg_retry(long long int nbr, int len, int *arr)
{
	int spaces;
	int padding;
	int spacechar;
	int isminus;

	padding = (arr[2] - len < 0 ? 0 : arr[2] - len);
	spaces = (arr[1] - (padding + len) < 0 ? 0 : arr[1] - (padding + len));
	arr[2] > -1 && arr[0] == '0' ? arr[0] = -1 : 0;
	arr[2] > -1 && arr[6] == '0' ? arr[6] = -1 : 0;
	spacechar = ((arr[0] == '0' || arr[6] == '0') && arr[0] != '-' && arr[6] != '-'  ? '0' : ' ');
	// one needs to be removed from spaces if there is a ' ' in flags
	//spaces -= (arr[0] == ' ' || arr[6] == ' ' ? 1 : 0);
	// if precisoin is 0 and nbr == 0, add one to space becuase you dont print the 0
	spaces += (arr[2] == 0 && nbr == 0 ? 1 : 0);
	isminus = (arr[0] == '-' || arr[6] == '-') ? 1 : 0;
	//printf("spac %d pad %d len %d %c %d\n", spaces, padding, len, arr[0], arr[6]);
	//printf("%d - (%d + %d)", arr[1], padding, len);
	// if there is plus figure out where it goes
	len++;
	if (!isminus)
	{
		spaces--;
		if (spacechar == '0') // if no spaces or 0 as spacechar and '+' print '+' infront of '0'
		{
			ft_putchar('-');
			ft_putnchars(spaces, spacechar);
		}
		else if (spacechar == ' ')
		{
			ft_putnchars(spaces, spacechar);
			ft_putchar('-');
		}
		ft_putnchars(padding, '0');
		// if precision is 0 dont print the number if its 0
		arr[2] == 0 && nbr == 0 ? 0 : ft_putllnbr(nbr);
	}
	else if (isminus) // if no plus
	{
		spaces--;
		ft_putchar('-');
		ft_putnchars(padding, '0');
		arr[2] == 0 && nbr == 0 ? 0 : ft_putllnbr(nbr);
		ft_putnchars(spaces, spacechar);
	}
	else // normal putting
	{
		ft_putnchars(spaces, spacechar);
		ft_putnchars(padding, '0');
		ft_putllnbr(nbr);
	}
	arr[5] += (padding > 0 ? padding : 0) + (spaces > 0 ? spaces : 0) + len;
}

void		ft_putdi(long long int nbr, int len, int *arr)
{
	//printf("arr[0]: %c\narr[6]: %d\narr[2]: %d\n", arr[0], arr[6], arr[2]);
	// if the flag is space (1 or more) it will print 1 space
	//(arr[2] == -2 || arr[0] == ' ') && nbr >= 0 && arr[0] != '+' && arr[6] != '+' ? write (1, " ", 1) : 0;
	(arr[0] == ' ' || arr[6] == ' ') && arr[0] != '+' && arr[6] != '+' && nbr >= 0  ? ft_putchar(' ') : 0;
	(arr[0] == ' ' || arr[6] == ' ') && arr[0] != '+' && arr[6] != '+' && nbr >= 0 ? arr[5]++ : 0;
	// if the nbr is negative dont print space because the minus counts as one?
	if (nbr < 0)
		ft_putdineg_retry(nbr *= -1, len - 1, arr);
	else
		ft_putdipos_retry(nbr, len, arr);
	//(arr[0] == ' ' || arr[6] == ' ') && arr[0] != '+' && arr[6] != '+' && nbr < 0  ? ft_putchar(' ') : 0;
}

