/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:18:12 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/13 17:55:23 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write_line(char left, char middle, char right, int size_line)
{
	ft_putchar(left);
	while (size_line > 2)
	{
		ft_putchar(middle);
		size_line = size_line - 1;
	}
	if (size_line == 2)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || x > 2147483647 || y <= 0 || y > 2147483647)
		return ;
	ft_write_line('A', 'B', 'A', x);
	while (y > 2)
	{
		ft_write_line('B', ' ', 'B', x);
		y = y - 1;
	}
	if (y == 2)
		ft_write_line('C', 'B', 'C', x);
}
