/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:33:23 by spatez            #+#    #+#             */
/*   Updated: 2021/02/15 17:30:28 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*found;
	int		i;

	if (*to_find == 0)
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			found = str;
			i = 1;
			while (*(found + i) == *(to_find + i))
			{
				if (*(to_find + i + 1) == '\0')
				{
					return (found);
				}
				i++;
			}
		}
		str++;
	}
	return (0);
}
