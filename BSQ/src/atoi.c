/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:08:24 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 22:34:30 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../includes/atoi.h"

void	ft_checksize(char *str, t_error *error)
{
	int x;
	int aux;
	int j;

	j = 0;
	while (*str != '\n')
		++str;
	++str;
	aux = 0;
	while (str[aux] != '\n')
		aux++;
	aux++;
	x = 0;
	while (str[j] != '\0')
	{
		while (str[j] != '\n')
		{
			j++;
			x++;
		}
		if (str[j] == '\n' && x != aux - 1)
			ft_map_error(error);
		j++;
		x = 0;
	}
}

int		ft_vertical(char *str, t_error *error)
{
	int x;

	x = 0;
	while (*str != '\n')
		++str;
	++str;
	if (*str == '\0')
		ft_map_error(error);
	while (*str != '\0')
	{
		if (*str == '\n')
			x++;
		++str;
	}
	if (*str != '\0' && *str++ == '\0')
		ft_map_error(error);
	return (x);
}

int		ft_horizontal(char *str, t_error *error)
{
	int x;

	x = 0;
	while (*str != '\n')
		++str;
	++str;
	if (*str == '\0')
		ft_map_error(error);
	while (*str != '\n')
	{
		++str;
		x++;
	}
	return (x);
}

int		ft_atoi(char *str, t_error *error)
{
	int x;
	int y;
	int w;

	w = 0;
	y = 0;
	x = 0;
	if (str[x] < 48 && str[x] > 57)
		ft_map_error(error);
	while (str[x] != '\n')
		x++;
	x -= 3;
	while (str[w] >= '0' && str[w] <= '9' && w < x)
	{
		y = y * 10 + (str[w] - 48);
		w++;
	}
	return (y);
}

void	ft_chars(char *str, char *signs, t_error *error)
{
	int x;

	x = 0;
	if (str[x] < 48 && str[x] > 57)
		ft_map_error(error);
	while (str[x] != '\n')
		x++;
	x--;
	if (str[x] >= 32 && str[x] <= 126)
		signs[2] = str[x];
	x--;
	if (str[x] >= 32 && str[x] <= 126)
		signs[1] = str[x];
	x--;
	if (str[x] >= 32 && str[x] <= 126)
		signs[0] = str[x];
}
