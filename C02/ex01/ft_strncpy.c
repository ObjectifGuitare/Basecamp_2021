/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 16:55:15 by spatez            #+#    #+#             */
/*   Updated: 2021/02/11 21:22:58 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int place;

	place = 0;
	while (src[place] != '\0' && place < n)
	{
		dest[place] = src[place];
		place++;
	}
	while (place < n)
	{
		dest[place] = '\0';
		place++;
	}
	return (dest);
}
