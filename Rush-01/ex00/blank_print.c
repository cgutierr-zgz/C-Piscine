/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blank_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:52:47 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/16 23:24:37 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(int tab[4][4])
{
	char	a;
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 3)
		{
			a = tab[x][y] + '0';
			write(1, &a, 1);
			write(1, " ", 1);
			x++;
		}
		if (x == 3)
		{
			a = tab[x][y] + '0';
			write(1, &a, 1);
		}
		write(1, "\n", 1);
		y++;
	}
}

void	ft_fill_blank(int tab[4][4])
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			tab[x][y] = 0;
			x++;
		}
		y++;
	}
}
