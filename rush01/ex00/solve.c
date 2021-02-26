/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:57:20 by spatez            #+#    #+#             */
/*   Updated: 2021/02/22 10:31:43 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int		solve_condition(int i)
{
	while (++i < SIZE)
		if (!(check_c_u(i) && check_c_d(i))
			|| !(check_r_l(i) && check_r_r(i)))
			return (0);
	return (1);
}

int		solve(int row, int column)
{
	int i;
	int next_row;
	int next_column;

	next_row = column + 1 < SIZE ? row : row + 1;
	next_column = column + 1 < SIZE ? column + 1 : 0;
	i = -1;
	if (row == SIZE)
		return (solve_condition(i));
	i = -1;
	while (++i < SIZE)
	{
		if (g_column_possible[column][i] && g_row_possible[row][i])
		{
			g_heights[row][column] = i;
			g_column_possible[column][i] = 0;
			g_row_possible[row][i] = 0;
			if (solve(next_row, next_column))
				return (1);
			g_column_possible[column][i] = 1;
			g_row_possible[row][i] = 1;
		}
	}
	g_heights[row][column] = 0;
	return (0);
}

void	initialize_base_one(void)
{
	int row;
	int column;

	row = -1;
	while (++row < SIZE)
	{
		column = -1;
		while (++column < SIZE)
			++g_heights[row][column];
	}
}

int		**solve_final(int *clues_ptr)
{
	int i;
	int j;

	g_heights = malloc(sizeof(int *) * SIZE);
	i = -1;
	while (++i < SIZE)
		g_heights[i] = malloc(sizeof(int) * SIZE);
	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
		{
			g_heights[i][j] = 0;
			g_column_possible[i][j] = 1;
			g_row_possible[i][j] = 1;
		}
	}
	g_clues = clues_ptr;
	solve(0, 0);
	initialize_base_one();
	return (g_heights);
}
