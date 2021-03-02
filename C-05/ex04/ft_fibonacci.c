/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:40:24 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/24 12:45:49 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 2)
		return (1);
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
