/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:28:30 by spatez            #+#    #+#             */
/*   Updated: 2021/02/08 19:18:11 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_c = '0';
char g_u = '2';
char g_d = '1';

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_cdu(void)
{
	ft_putchar(g_c);
	ft_putchar(g_d);
	ft_putchar(g_u);
}

void	ft_comma_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_conditions(void)
{
	if (g_c == '7')
		g_u = 0;
	if (g_u == '9' && g_c < '7')
	{
		g_u -= '9';
		g_d++;
		if (g_d == '9')
		{
			g_c++;
			g_d = g_c + 1;
		}
		g_u = g_d;
	}
}

void	ft_print_comb(void)
{
	while (g_u > g_d && g_d > g_c && g_c < '8')
	{
		ft_putchar_cdu();
		if (g_c < '7')
			ft_comma_space();
		ft_conditions();
		g_u++;
	}
}
