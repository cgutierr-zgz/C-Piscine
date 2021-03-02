/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:04:47 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 23:36:25 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../includes/putchar.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_checkobst(char *str, t_error *error, char *signs)
{
	char	signo;
	int		x;
	int		w;

	w = 0;
	x = 0;
	signo = signs[1];
	while (str[w] != '\n')
		w++;
	w++;
	while (str[w] != '\0')
	{
		if (str[w] == signs[0])
			x++;
		w++;
	}
	if (x == 0)
		ft_map_error(error);
}
