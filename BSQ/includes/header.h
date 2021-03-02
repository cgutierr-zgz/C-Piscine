/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:15:49 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 23:28:03 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_mapinfo
{
	char		*map;
	char		empty;
	char		obs;
	char		fill;
	int			x;
	int			y;
	int			bignum;
	int			maxnumx;
	int			maxnumy;
}				t_mapinfo;
typedef struct	s_error
{
	int			error;
}				t_error;

void			ft_putchar(char c);
void			ft_error(void);
void			ft_map_error(t_error *error);
void			ft_map_error2(void);
char			*get_dict(char *path);
int				ft_atoi(char *str, t_error *error);
int				ft_horizontal(char *str, t_error *error);
int				ft_vertical(char *str, t_error *error);
void			ft_print_tab(int x, int y, char signs[3]);
void			ft_checksigns(char *str);
void			ft_newtab(t_mapinfo mapinfo, int tabl[mapinfo.x][mapinfo.y]);
void			ft_newmapinfo(t_mapinfo mapinfo, t_error *error);
void			ft_chars(char *str, char *signs, t_error *error);
void			ft_checksize(char *str, t_error *error);
char			ft_check1(char *str);
void			ft_newtab(t_mapinfo mapinfo, int tabl[mapinfo.x][mapinfo.y]);
void			decomposemap(t_mapinfo mapinfo, int tabl[mapinfo.x][mapinfo.y]);
int				ft_getint(int one, int two, int three);
void			ft_checkobst(char *str, t_error *error, char *signs);
#endif
