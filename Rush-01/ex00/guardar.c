/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guardar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:51:56 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/16 23:25:36 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int g_rowl[4];
int g_rowr[4];
int g_colup[4];
int g_coldown[4];

void	ft_guardar(char *entrada)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (i < 4)
			g_colup[i] = entrada[i * 2] - 48;
		if (i >= 4 && i < 8)
			g_coldown[i - 4] = entrada[i * 2] - 48;
		if (i >= 8 && i < 12)
			g_rowl[i - 8] = entrada[i * 2] - 48;
		if (i >= 12 && i < 16)
			g_rowr[i - 12] = entrada[i * 2] - 48;
		i++;
	}
}
