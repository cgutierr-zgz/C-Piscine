/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:15:12 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 23:30:09 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

char	*g_filename;
int		g_argcs;
int		g_x;
int		g_y;
char	g_one;
int		g_tempy;

int		ft_pt(t_error *error, char *map, t_mapinfo *mapinfo, char *sg)
{
	if (g_x == 1 && g_y == 1)
	{
		if (error->error == 1)
			return (0);
		g_one = ft_check1(map);
		g_one == sg[0] ? ft_putchar(sg[2]) : ft_putchar(sg[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_checksize(map, error);
		mapinfo->x = g_x;
		mapinfo->y = g_y;
		g_tempy = ft_vertical(map, error);
		if (g_tempy != g_y || g_y < 1 || g_x < 1)
			ft_map_error(error);
		mapinfo->empty = sg[0];
		mapinfo->obs = sg[1];
		mapinfo->fill = sg[2];
		if (error->error == 1)
			return (0);
		ft_newmapinfo(*mapinfo, error);
	}
	free(error);
	return (0);
}

int		get_data(char *map, t_mapinfo mapinfo)
{
	char	signs[3];
	t_error	*error;

	if (((error = malloc(sizeof(t_error))) == NULL))
		ft_error();
	error->error = 0;
	g_x = 0;
	mapinfo.map = map;
	ft_check1(map);
	g_x = ft_horizontal(map, error);
	g_y = ft_atoi(map, error);
	ft_chars(map, signs, error);
	ft_checkobst(map, error, signs);
	if (signs[0] == signs[1] || signs[0] == signs[2] || signs[1] == signs[2])
		ft_map_error(error);
	mapinfo.empty = signs[0];
	mapinfo.obs = signs[1];
	mapinfo.fill = signs[2];
	ft_pt(error, map, &mapinfo, signs);
	return (0);
}

void	oneargc(t_mapinfo mapinfo)
{
	ssize_t	ret;
	char	*buf;
	int		fd;
	char	*filename;
	char	*map;

	fd = open("std_input.txt", O_RDWR | O_CREAT, 0644);
	if ((buf = (char *)malloc(51 * sizeof(char))) == NULL)
		ft_error();
	while ((ret = (int)read(0, buf, 50)))
		write(fd, buf, ret);
	close(fd);
	free(buf);
	ft_putchar('\n');
	filename = "std_input.txt";
	map = get_dict(filename);
	get_data(map, mapinfo);
}

int		main(int argc, char **argv)
{
	char		*map;
	t_mapinfo	mapinfo;

	mapinfo.x = 0;
	map = NULL;
	g_argcs = argc;
	if (argc == 1)
		oneargc(mapinfo);
	else
		argc = 1;
	while (argc <= g_argcs - 1)
	{
		g_filename = argv[argc];
		if (access(g_filename, F_OK) != -1)
		{
			map = get_dict(g_filename);
			get_data(map, mapinfo);
		}
		else
			ft_map_error2();
		argc++;
		if (argc < g_argcs)
			ft_putchar('\n');
	}
	free(map);
}
