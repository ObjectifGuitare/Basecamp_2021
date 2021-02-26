/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:13:59 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/13 17:30:07 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);
int		ft_atoi(char *str);

int		main(int ac, char **av)
{
	if (ac != 4)
		write(1, "Rush : you must specify the rush num (0-4), x, y\n", 49);
	else if (ft_atoi(av[1]) == 0)
		rush00(ft_atoi(av[2]), ft_atoi(av[3]));
	else if (ft_atoi(av[1]) == 1)
		rush01(ft_atoi(av[2]), ft_atoi(av[3]));
	else if (ft_atoi(av[1]) == 2)
		rush02(ft_atoi(av[2]), ft_atoi(av[3]));
	else if (ft_atoi(av[1]) == 3)
		rush03(ft_atoi(av[2]), ft_atoi(av[3]));
	else if (ft_atoi(av[1]) == 4)
		rush04(ft_atoi(av[2]), ft_atoi(av[3]));
	return (0);
}
