/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 23:07:06 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/24 18:25:33 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_printparams(int argc, char **argv)
{
	char	*str;
	int		x;
	int		i;

	i = 1;
	x = 0;
	while (i < argc)
	{
		str = argv[i];
		while (str[x] != '\0')
		{
			ft_putchar(str[x]);
			x++;
		}
		ft_putchar('\n');
		i++;
		x = 0;
	}
}

int		main(int argc, char **argv)
{
	char	*aux;
	int		i;

	i = 1;
	while (i < (argc - 1))
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			aux = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = aux;
			i = 0;
		}
		i++;
	}
	ft_printparams(argc, argv);
	return (0);
}
