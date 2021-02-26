/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 22:56:58 by spatez            #+#    #+#             */
/*   Updated: 2021/02/11 23:03:43 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int n;
	int check;

	check = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 32 && str[n] <= 126)
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
