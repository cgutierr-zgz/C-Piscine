/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 17:28:18 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/16 23:27:36 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		g_checkvalidity;
int		g_tab[4][4];
char	*g_entrada;
int		g_check;

void	ft_print_array(int tablero[4][4]);
void	ft_fill_blank(int tablero[4][4]);
void	ft_put_14_2(int tab[4][4]);
void	ft_put_432(int tab[4][4]);
void	ft_put_14(int tab[4][4]);
void	ft_put_41(int tab[4][4]);
void	ft_put_4(int tab[4][4]);
int		is_valid(char *str);
void	ft_guardar();

int		main(int argc, char **argv)
{
	ft_fill_blank(g_tab);
	if (argc <= 1 || argc > 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		g_check = is_valid(argv[1]);
		if (g_check)
		{
			g_entrada = argv[1];
			ft_guardar(g_entrada);
			ft_put_41(g_tab);
			ft_put_432(g_tab);
			ft_put_4(g_tab);
			ft_put_14(g_tab);
			ft_put_14_2(g_tab);
			ft_print_array(g_tab);
		}
		else
			write(1, "Error\n", 6);
	}
	return (0);
}

int	is_valid(char *str)
{
	int i;
	int num;

	g_checkvalidity = 1;
	num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2)
		{
			if (str[i] != 32)
				g_checkvalidity = 0;
		}
		else if (48 < str[i] && str[i] < 53)
		{
			num++;
		}
		i++;
	}
	if (str[31] == ' ')
		g_checkvalidity = 0;
	if (num != 16)
		g_checkvalidity = 0;
	return (g_checkvalidity);
}
