/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 19:36:44 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/19 21:49:52 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int i2;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i2 = i;
	j = 0;
	if (i < (size))
	{
		while (i < (size - 1) && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	j = 0;
	while (src[j] != '\0')
		j++;
	return (ft_check(i2, j, size));
}

unsigned int	ft_check(unsigned int a, unsigned int b, unsigned int c)
{
	if (a > c)
		return (c + b);
	else
		return (a + b);
}
