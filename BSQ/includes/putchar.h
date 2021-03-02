/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:05:07 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 23:27:11 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTCHAR_H
# define PUTCHAR_H

# include <unistd.h>
# include "./../includes/header.h"

void	ft_putchar(char c);
void	ft_checkobst(char *str, t_error *error, char *signs);

#endif
