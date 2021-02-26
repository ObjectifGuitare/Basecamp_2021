/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:44:12 by spatez            #+#    #+#             */
/*   Updated: 2021/02/10 15:59:39 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int mirror_size;
	int b[size];
	int size_save;

	size_save = size;
	size -= 1;
	mirror_size = 0;
	while (size > -1)
	{
		b[mirror_size] = tab[size];
		size--;
		mirror_size++;
	}
	size += 1;
	while (size < size_save)
	{
		tab[size] = b[size];
		size++;
	}
}
