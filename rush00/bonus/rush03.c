/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:04:11 by vcastell          #+#    #+#             */
/*   Updated: 2021/02/13 17:27:46 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

static void	writeline(char left, char middle, char right, int size)
{
	ft_putchar(left);
	while (size > 2)
	{
		size--;
		ft_putchar(middle);
	}
	if (size == 2)
		ft_putchar(right);
	ft_putchar('\n');
}

void		rush03(int x, int y)
{
	if (x <= 0 || x > 2147483647 || y <= 0 || y > 2147483647)
		return ;
	writeline('A', 'B', 'C', x);
	while (y > 2)
	{
		writeline('B', ' ', 'B', x);
		y--;
	}
	if (y == 2)
		writeline('A', 'B', 'C', x);
}
