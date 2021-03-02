/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:34:51 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/18 11:10:54 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int temp;
	unsigned int i;

	i = 0;
	temp = 0;
	while (str[i])
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = str[i] + 32;
		if (temp || i == 0)
			if ((122 >= str[i] && str[i] >= 97))
			{
				str[i] = str[i] - 32;
				temp = 0;
			}
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64))
			temp = 1;
		if ((str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
			temp = 1;
		if (str[i] >= 48 && str[i] <= 57)
			temp = 0;
		i++;
	}
	return (str);
}
