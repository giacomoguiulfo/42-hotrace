/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hr_trie.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakin-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 16:27:04 by aakin-al          #+#    #+#             */
/*   Updated: 2017/05/14 17:53:50 by aakin-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hotrace.h>

#include <string.h> //remove later!!!!!!!!!

t_trie		*hr_newnode(char *str)
{
	int		i;
	t_trie	*node;

	node = NULL;
	i = -1;
	node = (t_trie*)malloc(sizeof(t_trie));
	if(!node)
		return (node);
	node->isEnd = 0;
	while (++i < MAX_SIZE)
		node->substring[i] = NULL;
	node->value = str;
	return (node);
}

void		hr_addnode(const char *key, t_trie *node, t_trie **root)
{
	int		level;
	int		height;
	int		index;
	t_trie	*temp;

	level = 0;
	temp = *root;
	height = strlen(key); //change to ft_strlen
	while (level < height)
	{
		index = key[level];
		if (!temp->substring[index])
			temp->substring[index] = node;
		temp = temp->substring[index];
		level++;
	}
	temp->isEnd = 1;
}

t_trie		*hr_getnode(const char *key, t_trie **root)
{
	int		level;
	int		height;
	int		index;
	t_trie	*temp;

	temp = *root;
	level = 0;
	height = strlen(key); //change to ft_strlen
	while (level < height)
	{
		index = key[level];
		if (!temp->substring[index])
			return (NULL);
		temp = temp->substring[index];
	}
	if (!temp)
		return (NULL);
	return (temp);
}
