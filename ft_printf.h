/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 16:03:15 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/17 12:27:05 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"
# include <stdio.h> // remove this

int				ft_printf(const char *restrict format, ...);
int				get_values(const char *format, int *i, int *arr, va_list ap);
/*
** Flag Things
*/
void			flag_thingys(int *arr, va_list ap);
void			flag_di(int *arr, va_list ap);
void			flag_csp(int *arr, va_list ap);
void			flag_uox(int *arr, va_list ap);
void			flag_f(int *arr, va_list ap);
/*
** Put Things
*/
void			ft_putdi(long long int nbr, int len, int *arr);
void			ft_putuox(unsigned long long int nbr, int len, int *arr);
void			ft_putp(int *arr, va_list ap);
void			ft_putc(int *arr, va_list ap);
void			ft_puts(int *arr, va_list ap);
void			ft_putf(long double nbr, int *arr);
/*
** Help functions
*/
int				ft_llnbrlen(long long int nbr);
void			ft_putnnbr(long long nb, int x);
void			ft_putllnbr(long long int n);
int				ft_baselen(unsigned long long int nbr, int base);
void			ft_putnchars(int n, char c);
void			ft_putoctal(unsigned long long int nb);
void			ft_puthex(unsigned long long int nb, int upper);
void			ft_putuint(unsigned long long int n);
void			ft_putadr(unsigned long long nb);
void			ft_putfloat(long double nb, int precision);
void			ft_putnstr(char *str, int len);

#endif
