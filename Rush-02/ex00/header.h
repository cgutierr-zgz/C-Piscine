/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:32:31 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/23 20:45:47 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_error(void);
char	*get_dict(char *path);
void	ft_putchar(char c);
char	*ft_strstr(char *str, char *to_find);
void	ft_solve(char *aconseguir);
void	ft_dicterror(void);
void	ft_descompose(char *c, char *dict);
int		ft_strlen(char *numeros);
void	ft_menosdecien(char *c, char *dic, int i);
void	ft_cienes(char *c, char *dic, int i);
void	ft_miles(char *c, char *dic, int i);
void	ft_millions(char *c, char *dic, int i);

#endif
