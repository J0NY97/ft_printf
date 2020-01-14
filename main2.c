/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 14:46:36 by nneronin          #+#    #+#             */
/*   Updated: 2019/12/21 12:00:59 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "./ft_printf.h"

int main(void)
{
	char *asd = "Hello World!";
	int x = 12359;
	char a = 'a';
	unsigned int t = 96;
	unsigned short int tt = 948;
	//long double dd = 11112312.123123123;
	unsigned char xx = 22;
	unsigned long int  uli = 234;
	unsigned long long int ulli = 1242;

	signed char hh = a;
	short int h = -1234;
	long int l = 1234;
	long long int ll = -9223372036854775807;
	//long long int lll = -9223372036854775807;

	printf("---------Start--------\n");
	ft_printf("User s: %s\n", asd);  //.19 ??
	printf("Real s: %s\n", asd);

	printf("----------------------\n");
	ft_printf("User c: %c\n", a);
	printf("Real c: %c\n", a);

	printf("----------------------\n");
	ft_printf("User d: %.d\n", x);
	printf("Real d: %.d\n", x);

	ft_printf("User hhd: %hhd\n", hh);
	printf("Real hhd: %hhd\n", hh);

	ft_printf("User hhd: %hhd\n", hh);
	printf("Real hhd: %hhd\n", hh);

	ft_printf("User hd: %hd\n", h);
	printf("Real hd: %hd\n", h);

	ft_printf("User lld: %40.25lld\n", ll);
	printf("Real lld: %40.25lld\n", ll);

	ft_printf("User ld: %ld\n", l);
	printf("Real ld: %ld\n", l);

	printf("----------------------\n");
	ft_printf("User p: %20p\n", &x);
	printf("Real p: %20p\n", &x);

	printf("----------------------\n");
	ft_printf("User i: %i %i %i\n", 12, 012, 0x12);
	printf("Real i: %i %i %i\n", 12, 012, 0x12);

	ft_printf("User hi: %hi %hi %hi\n", 12, 012, 0x12);
	//printf("Real hi: %hi %hi %hi\n", 12, 012, 0x12)

	ft_printf("User hhi: %hhi %hhi %hhi\n", 12, 012, 0x12);
	//printf("Real hhi: %hhi %hhi %hhi\n", 12, 012, 0x12);

	ft_printf("User lli: %lli %lli %lli\n", 12, 012, 0x12);
	//printf("Real lli: %lli %lli %lli\n", 12, 012, 0x12);

	ft_printf("User li: %li %li %li\n", 12, 012, 0x12);
	//printf("Real i: %li %li %li\n", 12, 012, 0x12);

	printf("----------------------\n");
	ft_printf("User u: %u\n", t);
	printf("Real u: %u\n", t);

	ft_printf("User hhu: %hhu\n", xx);
	printf("Real hhu: %hhu\n", xx);

	ft_printf("User hu: %hu\n", tt);
	printf("Real hu: %hu\n", tt);

	ft_printf("User llu: %llu\n", ulli);
	printf("Real llu: %llu\n", ulli);

	ft_printf("User lu: %lu\n", uli);
	printf("Real lu: %lu\n", uli);

	printf("----------------------\n"); //'-' error in ouxX, dif only '-'
	ft_printf("User o: %20.10o\n", x);
	printf("Real o: %20.10o\n", x);

	ft_printf("User hho: %hho\n", xx);
	printf("Real hho: %hho\n", xx);

	ft_printf("User ho: %ho\n", tt);
	printf("Real ho: %ho\n", tt);

	ft_printf("User llo: %llo\n", ulli);
	printf("Real llo: %llo\n", ulli);

	ft_printf("User lo: %lo\n", uli);
	printf("Real lo: %lo\n", uli);

	printf("----------------------\n");
	ft_printf("User x: %x\n", x);
	printf("Real x: %x\n", x);

	ft_printf("User hhx: %hhx\n", xx);
	printf("Real hhx: %hhx\n", xx);

	ft_printf("User hx: %hx\n", tt);
	printf("Real hx: %hx\n", tt);

	ft_printf("User llx: %llx\n", ulli);
	printf("Real llx: %llx\n", ulli);

	ft_printf("User lx: %lx\n", uli);
	printf("Real lx: %lx\n", uli);

	printf("----------------------\n");
	ft_printf("User X: %20.10X\n", x);
	printf("Real X: %20.10X\n", x);

	ft_printf("User hhX: %hhX\n", xx);
	printf("Real hhX: %hhX\n", xx);

	ft_printf("User hX: %hX\n", tt);
	printf("Real hX: %hX\n", tt);

	ft_printf("User llX: %llX\n", ulli);
	printf("Real llX: %llX\n", ulli);

	ft_printf("User lu: %lX\n", uli);
	printf("Real lX: %lX\n", uli);

	printf("----------------------\n");
	ft_printf("User %% procent: %d\n", x); //By default, if no digits follow, no decimal point is written.
	printf("Real %% procent: %d\n", x);

	printf("----------------------\n");
	ft_printf("User d: %+7.5d\n", -123);
	ft_printf("User d: %+7.3d\n", 12345);
	ft_printf("User d: %+5.3d\n", 1234567);
	ft_printf("User d: %+5.7d\n", 123);
	ft_printf("User d: %+3.7d\n", 12345);
	ft_printf("User d: %+3.5d\n", 1234567);


	printf("Real d: %+7.5d\n", -123);
	printf("Real d: %+7.3d\n", 12345);
	printf("Real d: %+5.3d\n", 1234567);
	printf("Real d: %+5.7d\n", 123);
	printf("Real d: %+3.7d\n", 12345);
	printf("Real d: %+3.5d\n", 1234567);

	printf("----------------------\n");
	long fgh = 123;
	long long tyu = 12345;

	ft_printf("User ld: %+7.5ld\n", fgh);
	ft_printf("User lld: %+7.3lld\n", tyu);
	printf("Real ld: %+7.5ld\n", fgh);
	printf("Real lld: %+7.3lld\n", tyu);


	printf("----------------------\n");

	ft_printf("User many: %d %i %5.3d%s\n %lx idk what more to test\n", 1, x, 1234567, asd, uli);
	printf("Real many: %d %i %5.3d%s\n %lx idk what more to test\n", 1, x, 1234567, asd, uli);

	printf("----------------------\n");
	ft_printf ("Characters: %c %c \n", 'a', 65);
   	ft_printf ("Decimals: %d %ld\n", 1977, 650000L);
    ft_printf ("Preceding with blanks: %10d \n", 1977);
	ft_printf ("Preceding with zeros: %010d \n", 1977);
    ft_printf ("Some different radices: %d %x %o %#10.5xh %7.5o \n", 100, 100, 100, 100, 100);
    ft_printf ("floats: %4.2f \n", 3.1416);
    ft_printf ("Width trick: %*d \n", 5, 10);
    ft_printf ("%s \n", "A string");

    ft_printf ("===========================\n");
	printf ("Characters: %c %c \n", 'a', 65);
   	printf ("Decimals: %d %ld\n", 1977, 650000L);
    printf ("Preceding with blanks: %10d \n", 1977);
	printf ("Preceding with zeros: %010d \n", 1977);
    printf ("Some different radices: %d %x %o %#10.5xh %7.5o \n", 100, 100, 100, 100, 100);
    printf ("floats: %4.2f \n", 3.1416);
    printf ("Width trick: %*d \n", 5, 10);
    printf ("%s \n", "A string");

	printf("----------------------\n");
	ft_printf("User lld: %40lld\n", ll);
	printf("Real lld: %40lld\n", ll);
	ft_printf("User lld: %.25lld\n", ll);
	printf("Real lld: %.25lld\n", ll);
	ft_printf("User lld: %025lld\n", ll);
	printf("Real lld: %025lld\n", ll);
	ft_printf("User lld: %+40.25lld\n", ll);
	printf("Real lld: %+40.25lld\n", ll);
	ft_printf("User lld: %-40lld%lld\n", ll, ll);
	printf("Real lld: %-40lld%lld\n", ll, ll);

	printf("----------------------\n");
	ft_printf("User o: %#o\n", x);
	printf("Real o: %#o\n", x);
	ft_printf("User x: %#x\n", x);
	printf("Real x: %#x\n", x);
	ft_printf("User X: %#X\n", x);
	printf("Real X: %#X\n", x);
	ft_printf("User o: %#20o\n", x);
	printf("Real o: %#20o\n", x);
	ft_printf("User x: %#20x\n", x);
	printf("Real x: %#20x\n", x);
	ft_printf("User X: %#20X\n", x);
	printf("Real X: %#20X\n", x);
	ft_printf("User o: %#20.10o\n", x);
	printf("Real o: %#20.10o\n", x);
	ft_printf("User x: %#20.10x\n", x);
	printf("Real x: %#20.10x\n", x);
	ft_printf("User X: %#20.10X\n", x);
	printf("Real X: %#20.10X\n", x);

	printf("----------------------\n");
	long double asd1 = -3123.82312;
	double d = -11.1;
	ft_printf("User f: %f\n", d);
	printf("Real f: %f\n", d);

	ft_printf("User 20f: %20f\n", d);
	printf("Real 20f: %20f\n", d);
	ft_printf("User .20f: %.20f\n", d);
	printf("Real .20f: %.20f\n", d);
	ft_printf("User +f: %+f\n", d);
	printf("Real +f: %+f\n", d);
	ft_printf("User +30.20f: %+30.20f\n", d);
	printf("Real +30.20f: %+30.20f\n", d);
	ft_printf("User 020f: %020f\n", d);
	printf("Real 020f: %020f\n", d);
	ft_printf("User #f: %#20f\n", d);
	printf("Real #f: %#20f\n", d);
	ft_printf("User -20f: %-20f%f\n", d, d);
	printf("Real -20f: %-20f%f\n", d, d);
	ft_printf("User f: %.3f\n", d);
	printf("Real f: %.3f\n", d);

	ft_printf("User Lf: %.Lf\n", asd1);
	printf("Real Lf: %.Lf\n", asd1);
	ft_printf("User Lf: %.3Lf\n", asd1);
	printf("Real Lf: %.3Lf\n", asd1);
	ft_printf("User f: %.18lf\n", d);
	printf("Real f: %.18lf\n", d);
	printf("----------------------\n");

	int idk = 10;
	ft_printf("User d: %*d\n", 10, x);
	printf("Real d: %*d\n", 10, x);
	ft_printf("User d: %*.20d\n", idk, x);
	printf("Real d: %*.20d\n", idk, x);
	ft_printf("User d: %+*.20d\n", idk, x);
	printf("Real d: %+*.20d\n", idk, x);
	ft_printf("User d: %0*d\n", 20, x);
	printf("Real d: %0*d\n", 20, x);
	ft_printf("User d: %.*d\n", 20, x);
	printf("Real d: %.*d\n", 20, x);


	printf("----------End---------\n");



	return (0);
}
