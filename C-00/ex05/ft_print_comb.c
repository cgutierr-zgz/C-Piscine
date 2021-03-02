/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:01:30 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/10 11:32:41 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char num1;
	char num2;
	char num3;

	num1 = '0' - 1;
	while (++num1 <= '9')
	{
		num2 = num1;
		while (++num2 <= '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if (num1 != '7' || num2 != '8' || num3 != '9')
				{
					write(1, ", ", 2);
				}
				num3++;
			}
		}
	}
}
