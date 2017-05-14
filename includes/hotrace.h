/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:24:17 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/14 15:07:29 by aakin-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# include "ft_utils.h"

typedef struct				s_radix_tree
{
	struct s_radix_tree		*left;
	struct s_radix_tree		*right;
	char					*value;
}t_radix_tree;
t_radix_tree				*hr_new_node(char *str);
void						hr_addnode(t_radix_tree *node, t_radix_tree *root);
t_radix_tree				*hr_getnode(char *str, t_radix_tree *root);
#endif
