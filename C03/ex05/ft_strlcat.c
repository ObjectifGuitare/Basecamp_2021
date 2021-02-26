/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:33:12 by spatez            #+#    #+#             */
/*   Updated: 2021/02/15 21:07:50 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *str)
{
	unsigned int n;

	n = 0;
	while (*str != 0)
	{
		str++;
		n++;
	}
	return (n);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	if (ft_strlen(dest) >= size)
		return (size + ft_strlen(src));
	else
		return (ft_strlen(dest) + ft_strlen(src));
}
