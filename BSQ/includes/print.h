/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:36:52 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 23:17:46 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "./../includes/header.h"

void	ft_error(void);
void	ft_map_error2(void);
void	ft_map_error(t_error *error);
void	ft_putchar(char c);
char	ft_check1(char *str);
void	decomposemap(t_mapinfo mapinfo, int tabl[mapinfo.x][mapinfo.y]);

#endif
