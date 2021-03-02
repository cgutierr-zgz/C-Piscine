/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 09:29:12 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/27 10:05:19 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_next(int nb2)
{
	int div;

	div = 2;
	if (nb2 == 0 || nb2 == 1 || nb2 < 0)
		return (0);
	while (div < nb2)
	{
		if (nb2 % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int next;

	next = 0;
	while (next == 0)
	{
		next = ft_is_prime_next(nb);
		nb++;
	}
	return (nb - 1);
}
