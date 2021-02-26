/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:57:13 by spatez            #+#    #+#             */
/*   Updated: 2021/02/21 18:40:05 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int		check_c_u(int column)
{
	int seen;
	int highest;
	int clue_index;
	int row;

	clue_index = column;
	if (g_clues[clue_index] > 0)
	{
		seen = 0;
		highest = -1;
		row = -1;
		while (++row < SIZE)
		{
			if (g_heights[row][column] > highest)
			{
				highest = g_heights[row][column];
				++seen;
			}
		}
		if (seen != g_clues[clue_index])
			return (0);
	}
	return (1);
}

int		check_c_d(int column)
{
	int seen;
	int highest;
	int clue_index;
	int row;

	clue_index = SIZE + column;
	if (g_clues[clue_index] > 0)
	{
		seen = 0;
		highest = -1;
		row = SIZE;
		while (--row >= 0)
		{
			if (g_heights[row][column] > highest)
			{
				highest = g_heights[row][column];
				++seen;
			}
		}
		if (seen != g_clues[clue_index])
			return (0);
	}
	return (1);
}

int		check_r_l(int row)
{
	int seen;
	int highest;
	int clue_index;
	int column;

	clue_index = SIZE * 2 + row;
	if (g_clues[clue_index] > 0)
	{
		seen = 0;
		highest = -1;
		column = -1;
		while (++column < SIZE)
		{
			if (g_heights[row][column] > highest)
			{
				highest = g_heights[row][column];
				++seen;
			}
		}
		if (seen != g_clues[clue_index])
			return (0);
	}
	return (1);
}

int		check_r_r(int row)
{
	int seen;
	int highest;
	int clue_index;
	int column;

	clue_index = SIZE * 3 + row;
	if (g_clues[clue_index] > 0)
	{
		seen = 0;
		highest = -1;
		column = SIZE;
		while (--column >= 0)
		{
			if (g_heights[row][column] > highest)
			{
				highest = g_heights[row][column];
				++seen;
			}
		}
		if (seen != g_clues[clue_index])
			return (0);
	}
	return (1);
}
