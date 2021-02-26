/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:13:14 by spatez            #+#    #+#             */
/*   Updated: 2021/02/15 12:08:51 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int idest;
	int isrc;

	isrc = 0;
	idest = ft_strlen(dest);
	while (src[isrc] != '\0')
	{
		dest[idest] = src[isrc];
		isrc++;
		idest++;
	}
	dest[idest] = src[isrc];
	return (dest);
}
