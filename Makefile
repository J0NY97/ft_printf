# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/13 15:52:37 by jsalmi            #+#    #+#              #
#    Updated: 2019/12/18 16:15:53 by jsalmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf
SRCS = ./ft_printf.c\
		./flag_thingys.c\
		./ft_llnbrlen.c\
		./ft_putllnbr.c\
		./ft_putnnbr.c\
		./functions.c\
		./ft_putdi.c\
		./ft_putuox.c\
		./ft_baselen.c\
		./ft_putnchars.c\
		./ft_puthex.c\
		./ft_putoctal.c\
		./ft_putuint.c\
		./ft_putadr.c\
		./ft_putp.c\
		./ft_putcs.c\
		./ft_putf.c\
		./ft_putfloat.c\
		./ft_putnstr.c\
		./main.c
OBJS = $(SRCS.c=.o)
LIBS = ./libft/libft.a

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRCS) $(LIBS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean, all, re, fclean
