/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:00:54 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/12 21:03:59 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;
	int change;

	i = 0;
	temp = size - 1;
	while (i < (size / 2))
	{
		change = tab[i];
		tab[i] = tab[temp];
		tab[temp] = change;
		i++;
		temp--;
	}
}
