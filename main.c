/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 16:02:43 by jsalmi            #+#    #+#             */
/*   Updated: 2019/12/17 12:44:55 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	// printf("----------------D--------------\n");
	// long long int ll = 922337;
	// long long int lln = -922337;
	// ft_printf("%-20.10lld\n", ll);
	// printf("%-20.10lld\n", ll);
	// ft_printf("%+20.10lld\n", ll);
	// printf("%+20.10lld\n", ll);
	// ft_printf("%020lld\n",ll);
	// printf("%020lld\n",ll);
	// ft_printf("%20lld\n",ll);
	// printf("%20lld\n",ll);
	// ft_printf("%.20lld\n",ll);
	// printf("%.20lld\n",ll);
	// ft_printf("%04.2d\n", -1);
	// printf("%04.2d\n", -1);
	// printf("-------------negative D-----------\n");
	// ft_printf("%-20.10lld f\n", lln);
	// printf("%-20.10lld f\n", lln);
	// ft_printf("%+20.10lld f\n", lln);
	// printf("%+20.10lld f\n", lln);
	// ft_printf("%020lld f\n",lln);
	// printf("%020lld f\n",lln);
	// ft_printf("%20lld f\n",lln);
	// printf("%20lld f\n",lln);
	// ft_printf("%.20lld f\n",lln);
	// printf("%.20lld f\n",lln);
	// printf("---------------UOXX-----------\n");
	// unsigned long long int ulli = 453;
	// printf("%llu\n", ulli);
	// ft_printf("%llu\n", ulli);
	// printf("%llo\n", ulli);
	// ft_printf("%llo\n", ulli);
	// printf("%llx\n", ulli);
	// ft_printf("%llx\n", ulli);
	// printf("%llX\n", ulli);
	// ft_printf("%llX\n", ulli);
	// printf("----------------\n");
	// printf("%-20.10llu f\n", ulli);
	// ft_printf("%-20.10llu f\n", ulli);
	// printf("%-20.10llo f\n", ulli);
	// ft_printf("%-20.10llo f\n", ulli);
	// printf("%-20.10llx f\n", ulli);
	// ft_printf("%-20.10llx f\n", ulli);
	// printf("%-20.10llX f\n", ulli);
	// ft_printf("%-20.10llX f\n", ulli);
	// printf("----------------\n");
	// printf("%20llu\n", ulli);
	// ft_printf("%20llu\n", ulli);
	// printf("%20llo\n", ulli);
	// ft_printf("%20llo\n", ulli);
	// printf("%20llx\n", ulli);
	// ft_printf("%20llx\n", ulli);
	// printf("%20llX\n", ulli);
	// ft_printf("%20llX\n", ulli);
	// printf("----------------\n");
	// printf("%.20llu\n", ulli);
	// ft_printf("%.20llu\n", ulli);
	// printf("%.20llo\n", ulli);
	// ft_printf("%.20llo\n", ulli);
	// printf("%.20llx\n", ulli);
	// ft_printf("%.20llx\n", ulli);
	// printf("%.20llX\n", ulli);
	// ft_printf("%.20llX\n", ulli);
	// printf("----------------\n");
	// printf("%20.20llu\n", ulli);
	// ft_printf("%20.20llu\n", ulli);
	// printf("%20.20llo\n", ulli);
	// ft_printf("%20.20llo\n", ulli);
	// printf("%20.20llx\n", ulli);
	// ft_printf("%20.20llx\n", ulli);
	// printf("%20.20llX\n", ulli);
	// ft_printf("%20.20llX\n", ulli);
	// printf("----------------\n");
	// printf("%#20.10llo\n", ulli);
	// ft_printf("%#20.10llo\n", ulli);
	// printf("%#20.10llx\n", ulli);
	// ft_printf("%#20.10llx\n", ulli);
	// printf("%#20.10llX\n", ulli);
	// ft_printf("%#20.10llX\n", ulli);
	// printf("----------------\n");
	// printf("%#20llo\n", ulli);
	// ft_printf("%#20llo\n", ulli);
	// printf("%#20llx\n", ulli);
	// ft_printf("%#20llx\n", ulli);
	// printf("%#20llX\n", ulli);
	// ft_printf("%#20llX\n", ulli);
	// printf("--------P-------\n");
	// int pp = 4;
	// int *p = &pp;
	// int ppa = 34;
	// int *pa = &ppa;
	// printf("%p\n", p);
	// ft_printf("%p\n", p);
	// printf("%20p\n", p);
	// ft_printf("%20p\n", p);
	// printf("%-20p f\n", p);
	// ft_printf("%-20p f\n", p);
	// printf("----------------\n");
	// printf("%p\n", pa);
	// ft_printf("%p\n", pa);
	// printf("%20p\n", pa);
	// ft_printf("%20p\n", pa);
	// printf("%-20p f\n", pa);
	// ft_printf("%-20p f\n", pa);
	// printf("--------C-------\n");
	// char c = 'A';
	// printf("%c\n", c);
	// ft_printf("%c\n", c);
	// printf("%10c\n", c);
	// ft_printf("%10c\n", c);
	// printf("%-10c f\n", c);
	// ft_printf("%-10c f\n", c);
	// printf("---------------S-------------\n");
	// char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	// printf("%s\n", str);
	// ft_printf("%s\n", str);
	// printf("%30s\n", str);
	// ft_printf("%30s\n", str);
	// printf("%-30s f\n", str);
	// ft_printf("%-30s f\n", str);
	// printf("%.3s\n", str);
	// ft_printf("%.3s\n", str);
	// printf("%30.3s\n", str);
	// ft_printf("%30.3s\n", str);
	// printf("%-30.3s f\n", str);
	// ft_printf("%-30.3s f\n", str);
	// printf("%*s\n", 30, str);
	// ft_printf("%*s\n", 30, str);
	// printf("%.*s f\n", 3, str);
	// ft_printf("%.*s f\n", 3, str);

	// printf("------------F------------\n");
	// //double f = 12345.5678912;
	// double f = -11.123;
	// long double lf = -12345.5678913435;
	// double fdeci = 11;
	// printf("%f\n", f);
	// ft_printf("%f\n", f);
	// printf("%20f\n", f);
	// ft_printf("%20f\n", f);
	// printf("%-20f f\n", f);
	// ft_printf("%-20f f\n", f);
	// printf("%20.3f\n", f);
	// ft_printf("%20.3f\n", f);
	// printf("%-20.3f f\n", f);
	// ft_printf("%-20.3f f\n", f);

	// printf("%.Lf\n", lf);
	// ft_printf("%.Lf\n", lf);
	// printf("%020Lf\n", lf);
	// ft_printf("%020Lf\n", lf);
	// printf("%20Lf\n", lf);
	// ft_printf("%20Lf\n", lf);
	// printf("%-20Lf f\n", lf);
	// ft_printf("%-20Lf f\n", lf);
	// printf("%20.3Lf\n", lf);
	// ft_printf("%20.3Lf\n", lf);
	// printf("%-20.3Lf f\n", lf);
	// ft_printf("%-20.3Lf f\n", lf);

	// printf("%.20Lf\n", lf);
	// ft_printf("%.20Lf\n", lf);

	// printf("%+20f\n", f);
	// ft_printf("%+20f\n", f);
	// printf("%+.20f\n", f);
	// ft_printf("%+.20f\n", f);

	// printf("%020f\n", f);
	// ft_printf("%020f\n", f);

	// printf("They: %.6f\n", fdeci);
	// ft_printf("Mine: %.6f\n", fdeci);

	// printf("They: %#f\n", fdeci);
	// ft_printf("Mine: %#f\n", fdeci);
	// printf("------------* and .*------------\n");
	// printf("%.*d\n", 15, 8);
	// ft_printf("%.*d\n", 15, 8);

	// printf("%*d\n", 15, 8);
	// ft_printf("%*d\n", 15, 8);
	// ft_printf("--------------------------------\n");
	// printf("%.4s\n", NULL);
	// ft_printf("%.4s\n", NULL);
	// printf("42%13lc42\n", 'j');
	// ft_printf("42%13lc42\n", 'j');
	// ft_printf("----------RETURN VALUES-------------\n");
	int result;
	// result = printf("%d\n", 123);
	// ft_printf("%d\n", result);
	// result = ft_printf("%d\n", 123);
	// ft_printf("%d\n", result);
	// result = printf("%20d\n", 123);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20d\n", 123);
	// ft_printf("%d\n", result);
	// result = printf("%.20d\n", 123);
	// ft_printf("%d\n", result);
	// result = ft_printf("%.20d\n", 123);
	// ft_printf("%d\n", result);
	// result = printf("%30.10d\n", 123);
	// ft_printf("%d\n", result);
	// result = ft_printf("%30.10d\n", 123);
	// ft_printf("%d\n", result);

	// result = printf("%s\n", str);
	// ft_printf("%d\n", result);
	// result = ft_printf("%s\n", str);
	// ft_printf("%d\n", result);

	// result = printf("%30s\n", str);
	// ft_printf("%d\n", result);
	// result = ft_printf("%30s\n", str);
	// ft_printf("%d\n", result);

	// result = printf("%-30s f\n", str);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-30s f\n", str);
	// ft_printf("%d\n", result);

	// result = printf("%.3s\n", str);
	// ft_printf("%d\n", result);
	// result = ft_printf("%.3s\n", str);
	// ft_printf("%d\n", result);

	// result = printf("%30.3s\n", str);
	// ft_printf("%d\n", result);
	// result = ft_printf("%30.3s\n", str);
	// ft_printf("%d\n", result);

	// result = printf("%-30.3s f\n", str);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-30.3s f\n", str);
	// ft_printf("%d\n", result);

	// result = printf("%*s\n", 30, str);
	// ft_printf("%d\n", result);
	// result = ft_printf("%*s\n", 30, str);
	// ft_printf("%d\n", result);

	// result = printf("%.*s f\n", 3, str);
	// ft_printf("%d\n", result);
	// result = ft_printf("%.*s f\n", 3, str);
	// ft_printf("%d\n", result);

	// result = printf("%c\n", c);
	// ft_printf("%d\n", result);
	// result = ft_printf("%c\n", c);
	// ft_printf("%d\n", result);
	// result = printf("%10c\n", c);
	// ft_printf("%d\n", result);
	// result = ft_printf("%10c\n", c);
	// ft_printf("%d\n", result);
	// result = printf("%-10c f\n", c);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-10c f\n", c);
	// ft_printf("%d\n", result);

	// result = printf("%llu\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%llu\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%llX\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%llX\n", ulli);
	// ft_printf("%d\n", result);

	// result = printf("%-20.10llu f\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-20.10llu f\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%-20.10llo f\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-20.10llo f\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%-20.10llx f\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-20.10llx f\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%-20.10llX f\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-20.10llX f\n", ulli);
	// ft_printf("%d\n", result);

	// result = printf("%20llu\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20llu\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%20llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%20llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%20llX\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20llX\n", ulli);
	// ft_printf("%d\n", result);

	// result = printf("%.20llu\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%.20llu\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%.20llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%.20llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%.20llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%.20llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%.20llX\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%.20llX\n", ulli);
	// ft_printf("%d\n", result);

	// result = printf("%20.20llu\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20.20llu\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%20.20llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20.20llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%20.20llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20.20llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%20.20llX\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20.20llX\n", ulli);
	// ft_printf("%d\n", result);

	// result = printf("%#20.10llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#20.10llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%#20.10llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#20.10llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%#20.10llX\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#20.10llX\n", ulli);
	// ft_printf("%d\n", result);

	// result = printf("%#20llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#20llo\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%#20llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#20llx\n", ulli);
	// ft_printf("%d\n", result);
	// result = printf("%#20llX\n", ulli);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#20llX\n", ulli);
	// ft_printf("%d\n", result);
	// ft_printf("--------------------------------\n");
	// result = printf("%#08x\n", 42);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#08x\n", 42);
	// ft_printf("%d\n", result);
	// result = printf("%#08.4x\n", 42);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#08.4x\n", 42);
	// ft_printf("%d\n", result);
	// result = printf("%#8x\n", 42);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#8x\n", 42);
	// ft_printf("%d\n", result);
	// result = printf("%#0x\n", 42);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#0x\n", 42);
	// ft_printf("%d\n", result);
	// result = printf("%#08.3x\n", 42);
	// ft_printf("%d\n", result);
	// result = ft_printf("%#08.3x\n", 42);
	// ft_printf("%d\n", result);
	// ft_printf("--------------------------------\n");
	// result = printf("%f\n", f);
	// ft_printf("%d\n", result);
	// result = ft_printf("%f\n", f);
	// ft_printf("%d\n", result);
	// result = printf("%20f\n", f);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20f\n", f);
	// ft_printf("%d\n", result);
	// result = printf("%-20f f\n", f);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-20f f\n", f);
	// ft_printf("%d\n", result);
	// result = printf("%20.3f\n", f);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20.3f\n", f);
	// ft_printf("%d\n", result);
	// result = printf("%-20.3f f\n", f);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-20.3f f\n", f);
	// ft_printf("%d\n", result);
	// result = printf("%.Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = ft_printf("%.Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = printf("%020Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = ft_printf("%020Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = printf("%20Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = printf("%-20Lf f\n", lf);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-20Lf f\n", lf);
	// ft_printf("%d\n", result);
	// result = printf("%20.3Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = ft_printf("%20.3Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = printf("%-20.3Lf f\n", lf);
	// ft_printf("%d\n", result);
	// result = ft_printf("%-20.3Lf f\n", lf);
	// ft_printf("%d\n", result);
	// result = printf("%.20Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = ft_printf("%.20Lf\n", lf);
	// ft_printf("%d\n", result);
	// result = printf("%+20f\n", f);
	// ft_printf("%d\n", result);
	// result = ft_printf("%+20f\n", f);
	// ft_printf("%d\n", result);
	// result = printf("%+.20f\n", f);
	// ft_printf("%d\n", result);
	// result = ft_printf("%+.20f\n", f);
	// ft_printf("%d\n", result);
	// result = printf("%020f\n", f);
	// ft_printf("%d\n", result);
	// result = ft_printf("%020f\n", f);
	// ft_printf("%d\n", result);
	// result = printf("They: %.6f\n", fdeci);
	// ft_printf("%d\n", result);
	// result = ft_printf("Mine: %.6f\n", fdeci);
	// ft_printf("%d\n", result);
	// result = printf("They: %#f\n", fdeci);
	// ft_printf("%d\n", result);
	// result = ft_printf("Mine: %#f\n", fdeci);
	// ft_printf("%d\n", result);

	ft_printf("-----Mouli-----\n");
	int i;
	int test_simple_mix;
	int INT_MAX = 2147483647;
	short int SHRT_MIN = -32768;
	short int SHRT_MAX = 32767;
	int CHAR_MAX = 127;
	unsigned int UINT_MAX = 4294967295;
	unsigned char UCHAR_MAX = 255;
	unsigned short int USHRT_MAX = 65535;
	long long int LLONG_MAX = 9223372036854775807;
	long long int LLONG_MIN = -9223372036854775808;
	long int LONG_MIN = -2147483648;
	// printf("%p\n", 0);
	// ft_printf("%p\n", 0);
	// printf("%d\n", -42);
	// ft_printf("%d\n", -42);
	// printf("%p\n", &i);
	// ft_printf("%p\n", &i);
	// printf("s: %s, p: %p, d:%d\n", "a string", &test_simple_mix, 42);
	// ft_printf("s: %s, p: %p, d:%d\n", "a string", &test_simple_mix, 42);
	// printf("%i\n", -42);
	// ft_printf("%i\n", -42);
	// printf("%s %d %p %% %x\n", "bonjour ", 42, &free, 42);
	// ft_printf("%s %d %p %% %x\n", "bonjour ", 42, &free, 42);
	// printf("%ld\n", (long)INT_MAX + 1);
	// ft_printf("%ld\n", (long)INT_MAX + 1);
	// printf("%lld\n", LLONG_MAX);
	// ft_printf("%lld\n", LLONG_MAX);
	// printf("%hd\n", SHRT_MIN);
	// ft_printf("%hd\n", SHRT_MIN);
	// printf("%hhd\n", CHAR_MAX + 42);
	// ft_printf("%hhd\n", CHAR_MAX + 42);
	// printf("{%10d}\n", -42);
	// ft_printf("{%10d}\n", -42);
	// printf("{%010d}\n", -42);
	// ft_printf("{%010d}\n", -42);
	// printf("%#o\n", 0);
	// ft_printf("%#o\n", 0);
	// printf("%+d\n", 42);
	// ft_printf("%+d\n", 42);
	// printf("% d\n", 9999);
	// ft_printf("% d\n", 9999);
	// printf("{% +d}\n", 42);
	// ft_printf("{% +d}\n", 42);
	// printf("%.4d\n", -424242);
	// ft_printf("%.4d\n", -424242);
	// printf("%.o, %.0o\n", 0, 0);
	// ft_printf("%.o, %.0o\n", 0, 0);
	// printf("%.0p, %.p\n", 0, 0);
	// ft_printf("%.0p, %.p\n", 0, 0);
	// printf("%#.o, %#.0o\n", 0, 0);
	// ft_printf("%#.o, %#.0o\n", 0, 0);
	// printf("%hhd - %hhd\n", SHRT_MAX - 42, SHRT_MAX - 4200);
	// ft_printf("%hhd - %hhd\n", SHRT_MAX - 42, SHRT_MAX - 4200);
	// printf("{%f}{%lf}{%Lf}\n", 1444565444646.6465424242242, 1444565444646.646542424224, 1444565444646.646542424224);
	// ft_printf("{%f}{%lf}{%Lf}\n", 1444565444646.6465424242242, 1444565444646.646542424224, 1444565444646.646542424224);
	// printf("{%.4s}\n", "42");
	// ft_printf("{%.4s}\n", "42");
	// printf("{%*d}\n", -5, 42);
	// ft_printf("{%*d}\n", -5, 42);
	// printf("{%05.*d}\n", -15, 42);
	// ft_printf("{%05.*d}\n", -15, 42);
	ft_printf("-----Mouli Returns-----\n");
	result = printf("%p", 0);
	printf(" {%d}\n", result);
	result = ft_printf("%p", 0);
	printf(" {%d}\n", result);
	result = printf("%d", -42);
	printf(" {%d}\n", result);
	result = ft_printf("%d", -42);
	printf(" {%d}\n", result);
	result = printf("%p", &i);
	printf(" {%d}\n", result);
	result = ft_printf("%p", &i);
	printf(" {%d}\n", result);
	result = printf("s: %s, p: %p, d:%d", "a string", &test_simple_mix, 42);
	printf(" {%d}\n", result);
	result = ft_printf("s: %s, p: %p, d:%d", "a string", &test_simple_mix, 42);
	printf(" {%d}\n", result);
	result = printf("%i", -42);
	printf(" {%d}\n", result);
	result = ft_printf("%i", -42);
	printf(" {%d}\n", result);
	result = printf("%s %d %p %% %x", "bonjour ", 42, &free, 42);
	printf(" {%d}\n", result);
	result = ft_printf("%s %d %p %% %x", "bonjour ", 42, &free, 42);
	printf(" {%d}\n", result);
	result = printf("%ld", (long)INT_MAX + 1);
	printf(" {%d}\n", result);
	result = ft_printf("%ld", (long)INT_MAX + 1);
	printf(" {%d}\n", result);
	result = printf("%lld", LLONG_MAX);
	printf(" {%d}\n", result);
	result = ft_printf("%lld", LLONG_MAX);
	printf(" {%d}\n", result);
	result = printf("%hd", SHRT_MIN);
	printf(" {%d}\n", result);
	result = ft_printf("%hd", SHRT_MIN);
	printf(" {%d}\n", result);
	result = printf("%hhd", CHAR_MAX + 42);
	printf(" {%d}\n", result);
	result = ft_printf("%hhd", CHAR_MAX + 42);
	printf(" {%d}\n", result);
	result = printf("{%10d}", -42);
	printf(" {%d}\n", result);
	result = ft_printf("{%10d}", -42);
	printf(" {%d}\n", result);
	result = printf("{%010d}", -42);
	printf(" {%d}", result);
	result = ft_printf("{%010d}", -42);
	printf(" {%d}\n", result);
	result = printf("%#o", 0);
	printf(" {%d}\n", result);
	result = ft_printf("%#o", 0);
	printf(" {%d}\n", result);
	result = printf("%+d", 42);
	printf(" {%d}\n", result);
	result = ft_printf("%+d", 42);
	printf(" {%d}\n", result);
	result = printf("% d", 9999);
	printf(" {%d}\n", result);
	result = ft_printf("% d", 9999);
	printf(" {%d}\n", result);
	result = printf("{% +d}", 42);
	printf(" {%d}\n", result);
	result = ft_printf("{% +d}", 42);
	printf(" {%d}\n", result);
	result = printf("%.4d", -424242);
	printf(" {%d}\n", result);
	result = ft_printf("%.4d", -424242);
	printf(" {%d}\n", result);
	result = printf("%.o, %.0o", 0, 0);
	printf(" {%d}\n", result);
	result = ft_printf("%.o, %.0o", 0, 0);
	printf(" {%d}\n", result);
	result = printf("%.0p, %.p", 0, 0);
	printf(" {%d}\n", result);
	result = ft_printf("%.0p, %.p", 0, 0);
	printf(" {%d}\n", result);
	result = printf("%#.o, %#.0o", 0, 0);
	printf(" {%d}\n", result);
	result = ft_printf("%#.o, %#.0o", 0, 0);
	printf(" {%d}\n", result);
	result = printf("%hhd - %hhd", SHRT_MAX - 42, SHRT_MAX - 4200);
	printf(" {%d}\n", result);
	result = ft_printf("%hhd - %hhd", SHRT_MAX - 42, SHRT_MAX - 4200);
	printf(" {%d}\n", result);
	result = printf("{%f}{%lf}{%Lf}", 1444565444646.6465424242242, 1444565444646.646542424224, 1444565444646.646542424224);
	printf(" {%d}\n", result);
	result = ft_printf("{%f}{%lf}{%Lf}", 1444565444646.6465424242242, 1444565444646.646542424224, 1444565444646.646542424224);
	printf(" {%d}\n", result);
	result = printf("{%.4s}", "42");
	printf(" {%d}\n", result);
	result = ft_printf("{%.4s}", "42");
	printf(" {%d}\n", result);
	result = printf("{%*d}", -5, 42);
	printf(" {%d}\n", result);
	result = ft_printf("{%*d}", -5, 42);
	printf(" {%d}\n", result);
	result = printf("{%05.*d}", -15, 42);
	printf(" {%d}\n", result);
	result = ft_printf("{%05.*d}", -15, 42);
	printf(" {%d}\n", result);


	result = printf("%");
	printf(" {%d}\n", result);
	result = ft_printf("%");
	printf(" {%d}\n", result);
	result = printf("s: %s, p: %p, d:%d", "a string", &test_simple_mix, 42);
	printf(" {%d}\n", result);
	result = ft_printf("s: %s, p: %p, d:%d", "a string", &test_simple_mix, 42);
	printf(" {%d}\n", result);
	result = printf("a%ub%uc%ud", 0, 55555, 100000);
	printf(" {%d}\n", result);
	result = ft_printf("a%ub%uc%ud", 0, 55555, 100000);
	printf(" {%d}\n", result);
	result = printf("a%xb%xc%xd", 0, 55555, 100000);
	printf(" {%d}\n", result);
	result = ft_printf("a%xb%xc%xd", 0, 55555, 100000);
	printf(" {%d}\n", result);
	result = printf("a%Xb%Xc%Xd", 0, 55555, 100000);
	printf(" {%d}\n", result);
	result = ft_printf("a%Xb%Xc%Xd", 0, 55555, 100000);
	printf(" {%d}\n", result);
	result = printf("%ld", LONG_MIN);
	printf(" {%d}\n", result);
	result = ft_printf("%ld", LONG_MIN);
	printf(" {%d}\n", result);
	result = printf("%lld", LLONG_MIN);
	printf(" {%d}\n", result);
	result = ft_printf("%lld", LLONG_MIN);
	printf(" {%d}\n", result);
	result = printf("%hu, %hu", 0, USHRT_MAX);
	printf(" {%d}\n", result);
	result = ft_printf("%hu, %hu", 0, USHRT_MAX);
	printf(" {%d}\n", result);
	result = printf("%hhu, %hhu", 0, UCHAR_MAX);
	printf(" {%d}\n", result);
	result = ft_printf("%hhu, %hhu", 0, UCHAR_MAX);
	printf(" {%d}\n", result);
	result = printf("{%5p}", 0);
	printf(" {%d}\n", result);
	result = ft_printf("{%5p}", 0);
	printf(" {%d}\n", result);
	result = printf("%#x", 0);
	printf(" {%d}\n", result);
	result = ft_printf("%#x", 0);
	printf(" {%d}\n", result);
	result = printf("% d", -9999);
	printf(" {%d}\n", result);
	result = ft_printf("% d", -9999);
	printf(" {%d}\n", result);
	result = printf("{%+03d}", 0);
	printf(" {%d}\n", result);
	result = ft_printf("{%+03d}", 0);
	printf(" {%d}\n", result);
	result = printf("%.d, %.0d", 0, 0);
	printf(" {%d}\n", result);
	result = ft_printf("%.d, %.0d", 0, 0);
	printf(" {%d}\n", result);
	result = printf("%.5p", 0);
	printf(" {%d}\n", result);
	result = ft_printf("%.5p", 0);
	printf(" {%d}\n", result);
	result = printf("%#.x, %#.0x", 0, 0);
	printf(" {%d}\n", result);
	result = ft_printf("%#.x, %#.0x", 0, 0);
	printf(" {%d}\n", result);
	result = printf("%u", UINT_MAX + 1);
	printf(" {%d}\n", result);
	result = ft_printf("%u", UINT_MAX + 1);
	printf(" {%d}\n", result);
	result = printf("{%.*s}", -5, "42");
	printf(" {%d}\n", result);
	result = ft_printf("{%.*s}", -5, "42");
	printf(" {%d}\n", result);
	result = printf("% d", -42);
	printf("|%d|\n", result);
	result = ft_printf("% d", -42);
	ft_printf("|%d|\n", result);
	result = printf("%   d", -42);
	printf("|%d|\n", result);
	result = ft_printf("%   d", -42);
	ft_printf("|%d|\n", result);
	result = printf("%#u", 0);
	printf("{%d}\n", result);
	result = ft_printf("%#u", 0);
	printf("{%d}\n", result);
	result = printf("%#o", 0);
	printf("{%d}\n", result);
	result = ft_printf("%#o", 0);
	printf("{%d}\n", result);
	result = printf("%#x", 0);
	printf("{%d}\n", result);
	result = ft_printf("%#x", 0);
	printf("{%d}\n", result);

	printf("-----------new-------------\n");
	result = printf("{% %}");
	printf(" {%d}\n", result);
	result = ft_printf("{% %}");
	printf(" {%d}\n", result);
	result = printf("s: %s, p: %p, d:%d", "a string", &test_simple_mix, 42);
	printf(" {%d}\n", result);
	result = ft_printf("s: %s, p: %p, d:%d", "a string", &test_simple_mix, 42);
	printf(" {%d}\n", result);
	result = printf("%ld%ld", 0l, 42l);
	printf(" {%d}\n", result);
	result = ft_printf("%ld%ld", 0l, 42l);
	printf(" {%d}\n", result);
	result = printf("%lld%lld", 0ll, 42ll);
	printf(" {%d}\n", result);
	result = ft_printf("%lld%lld", 0ll, 42ll);
	printf(" {%d}\n", result);
	result = printf("%hd%hd", (short int)0, (short int)42);
	printf(" {%d}\n", result);
	result = ft_printf("%hd%hd", (short int)0, (short int)42);
	printf(" {%d}\n", result);
	result = printf("%hhi%hhi", 0, 42);
	printf(" {%d}\n", result);
	result = ft_printf("%hhi%hhi", 0, 42);
	printf(" {%d}\n", result);
	result = printf("%#o", 42);
	printf(" {%d}\n", result);
	result = ft_printf("%#o", 42);
	printf(" {%d}\n", result);
	result = printf("{% 03d}", 0);
	printf(" {%d}\n", result);
	result = ft_printf("{% 03d}", 0);
	printf(" {%d}\n", result);
	result = printf("%9.2p", 1234);
	printf(" {%d}\n", result);
	result = ft_printf("%9.2p", 1234);
	printf(" {%d}\n", result);
	result = printf("%#.3o", 1);
	printf(" {%d}\n", result);
	result = ft_printf("%#.3o", 1);
	printf(" {%d}\n", result);
	result = printf("%#.o", 42);
	printf(" {%d}\n", result);
	result = ft_printf("%#.o", 42);
	printf(" {%d}\n", result);
	result = printf("{%.*s}", 0, "42");
	printf(" {%d}\n", result);
	result = ft_printf("{%.*s}", 0, "42");
	printf(" {%d}\n", result);
	result = printf("%*.*d", 0, 3, 0);
	printf(" {%d}\n", result);
	result = ft_printf("%*.*d", 0, 3, 0);
	printf(" {%d}\n", result);
	result = printf("{%*3d}", 5, 0);
	printf(" {%d}\n", result);
	result = ft_printf("{%*3d}", 5, 0);
	printf(" {%d}\n", result);
	return (0);
}
