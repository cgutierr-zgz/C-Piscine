/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:31:43 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 23:17:51 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_H
# define ATOI_H

# include "./../includes/header.h"

void	ft_checksize(char *str, t_error *error);
int		ft_vertical(char *str, t_error *error);
int		ft_horizontal(char *str, t_error *error);
int		ft_atoi(char *str, t_error *error);
void	ft_chars(char *str, char *signs, t_error *error);

#endif
