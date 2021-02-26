/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 00:17:31 by spatez            #+#    #+#             */
/*   Updated: 2021/02/22 21:43:42 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_shit(int nb, int max, int i)
{
	if (nb <= 0 || i > 46340 || i > max)
		return (0);
	if (i * i == nb)
		return (i);
	return (ft_recursive_shit(nb, max, i + 1));
}

int		ft_sqrt(int nb)
{
	if (nb == 1)
		return (1);
	else
		return (ft_recursive_shit(nb, nb / 2, 1));
}
