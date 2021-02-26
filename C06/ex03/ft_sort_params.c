/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:38:19 by spatez            #+#    #+#             */
/*   Updated: 2021/02/22 02:02:07 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_display(int argc, int i, char **argv)
{
	while (++i < argc)
	{
		ft_putstr(argv[argc - (argc - i)]);
		ft_putstr("\n");
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		swap;
	char	*temps;

	i = 0;
	swap = 1;
	if (argc == 1)
		return (0);
	while (swap > 0)
	{
		swap = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap++;
				temps = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temps;
			}
		}
		i = 0;
	}
	ft_display(argc, i, argv);
}
