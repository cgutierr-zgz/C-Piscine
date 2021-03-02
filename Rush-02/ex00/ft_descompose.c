/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_descompose.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 13:15:37 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/23 20:46:37 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strlen(char *numeros)
{
	int i;

	i = 0;
	while (numeros[i] != '\0')
		i++;
	return (i);
}

void	ft_menosdecien(char *c, char *dic, int i)
{
	char	*temp;
	char	*aconseguir;
	char	aux[3];

	aconseguir = c;
	if (i == 2 && (c[0] >= '2' && c[0] <= '9') && (c[1] >= '1' && c[1] <= '9'))
	{
		aux[0] = c[0];
		aux[1] = '0';
		temp = ft_strstr(dic, aux);
		ft_solve(temp);
		write(1, " ", 1);
		aconseguir = &c[1];
		temp = ft_strstr(dic, aconseguir);
		ft_solve(temp);
	}
	else
	{
		temp = ft_strstr(dic, aconseguir);
		ft_solve(temp);
	}
}

void	ft_cienes(char *c, char *dic, int i)
{
	char	*temp;
	char	*aconseguir;
	char	aux2[2];
	char	*cien;
	char	*send;

	aconseguir = c;
	if (i == 3 && (c[0] >= '1' && c[0] <= '9'))
	{
		aux2[0] = c[0];
		temp = ft_strstr(dic, aux2);
		ft_solve(temp);
		write(1, " ", 1);
		cien = "100";
		temp = ft_strstr(dic, cien);
		ft_solve(temp);
		if (!(c[1] == '0' && c[2] == '0'))
		{
			write(1, " ", 1);
			send = &c[1];
			ft_menosdecien(send, dic, 2);
		}
	}
}

void	ft_miles(char *c, char *dic, int i)
{
	char	*temp;
	char	*aconseguir;
	char	aux2[2];
	char	*mil;
	char	*send;

	aconseguir = c;
	if (i == 4 && (c[0] >= '1' && c[0] <= '9'))
	{
		aux2[0] = c[0];
		temp = ft_strstr(dic, aux2);
		ft_solve(temp);
		write(1, " ", 1);
		mil = "1000";
		temp = ft_strstr(dic, mil);
		ft_solve(temp);
		if (!(c[1] == '0' && c[2] == '0' && c[3] == '0'))
		{
			write(1, " ", 1);
			send = &c[1];
			ft_cienes(send, dic, 3);
		}
	}
}

void	ft_descompose(char *c, char *dic)
{
	int		i;
	char	*aconseguir;
	char	*temp;
	int		len;

	len = 0;
	aconseguir = c;
	i = ft_strlen(c);
	if (i == 7)
		ft_millions(c, dic, i);
	if (i == 4)
		ft_miles(c, dic, i);
	if (i == 3)
		ft_cienes(c, dic, i);
	if (i == 2)
		ft_menosdecien(c, dic, i);
	else if (i == 2 || i == 1)
	{
		temp = ft_strstr(dic, aconseguir);
		ft_solve(temp);
	}
	else if (i > 4 && i < 7)
		ft_dicterror();
}
