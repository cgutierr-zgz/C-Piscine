/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:31:27 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/23 20:46:17 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_solve(char *aconseguir)
{
	int first;
	int j;

	j = 0;
	first = 0;
	while (aconseguir[j] != '\n')
	{
		if ((aconseguir[j] >= '0' && aconseguir[j] <= '9') && first == 0)
			j++;
		else if (aconseguir[j] == ':' && first == 0)
		{
			first = 1;
			j++;
		}
		else if (aconseguir[j] == ' ' && first == 1)
			j++;
		else if (aconseguir[j] >= 32 && aconseguir[j] <= 126)
		{
			ft_putchar(aconseguir[j]);
			first = 2;
			j++;
		}
	}
}
