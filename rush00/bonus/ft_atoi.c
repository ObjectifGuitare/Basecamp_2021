/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:16:24 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/14 09:34:20 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
			|| c == ' ');
}

int		ft_is_op(char c)
{
	return (c == '+' || c == '-');
}

int		ft_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_check(char *str)
{
	unsigned int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (ft_is_space(str[i]) == 1)
		i++;
	if (ft_is_op(str[i]) == 1)
		i++;
	return (ft_is_num(str[i]));
}

int		ft_atoi(char *str)
{
	int			mult;
	int			i;
	int			neg;
	int			nb;

	if (ft_check(str) == 0)
		return (0);
	mult = 1;
	i = 0;
	nb = 0;
	while (ft_is_space(str[i]) == 1)
		i++;
	neg = (str[i] == '-') ? -1 : 1;
	if (ft_is_op(str[i]) == 1)
		i++;
	while (ft_is_num(str[i]) == 1)
		i++;
	i--;
	while (i >= 0 && ft_is_num(str[i]) == 1)
	{
		nb = nb + (str[i] - '0') * mult;
		i--;
		mult = mult * 10;
	}
	return (nb * neg);
}
