/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:31:15 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/23 20:47:08 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_twoargv(char *stx, char *dic)
{
	char	*stn;
	int		i;

	stn = stx;
	i = 0;
	if (stn[0] == '0' && stn[1] == '0')
		ft_error();
	else
		ft_descompose(stn, dic);
}

void	ft_threeargv(char *stx, char *dic)
{
	char	*stn;
	int		i;

	stn = stx;
	i = 0;
	if (stn[0] == '0' && stn[1] == '0')
		ft_error();
	else
		ft_descompose(stn, dic);
}

int		ft_isnumber(char *stn)
{
	int i;

	i = 0;
	while (stn[i] != '\0')
	{
		if (stn[i] >= '0' && stn[i] <= '9')
			i++;
		else
			ft_error();
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*stn;
	char	*c;

	stn = 0;
	if (argc != 2 && argc != 3)
		ft_error();
	else if (argc == 2)
	{
		stn = argv[1];
		c = get_dict("numbers.dict");
		if (stn[0] == '0' && (stn[1] != (stn[1] >= '0' && stn[1] <= '9')))
			ft_error();
		ft_isnumber(stn);
		ft_twoargv(stn, c);
	}
	else
	{
		stn = argv[2];
		c = get_dict(argv[1]);
		if (stn[0] == '0' && (stn[1] != (stn[1] >= '0' && stn[1] <= '9')))
			ft_error();
		ft_isnumber(stn);
		ft_threeargv(stn, c);
	}
	return (0);
}
