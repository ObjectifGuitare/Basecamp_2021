/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:28:15 by spatez            #+#    #+#             */
/*   Updated: 2021/02/16 18:27:23 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == ' '
		|| c == '\r' || c == '\t' || c == '\v');
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
		if (*str == '+' || *str == '-' || ft_is_space(*str) == 1)
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

int		ft_is_atoiable(char *str)
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

int		ft_atoi_base(char *str, char *base)
{
	static int n = 0;
	static int multi;

	multi = base[1];
	if (ft_error(base))
		return (0);
	if (ft_is_atoiable(str) == 0)
		return (0);
	while (ft_is_space(*str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			multi *= -1;
	}
	while (*str >= '0' && *str <= '9')
		str++;
	str--;
	while (*str >= '0' && *str <= '9')
	{
		n += (*str - '0') * multi;
		str--;
		multi *= ft_strlen(base);
	}
	return (n);
}
