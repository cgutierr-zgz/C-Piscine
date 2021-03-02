/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:55:10 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/18 11:11:22 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	write(1, "000000010a161f40", 17);
	write(1, ":", 1);
}

void	ft_hexa(void)
{
	write(1, " ", 1);
	write(1, "426f 6e6a 6f75 7220 6c65 7320 616d 696e", 17);
	write(1, " ", 1);
}

void	ft_printablechar(void)
{
	write(1, "Bonjour les amin", 17);
}
