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

/*
**	Flags
**	Width
**	Precision
**	Length
**	Specifier
*/

static void	set_width(const char *fmt, int *i, int *arr, va_list ap)
{
	fmt[*i] == '*' ? arr[1] = va_arg(ap, int) : 0;
	fmt[*i] != '*' ? arr[1] = ft_atoi(&fmt[*i]) : 0;
	fmt[*i] != '*' && (arr[1] > 9) ? *i += 1 : 0;
}

static void	set_precision(const char *fmt, int *i, int *arr, va_list ap)
{
	ft_isdigit(fmt[*i + 1]) || fmt[*i + 1] == '*' ? *i += 1 : 0;
	fmt[*i] == '*' && arr[2] != -2 ? arr[2] = va_arg(ap, int) : 0;
	fmt[*i] == '*' && arr[2] == -2 ? (void)va_arg(ap, int) : 0;
	if (arr[2] == -2)
		return ;
	arr[2] = (fmt[*i] == '*' && arr[2] != -1 ? arr[2] : -1);
	fmt[*i] != '*' && ft_isdigit(fmt[*i]) ?
						arr[2] = ft_atoi(&fmt[*i]) : 0;
	fmt[*i] != '*' && !ft_isdigit(fmt[*i]) ? arr[2] = 0 : 0;
	fmt[*i] != '*' && (arr[2] > 9) && ft_isdigit(fmt[*i]) ?
						*i += 1 : 0;
}

static void	set_length(const char *fmt, int *i, int *arr)
{
	(fmt[*i] == 'l' && fmt[*i + 1] == 'l') ? arr[3] = 1 : 0;
	(fmt[*i] == 'l' && fmt[*i + 1] != 'l') ? arr[3] = 2 : 0;
	(fmt[*i] == 'h' && fmt[*i + 1] == 'h') ? arr[3] = 3 : 0;
	(fmt[*i] == 'h' && fmt[*i + 1] != 'h') ? arr[3] = 4 : 0;
	(fmt[*i] == 'L') ? arr[3] = 5 : 0;
	(arr[3] == 1 || arr[3] == 3) ? *i += 1 : 0;
}

static void set_flags(const char *fmt, int *i, int *arr)
{
	if (arr[0] == -1)
	{
		arr[0] = fmt[*i];
		return ;
	}
	else if (arr[0] != -1)
	{
		if (arr[0] == '0' && fmt[*i] == '-')
		{
			arr[0] = '-';
			return ;
		}
		else if (arr[6] == '0' && fmt[*i] == '-')
		{
			arr[6] = '-';
			return ;
		}
		if (arr[0] == ' ' && fmt[*i] == '+')
		{
			arr[0] = '+';
			return ;
		}
		else if (arr[6] == ' ' && fmt[*i] == '+')
		{
			arr[6] = '+';
			return ;
		}
		if (arr[0] == '+' && fmt[*i] == '#')
		{
			arr[0] = '#';
			return ;
		}
		else if (arr[6] == '+' && fmt[*i] == '#')
		{
			arr[6] = '#';
			return ;
		}
	}
	if (arr[0] != fmt[*i] && arr[6] == -1)
		arr[6] = fmt[*i];
}

int			get_values(const char *fmt, int *i, int *arr, va_list ap)
{
	while (!ft_strchr("cspdiouxXf%", fmt[*i]) && fmt[*i] != '\0')
	{
		if (ft_strchr("-+#0 ", fmt[*i]) && fmt[*i - 1] != '.')
		{
			set_flags(fmt, i , arr);
		}
		// change this is everything has gone to shit
		if ((ft_isdigit(fmt[*i]) || fmt[*i] == '*') && fmt[*i - 1] != '.' &&
			!(fmt[*i - 1] == '%' && (arr[0] == '0' || arr[6] == '0')) && fmt[*i] != '0' && arr[2] < 0)
		{
			set_width(fmt, i, arr, ap);
		}
		if (fmt[*i] == '.')
			set_precision(fmt, i, arr, ap);
		if (ft_strchr("lhL", fmt[*i]))
			set_length(fmt, i, arr);
		*i += 1;
	}
	arr[0] == -1 && arr[1] < -1 ? arr[0] = '-' : 0;
	// wtf is this!
	arr[1] < -1 ? arr[1] *= -1 : 0;
	ft_strchr("cspdiouxXf%", fmt[*i]) && fmt[*i] != '\0' ? arr[4] = fmt[*i] : 0;
	return (1);
}
