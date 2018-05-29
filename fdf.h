/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 11:01:59 by abaille           #+#    #+#             */
/*   Updated: 2018/04/11 11:02:07 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <math.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "minilibx/mlx.h"
# include "libft/libft.h"

typedef struct mlx
{
    void *mlx_ptr;
    void *win_ptr;
}              t_mlx;

typedef struct fdf
{
    int nbpoints;
    int nblines;
    int dx;
    int dy;
    int scalx;
    int scaly;
    int startx;
    int starty;
    int endx;
    int endy;
    int xinc;
    int yinc;
    char *line;
    int ptdepart;
}              t_fdf;

typedef struct point 
{
    int x;
    int y;
    int z;
}              t_point;

typedef struct map 
{
    t_point *point;    
}              t_map;

t_map *ft_open(char *av, t_map *map);
void fdf(t_mlx mlx, t_map *map);
t_mlx init_mlx();
#endif