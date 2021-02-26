/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:57:17 by spatez            #+#    #+#             */
/*   Updated: 2021/02/21 18:11:05 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int		ft_ind(int *count)
{
	int i;

	i = 0;
	while (*count++)
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int **solution;

	if ((argc != 2) || (ft_ind(ft_atoia(argv[1])) != SIZE * 4))
	{
		ft_putstr("Error\n");
		return (0);
	}
	solution = (int **)malloc(sizeof(int **) * (SIZE * SIZE));
	solution = solve_final(ft_atoia(argv[1]));
	if (solution[0][0] == solution[0][1])
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_print_solution(solution);
}
