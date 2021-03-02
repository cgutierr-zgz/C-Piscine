/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:37:47 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/24 17:41:55 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	j = 1;
	i = 0;
	while (j < argc)
	{
		str = argv[j];
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
	return (0);
}
