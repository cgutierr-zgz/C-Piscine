/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 21:47:59 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/20 19:32:18 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int x;
	int esnegativo;

	esnegativo = 1;
	x = 0;
	while (*str == '\f' || *str == '\n' || *str == '\r'
	|| *str == '\t' || *str == '\v' || *str == ' ')
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '+')
			++str;
		else
		{
			esnegativo *= -1;
			++str;
		}
	}
	while (*str >= '0' && *str <= '9')
	{
		x = x * 10 + (*str - 48);
		++str;
	}
	return (x * esnegativo);
}
