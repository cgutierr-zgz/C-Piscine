/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:59:11 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/19 11:44:16 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print2(char c)
{
	char *hex;

	hex = "0123456789abcdef";
	if (c >= 16)
		ft_putchar(hex[c / 16]);
	else
		ft_putchar('0');
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str != 127)
			ft_putchar(*str);
		else if (*str < 0)
		{
			ft_putchar(0);
			ft_putchar(0);
		}
		else
		{
			ft_putchar('\\');
			ft_print2(*str);
		}
		++str;
	}
}
