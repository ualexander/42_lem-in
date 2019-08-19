/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_con.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanta <vsanta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 14:28:46 by vsanta            #+#    #+#             */
/*   Updated: 2019/08/19 17:40:03 by vsanta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lem-in.h"

static char *ft_lm_mtx_row_new(int size, char def_val)
{
	char	*row;

	if ((row = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	ft_memset((void*)row, def_val, sizeof(char) * size);
	row[size] = 0;
	return (row);
}

char **ft_lm_mtx_new(int size, char def_val)
{
	int		i;
	char	**col;

	i = 0;
	col = (char**)malloc(sizeof(char*) * (size + 1));
	while (i < size)
	{
		if ((col[i] = ft_lm_mtx_row_new(size, def_val)) == NULL)
			return ((char**)(long int)ft_array_free(&col, 0));
		i++;
	}
	col[size] = NULL;
	return (col);
}