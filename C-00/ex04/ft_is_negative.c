/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:01:30 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/08 17:03:50 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int neg;
	int pos;

	neg = 'N';
	pos = 'P';
	if (n >= 0)
	{
		write(1, &pos, 1);
	}
	else if (n < 0)
	{
		write(1, &neg, 1);
	}
}
