/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:23:05 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/23 13:25:37 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_dicterror(void)
{
	write(1, "Dict Error\n", 11);
	exit(0);
}

char	*get_dict(char *path)
{
	char	*c;
	int		fg;
	int		i;

	i = 0;
	c = malloc(1);
	fg = open(path, O_RDONLY);
	if (fg == -1)
		ft_dicterror();
	while (read(fg, c, 1))
		i++;
	close(fg);
	if (fg == -1)
		ft_dicterror();
	free(c);
	c = malloc(i);
	fg = open(path, O_RDONLY);
	if (fg == -1)
		ft_dicterror();
	read(fg, c, i);
	close(fg);
	if (fg == -1)
		ft_dicterror();
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int n;
	unsigned int j;

	j = 1;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] != '\0' && str[i + n] == to_find[n])
		{
			while (to_find[n + 1] == '\0' && str[i + n + j] == ' ')
				j++;
			if (to_find[n + 1] == '\0' && str[i + n + j] == ':')
				return (&str[i + n + j]);
			n++;
		}
		i++;
	}
	ft_dicterror();
	return (0);
}
