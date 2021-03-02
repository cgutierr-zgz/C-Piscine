/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tab.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:32:46 by cgutierr          #+#    #+#             */
/*   Updated: 2020/02/26 23:17:47 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_TAB_H
# define GET_TAB_H

# include "./../includes/header.h"

int		ft_getint(int one, int two, int three);
char	*get_dict(char *path);
void	convertmap(t_mapinfo mapinfo, int tabl[mapinfo.x][mapinfo.y]);
void	ft_newtab(t_mapinfo mapinfo, int tabl[mapinfo.x][mapinfo.y]);
void	ft_newmapinfo(t_mapinfo mapinfo, t_error *error);
#endif
