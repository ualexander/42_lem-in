/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanta <vsanta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 18:46:52 by vsanta            #+#    #+#             */
/*   Updated: 2019/08/25 20:28:29 by vsanta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lem_in.h"

int		ft_lm_coment_type(char **line)
{
	if ((*line)[0] && (*line)[0] == '#' &&
			ft_strcmp((*line), "##start") == 0)
		return (21);
	else if ((*line)[0] && (*line)[0] == '#' &&
				ft_strcmp((*line), "##end") == 0)
		return (22);
	else if ((*line)[0] && (*line)[0] == '#')
		return (20);
	return (0);
}

int		ft_lm_is_not_room(int action, char **line, t_lm **lm)
{
	if ((*lm)->room_start == NULL || (*lm)->room_end == NULL)
		ft_lm_put_error(lm, action);
	if (((*lm)->mtx = ft_lm_mtx_new((*lm)->rooms_c, '-')) == NULL)
		ft_lm_put_error(lm, action);
	return (ft_lm_add_con(line, lm));
}
