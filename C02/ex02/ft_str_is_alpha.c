/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 21:24:19 by spatez            #+#    #+#             */
/*   Updated: 2021/02/11 22:32:08 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int n;
	int check;

	check = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			check++;
		}
		else if (str[n] >= 'A' && str[n] <= 'Z')
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
