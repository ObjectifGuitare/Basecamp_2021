/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:45:17 by spatez            #+#    #+#             */
/*   Updated: 2021/02/16 15:20:59 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str != 0)
	{
		str++;
		n++;
	}
	return (n);
}

int		ft_error(char *str)
{
	int i;
	int condition;

	condition = ft_strlen(str);
	if (ft_strlen(str) < 2)
		return (1);
	while (*str != '\0')
	{
		if (*str == '+' || *str == '-')
			return (1);
		i = 1;
		while (i < condition)
		{
			if (*str == *(str + i))
				return (1);
			i++;
		}
		condition--;
		str++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nb;

	base_len = ft_strlen(base);
	if (ft_error(base) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = (long)nbr * (-1);
	}
	else
		nb = (long)nbr;
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base);
		nb %= base_len;
	}
	ft_putchar(base[nb]);
}
