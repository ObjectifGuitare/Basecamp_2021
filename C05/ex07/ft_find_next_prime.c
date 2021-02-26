/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:54:29 by spatez            #+#    #+#             */
/*   Updated: 2021/02/22 22:56:35 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	mod(int nb)
{
	return (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0
		|| nb % 7 == 0 || nb % 11 == 0 || nb % 13 == 0
		|| nb % 17 == 0 || nb % 19 == 0 || nb % 23 == 0);
}

int	prime(int nb)
{
	return (nb == 2 || nb == 3 || nb == 5
		|| nb == 7 || nb == 11 || nb == 13
		|| nb == 17 || nb == 19 || nb == 23);
}

int	ft_find_next_prime(int nb)
{
	int n;
	int x;

	n = nb / 23;
	if (prime(nb) == 1)
		return (nb);
	if (mod(nb) == 1)
		return (ft_find_next_prime(nb + 1));
	if (nb <= 1)
		return (2);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (nb);
	while (n > 1)
	{
		x = nb / n;
		if (x * n == nb)
			return (ft_find_next_prime(nb + 2));
		n--;
	}
	return (nb);
}
