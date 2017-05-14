/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:24:17 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/14 16:34:02 by aakin-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# include "ft_utils.h"

#define MAX_SIZE 255
typedef struct				s_trie
{
	struct s_trie		*substring[MAX_SIZE];
	int					isEnd;
	char				*value;
}t_trie;
t_trie					*hr_new_node(char *str);
void					hr_addnode(t_trie *node, t_trie *root);
t_trie					*hr_getnode(char *str, t_trie *root);
#endif
