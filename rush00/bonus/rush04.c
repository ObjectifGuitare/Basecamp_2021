/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:04:14 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/13 17:32:44 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

static void	write_line(char left, char middle, char right, int size)
{
	ft_putchar(left);
	while (size > 2)
	{
		ft_putchar(middle);
		size--;
	}
	if (size == 2)
		ft_putchar(right);
	ft_putchar('\n');
}

void		rush04(int x, int y)
{
	if (x <= 0 || x > 2147483647 || y <= 0 || y > 2147483647)
		return ;
	write_line('A', 'B', 'C', x);
	while (y > 2)
	{
		write_line('B', ' ', 'B', x);
		y--;
	}
	if (y == 2)
		write_line('C', 'B', 'A', x);
}
