/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:01:28 by spatez            #+#    #+#             */
/*   Updated: 2021/02/21 18:40:16 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H
# define SIZE 4
# include <malloc.h>
# include <unistd.h>

int	**g_heights;
int	*g_clues;
int	g_column_possible[SIZE][SIZE];
int	g_row_possible[SIZE][SIZE];

int		check_c_u(int column);
int		check_c_d(int column);
int		check_r_l(int row);
int		check_r_r(int row);
int		solve_condition(int i);
int		solve(int row, int column);
void	initialize_base_one(void);
int		**solve_final(int *clues_ptr);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		*ft_atoia(char *str);
int		ft_ind(int *count);
void	ft_putstr(char *str);
void	ft_print_solution(int **solution);

#endif
