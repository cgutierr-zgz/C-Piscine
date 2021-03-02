/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:03:52 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/18 15:41:35 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int contador;

	contador = 0;
	while (src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	dest[contador] = src[contador];
	return (dest);
}
