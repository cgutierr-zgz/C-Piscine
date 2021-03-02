/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 21:46:43 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/17 21:46:44 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_characters(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print_characters('-');
		ft_putnbr(214748364);
		print_characters('8');
		return ;
	}
	if (nb < 0)
	{
		print_characters('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		print_characters('0' + (nb % 10));
		nb = nb / 10;
	}
	else if (nb >= 0 && nb <= 9)
	{
		print_characters('0' + nb);
	}
}
