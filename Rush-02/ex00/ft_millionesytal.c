/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_millionesytal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 20:15:48 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/23 20:45:29 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_millions(char *c, char *dic, int i)
{
	char	*temp;
	char	*aconseguir;
	char	aux2[2];
	char	*millon;

	aconseguir = c;
	if (i == 7 && (c[0] >= '1' && c[0] <= '9'))
	{
		aux2[0] = c[0];
		temp = ft_strstr(dic, aux2);
		ft_solve(temp);
		write(1, " ", 1);
		millon = "1000000";
		temp = ft_strstr(dic, millon);
		ft_solve(temp);
	}
}
