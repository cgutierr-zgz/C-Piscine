/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:26:07 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 22:04:33 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../includes/print.h"

void	ft_error(void)
{
	write(1, "error\n", 6);
	exit(0);
}

void	ft_map_error2(void)
{
	write(1, "map error\n", 10);
}

void	ft_map_error(t_error *error)
{
	write(1, "map error\n", 10);
	error->error = 1;
}

char	ft_check1(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	return (str[i]);
}

void	decomposemap(t_mapinfo mapinfo, int tabl[mapinfo.x][mapinfo.y])
{
	int auxy;
	int auxx;

	auxy = 0;
	while (auxy < mapinfo.y)
	{
		auxx = 0;
		while (auxx < mapinfo.x)
		{
			if (tabl[auxx][auxy] >= 1 && (tabl[auxx][auxy] >= 1
			&& tabl[auxx][auxy - 1] >= 1 && tabl[auxx - 1][auxy] >= 1
			&& tabl[auxx - 1][auxy - 1] >= 1) && auxy != 0 && auxx != 0)
				tabl[auxx][auxy] = ft_getint(tabl[auxx - 1][auxy],
				tabl[auxx][auxy - 1], tabl[auxx - 1][auxy - 1]);
			auxx++;
		}
		auxy++;
	}
	ft_newtab(mapinfo, tabl);
}
