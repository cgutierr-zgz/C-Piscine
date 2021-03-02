/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:35:39 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/19 11:41:32 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char *g_s;
char *g_d;

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		n;

	g_d = dest;
	g_s = src;
	n = size;
	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*g_d++ = *g_s++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*g_d = '\0';
		while (*g_s++)
			;
	}
	return (g_s - src - 1);
}
