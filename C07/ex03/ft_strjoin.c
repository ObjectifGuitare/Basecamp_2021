/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:48:40 by spatez            #+#    #+#             */
/*   Updated: 2021/02/25 17:58:26 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int		ft_strstrlen(char **str, int size)
{
	int n;
	int i;

	i = 0;
	n = 0;
	while (i < size)
	{
		n += ft_strlen(str[i]);
		i++;
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	i = 0;
	if (size < 1)
	{
		result = malloc(1);
		*result = '\0';
		return (result);
	}
	result = malloc(sizeof(*result) * (ft_strstrlen(strs, size)
		+ (ft_strlen(sep) * (size - 1)) + 1));
	if (!result)
		return (0);
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}


#include <stdio.h>
int main() {
    char *test[] = {
    "salut",
    "mon",
    "pote",
    "à",
    "la",
    "compote",
    "de",
    "pomme"
    };
    char sep[] = " - ";
    printf("is       -->%s\n", ft_strjoin(8, test, sep));
    printf("sould be -->salut - mon - pote - à - la - compote - de - pomme\n\n");
    char *test2[] = {};
    printf("is       -->%s\n", ft_strjoin(0, test2, sep));
    printf("sould be -->(null)");
    return (0);
}
