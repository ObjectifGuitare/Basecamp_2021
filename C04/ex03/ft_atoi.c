/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:13:57 by spatez            #+#    #+#             */
/*   Updated: 2021/02/20 18:33:08 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == ' '  
		|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_is_atoiable(char *str)
{
	while (ft_is_space(*str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{
		str++;
	}
	if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int n;
	int multi;

	multi = 1;
	n = 0;
	if (ft_is_atoiable(str) == 0)
		return (0);
	while (ft_is_space(*str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			multi *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		str++;
	str--;
	while (*str >= '0' && *str <= '9')
	{
		n += (*str - '0') * multi;
		str--;
		multi *= 10;
	}
	return (n);
}
