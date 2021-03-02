/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:24:24 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 22:51:32 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../includes/get_tab.h"

int g_w;
int g_auxxx;
int g_auxyy;

int		ft_getint(int one, int two, int three)
{
	int smallint;

	smallint = 0;
	if (one < two)
		if (one < three)
			smallint = one;
		else
			smallint = three;
	else if (two > three)
		smallint = three;
	else
		smallint = two;
	return (smallint + 1);
}

char	*get_dict(char *path)
{
	char	*c;
	int		fg;
	int		i;

	i = 0;
	c = malloc(1);
	if (c == NULL)
		ft_map_error2();
	fg = open(path, O_RDONLY);
	if (fg == -1)
		ft_map_error2();
	while (read(fg, c, 1))
		i++;
	close(fg);
	free(c);
	c = malloc(i + 1);
	if (c == NULL)
		ft_map_error2();
	fg = open(path, O_RDONLY);
	if (fg == -1)
		ft_map_error2();
	read(fg, c, i + 1);
	close(fg);
	return (c);
}

void	convertmap(t_mapinfo mapinfo, int tabl[mapinfo.x][mapinfo.y])
{
	int auxx;
	int auxy;

	auxy = 0;
	while (auxy < mapinfo.y)
	{
		auxx = 0;
		while (auxx < mapinfo.x)
		{
			if (tabl[auxx][auxy] == 0)
				ft_putchar(mapinfo.obs);
			else if (auxx <= mapinfo.maxnumx && auxy <= mapinfo.maxnumy
			&& auxx > (mapinfo.maxnumx - mapinfo.bignum)
			&& auxy > (mapinfo.maxnumy - mapinfo.bignum))
				ft_putchar(mapinfo.fill);
			else
				ft_putchar(mapinfo.empty);
			auxx++;
		}
		ft_putchar('\n');
		auxy++;
	}
}

void	ft_newtab(t_mapinfo mapinfo, int tabl[mapinfo.x][mapinfo.y])
{
	int auxx;
	int auxy;

	mapinfo.maxnumx = 0;
	mapinfo.maxnumy = 0;
	mapinfo.bignum = 0;
	auxy = 0;
	while (auxy < mapinfo.y)
	{
		auxx = 0;
		while (auxx < mapinfo.x)
		{
			if (tabl[auxx][auxy] > mapinfo.bignum)
			{
				mapinfo.bignum = tabl[auxx][auxy];
				mapinfo.maxnumx = auxx;
				mapinfo.maxnumy = auxy;
			}
			auxx++;
		}
		auxy++;
	}
	convertmap(mapinfo, tabl);
}

void	ft_newmapinfo(t_mapinfo mapinfo, t_error *error)
{
	int	(*tabl)[mapinfo.x];

	if ((tabl = malloc(sizeof(int[mapinfo.x][mapinfo.y]))) == NULL)
		ft_error();
	g_w = 0;
	while (mapinfo.map[g_w] != '\n')
		g_w++;
	g_auxyy = 0;
	g_w++;
	while (mapinfo.map[g_w] != '\0')
	{
		g_auxxx = 0;
		while (mapinfo.map[g_w] != '\n')
		{
			if (mapinfo.map[g_w] == mapinfo.empty)
				tabl[g_auxxx][g_auxyy] = 1;
			else if (mapinfo.map[g_w] == mapinfo.obs)
				tabl[g_auxxx][g_auxyy] = 0;
			else
				ft_map_error(error);
			g_w++ && g_auxxx++;
		}
		g_w++ && g_auxyy++;
	}
	decomposemap(mapinfo, tabl);
}
