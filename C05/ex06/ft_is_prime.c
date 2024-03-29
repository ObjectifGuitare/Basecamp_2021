/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:52:22 by spatez            #+#    #+#             */
/*   Updated: 2021/02/18 15:56:16 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;
	int x;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n <= (nb / 2))
	{
		x = nb / n;
		if (x * n == nb)
			return (0);
		n++;
	}
	return (1);
}
