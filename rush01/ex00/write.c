/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:57:23 by spatez            #+#    #+#             */
/*   Updated: 2021/02/21 18:10:56 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		num = (unsigned int)(-nb);
		write(1, "-", 1);
	}
	else
		num = (unsigned int)nb;
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}

int		*ft_atoia(char *str)
{
	int		num;
	int		*sol;
	char	*p;
	int		i;

	p = str;
	num = 0;
	i = 0;
	sol = (int *)malloc(sizeof(int *) * (SIZE * 4));
	while (*p)
	{
		while (*p >= '0' && *p <= '9')
		{
			num = num * 10 + *p - '0';
			p++;
		}
		if (*p++ == ' ')
		{
			sol[i] = num;
			num = 0;
			i++;
		}
	}
	sol[i] = num;
	return (sol);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

void	ft_print_solution(int **solution)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
		{
			ft_putnbr(solution[i][j]);
			if (j != SIZE - 1)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
