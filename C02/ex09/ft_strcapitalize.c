/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:13:48 by spatez            #+#    #+#             */
/*   Updated: 2021/02/13 15:19:52 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isnt_alpha(char c)
{
	return (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122);
}

char	*ft_strcapitalize(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			if (ft_isnt_alpha(str[n - 1]) == 1)
			{
				str[n] -= 32;
			}
		}
		else if (str[n] >= 65 && str[n] <= 90)
		{
			if (ft_isnt_alpha(str[n - 1]) == 0)
			{
				str[n] += 32;
			}
		}
		n++;
	}
	return (str);
}
