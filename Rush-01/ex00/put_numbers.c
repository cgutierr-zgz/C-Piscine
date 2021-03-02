/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:52:19 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/16 23:24:04 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_rowl[4];
int g_rowr[4];
int g_colup[4];
int g_coldown[4];

void	ft_put_41(int tab[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (g_colup[i] == 1)
			tab[i][0] = 4;
		if (g_coldown[i] == 1)
			tab[i][3] = 4;
		if (g_rowl[i] == 1)
			tab[0][i] = 4;
		if (g_rowr[i] == 1)
			tab[3][i] = 4;
		i++;
	}
}

void	ft_put_432(int tab[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (g_rowl[i] == 3 && g_rowr[i] == 2)
		{
			tab[2][i] = 4;
		}
		if (g_rowl[i] == 2 && g_rowr[i] == 3)
		{
			tab[1][i] = 4;
		}
		if (g_colup[i] == 2 && g_coldown[i] == 3)
		{
			tab[i][1] = 4;
		}
		if (g_colup[i] == 3 && g_coldown[i] == 2)
		{
			tab[i][2] = 4;
		}
		i++;
	}
}

void	ft_put_4(int tab[4][4])
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x != 4 && y != 4)
	{
		x = 0;
		y = 0;
		while (x < 4)
		{
			if (tab[x][0] + tab[x][1] + tab[x][2] + tab[x][3] == 0)
				break ;
			x++;
		}
		while (y < 4)
		{
			if (tab[0][y] + tab[1][y] + tab[2][y] + tab[3][y] == 0)
				break ;
			y++;
		}
		tab[x][y] = 4;
	}
}

void	ft_put_14(int tab[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (g_colup[i] == 4)
			tab[i][0] = 1;
		if (g_coldown[i] == 4)
			tab[i][3] = 1;
		if (g_rowl[i] == 4)
			tab[0][i] = 1;
		if (g_rowr[i] == 4)
			tab[3][i] = 1;
		i++;
	}
}

void	ft_put_14_2(int tab[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (g_colup[i] == 4)
			tab[i][1] = 2;
		if (g_colup[i] == 4)
			tab[i][2] = 3;
		if (g_coldown[i] == 4)
			tab[i][1] = 2;
		if (g_coldown[i] == 4)
			tab[i][2] = 3;
		if (g_rowl[i] == 4)
			tab[1][i] = 2;
		if (g_rowl[i] == 4)
			tab[2][i] = 3;
		if (g_rowr[i] == 4)
			tab[1][i] = 2;
		if (g_rowr[i] == 4)
			tab[2][i] = 3;
		i++;
	}
}
