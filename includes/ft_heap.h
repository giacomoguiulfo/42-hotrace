/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 21:06:10 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 07:26:32 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAP_H
# define FT_HEAP_H

# include "ft_utils.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_memnode	t_memnode;
typedef struct s_heap_man	t_heap_man;

struct			s_memnode
{
	void		*ptr;
	t_memnode	*prev;
	t_memnode	*next;
};

struct			s_heap_man
{
	t_memnode	*first;
	t_memnode	*last;
};

/*
** Memory allocation
*/

void			*ft_smalloc(size_t size);

/*
** Memory deallocation
*/

int				ft_sfree(void *ptr);
int				ft_heap_free(void);

/*
** Heap manager
*/

t_heap_man		*ft_get_heap(void);

#endif
