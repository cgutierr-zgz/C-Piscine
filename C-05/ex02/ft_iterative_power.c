/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 23:12:53 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/24 12:15:52 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
