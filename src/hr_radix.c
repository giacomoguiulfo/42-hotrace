/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hr_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakin-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 15:00:56 by aakin-al          #+#    #+#             */
/*   Updated: 2017/05/14 15:07:47 by aakin-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hotrace.h>

t_radix_tree	*hr_new_node(char *str)
{
	t_radix_tree	*node;

	node = (t_radix_tree)malloc(sizeof(t_radix_tree));
	node->next = str;
	node->left = NULL;
	node->right = NULL;
	return (node);
}


t_radix_tree	*hr_getnode(char *str, t_radix_tree *root)
{
	t_radix_tree	*node = NULL;

	return (node);
}

void			hr_addnode(t_radix_tree *node, t_radix_tree *root)
{

}
