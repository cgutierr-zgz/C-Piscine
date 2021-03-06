/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 09:22:57 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/27 09:27:43 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int div;

	div = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (div < nb)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}
