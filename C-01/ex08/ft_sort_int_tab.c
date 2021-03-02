/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:27:57 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/12 20:26:20 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int aux;
	int temp;

	i = 0;
	while (i < (size - 1))
	{
		aux = 0;
		while (aux < (size - i - 1))
		{
			if (tab[aux] > tab[aux + 1])
			{
				temp = tab[aux];
				tab[aux] = tab[aux + 1];
				tab[aux + 1] = temp;
			}
			aux++;
		}
		i++;
	}
}
