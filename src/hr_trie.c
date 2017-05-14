/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hr_trie.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakin-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 16:27:04 by aakin-al          #+#    #+#             */
/*   Updated: 2017/05/14 16:48:59 by aakin-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hotrace.h>

t_trie		*hr_newnode(char *str)
{
	int		i;
	t_trie	*node;

	node = NULL;
	i = -1;
	node = (t_trie)malloc(sizeof(t_trie));
	if(!node)
		return (node);
	node->isEnd = 0;
	while (++i < MAX_SIZE)
		node->substring[i] = NULL;
	node->value = str;
	return (node);
}

void		hr_addnode(t_trie *node, t_trie **root)
{
	int		level;
	int		height;
	int		index;
	char	*str;
	t_trie	*temp;

	level = 0;
	temp = *root;
	str = node->value;
	height = ft_strlen(node->value);
	while (level < MAX_SIZE)
	{
		index = str[level];
		if (!temp->substring[index])
			temp->substring[index] = hr_newnode("\0");
		temp = temp->substring[index];
		level++;
	}
	temp->isEnd = 1;
}

t_trie		*hr_getnode(char *str, t_trie *root)
{

}
