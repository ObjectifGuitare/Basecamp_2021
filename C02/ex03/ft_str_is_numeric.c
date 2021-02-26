/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 22:32:32 by spatez            #+#    #+#             */
/*   Updated: 2021/02/11 22:38:14 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int n;
	int check;

	check = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= '0' && str[n] <= '9')
		{
			check++;
		}
		else
		{
			check--;
		}
		n++;
	}
	if (check == n)
		return (1);
	else
		return (0);
}
