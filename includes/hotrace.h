/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:24:17 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/16 10:57:06 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# include "ft_utils.h"

# define MAX_SIZE 256
# define BUFF_SIZE 4096

typedef struct			s_trie
{
	struct s_trie		*substring[MAX_SIZE];
	int					is_end;
	char				*value;
}						t_trie;

t_trie					*hr_newnode(void);
t_trie					*hr_getnode(const char *key, t_trie **root);
void					hr_addnode(const char *key, char *value, t_trie **root);

#endif
