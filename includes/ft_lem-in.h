/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lem-in.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanta <vsanta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:05:30 by vsanta            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/08/20 20:19:55 by vsanta           ###   ########.fr       */
=======
/*   Updated: 2019/08/20 19:09:30 by vsanta           ###   ########.fr       */
>>>>>>> 3a0d20890a82bbc9c1845793c98956608384c87f
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LEM_IN_H
# define FT_LEM_IN_H

# include "libft.h"

# define MAX_ROOMS 15000
# define ROOM(R) ((t_room*)(R->data))
# define ROUTE(R) ((t_route*)R->data)

typedef struct		s_room
{
	int				i;
	int				vis;
	int				bfs;
	int				dist;
	int				only_from_vis;
	int				cord_x;
	int				cord_y;
	char			*name;
}					t_room;

typedef struct		s_route
{
	int				len;
	int				ants;
	t_lst			*rooms;
}					t_route;

typedef struct		s_lm
{
	int				ants_c;
	int				rooms_c;
	t_room			*rooms[MAX_ROOMS + 1];
	t_room			*room_start;
	t_room			*room_end;
	t_lst			*routes_a;
	t_lst			*routes_b;
	char			**mtx;
	t_lst			*input;
}					t_lm;

void	ft_lm_put_error(t_lm **lm, int ret_val);
int ft_lm_set_count_ants(char **line, t_lm **lm);
int ft_lm_add_con(char **line, t_lm **lm);
int ft_lm_add_room(int action, char **line, t_lm **lm);
void	ft_lm_parse_input(t_lm **lm);
int	ft_lm_is_not_room(int action, char **line, t_lm **lm);
char **ft_lm_mtx_new(int size, char def_val);
int ft_lm_get_room_i(t_lm *lm, char *name);
void print_lm(t_lm *lm);
int	ft_lm_free(t_lm **lm, int ret_val);
t_room	*ft_lm_new_room(char **tmp);
t_room	*ft_lm_add_new_room(t_lm **lm, t_room *room);


void	print_route(void *data);
void 	ft_lm_set_route_s_e(t_lm *lm, t_lst *route, char c);
void 	ft_lm_close_cross(t_lm *lm);
void 	ft_lm_close_route_all(t_lm *lm, t_lst *route);
void 	ft_lm_open_routes_s_e(t_lm *lm, t_lst *routes);


t_lst 	*ft_lm_get_routes_sr(t_lm *lm);

void 	ft_lm_set_def_dist(t_lm *lm);
int ft_lm_find_room_in_st(t_lst *st, int i);
int ft_lm_find_room_by_i(t_lst *st, int i);
<<<<<<< HEAD

=======
void 	ft_lm_set_def(t_lm *lm, int vis_ofv, int bfs_dist);
>>>>>>> 3a0d20890a82bbc9c1845793c98956608384c87f

void 	ft_lm_set_rooms_s_e(t_lm *lm, t_lst *rooms, char c);

int 	ft_lm_set_routes(t_lm *lm);

<<<<<<< HEAD
void 	ft_lm_set_def(t_lm *lm, int vis, int bfs, int dist);
=======
t_route		*ft_lm_get_route(t_lm *lm, int only_from_vis, t_room *start, t_room *end);

int ft_lm_get_opt_rev(t_lm *lm, int only_from_vis, t_room *from_room);

void 	ff_print_route(void  *data);
void 	ff_print_routes(void  *data);

void 	ft_lm_set_def_vis_ofv(t_lm *lm, int vis, int ofv);
void 	ft_lm_set_def_bfs_dist(t_lm *lm, int bfs, int dist);

int		ft_lm_bfs(t_lm *lm, int no_vis, t_room *start, t_room *end, int nn);
>>>>>>> 3a0d20890a82bbc9c1845793c98956608384c87f


#endif
