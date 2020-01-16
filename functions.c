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
	fmt[*i] == '*' ? arr[2] = va_arg(ap, int) : 0;
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
	ft_strchr("-+#0", arr[0]) && fmt[*i] == '0' ? arr[2] = 0 : 0;
	arr[0] == -1 || arr[0] == ' ' ? arr[0] = fmt[*i] : 0;
}

int			get_values(const char *fmt, int *i, int *arr, va_list ap)
{
	while (!ft_strchr("cspdiouxXf%", fmt[*i]))
	{
		if (ft_strchr("-+#0 ", fmt[*i]) && fmt[*i - 1] != '.')
		{
			set_flags(fmt, i , arr);
		}
		if ((ft_isdigit(fmt[*i]) || fmt[*i] == '*') && fmt[*i - 1] != '.' &&
			(fmt[*i - 1] != '%' || arr[0] != '0') && fmt[*i] != '0')
		{
			set_width(fmt, i, arr, ap);
		}
		if (fmt[*i] == '.')
			set_precision(fmt, i, arr, ap);
		if (ft_strchr("lhL", fmt[*i]))
			set_length(fmt, i, arr);
		*i += 1;
	}
	// no way these 2 lines work, if you have %*d, -1, 42 for example... -1 is default for nothing
	// nvm... apparently its not supposed to work with -1 thank god
	arr[0] == -1 && arr[1] < -1 ? arr[0] = '-' : 0;
	arr[1] < -1 ? arr[1] *= -1 : 0;
	arr[4] = fmt[*i];
	return (1);
}
