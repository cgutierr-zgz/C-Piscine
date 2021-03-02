/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:38:42 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/11 19:16:34 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimirnum(int a, int b);

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			imprimirnum(a, b);
			b++;
		}
		a++;
	}
}

void	imprimirnum(int a, int b)
{
	int x;
	int y;
	int z;
	int w;

	x = '0' + a / 10;
	y = '0' + a % 10;
	z = '0' + b / 10;
	w = '0' + b % 10;
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, " ", 1);
	write(1, &z, 1);
	write(1, &w, 1);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
}
