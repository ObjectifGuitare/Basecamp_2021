/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:01:08 by spatez            #+#    #+#             */
/*   Updated: 2021/02/11 14:18:52 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int swap;

	swap = 1;
	n = -1;
	while (swap != 0)
	{
		swap = 0;
		while (n < size - 1)
		{
			n++;
			if (tab[n] > tab[n + 1])
			{
				ft_swap(&tab[n], &tab[n + 1]);
				swap++;
			}
		}
		n = -1;
	}
}
