/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:40:30 by ade-la-m          #+#    #+#             */
/*   Updated: 2020/02/09 22:51:44 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	writecharacter(int x, int auxx, int y, int auxy)
{
	if ((auxx == 0 && auxy == 0) || (auxx == x - 1 && auxy == y - 1))
	{
		if ((x != 1 && y != 1) || (auxx == 0 && auxy == 0))
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('\\');
		}
	}
	else if ((auxx == 0 && auxy == y - 1) || (auxx == x - 1 && auxy == 0))
	{
		ft_putchar('\\');
	}
	else if (auxy == 0 || auxy == y - 1 || auxx == 0 || auxx == x - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int auxx;
	int auxy;

	auxy = 0;
	while (y > auxy)
	{
		auxx = 0;
		while (x > auxx)
		{
			writecharacter(x, auxx, y, auxy);
			auxx = auxx + 1;
		}
		ft_putchar('\n');
		auxy = auxy + 1;
	}
}
