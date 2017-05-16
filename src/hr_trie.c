/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hr_trie.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakin-al <aakin-al@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 16:27:04 by aakin-al          #+#    #+#             */
/*   Updated: 2017/05/14 23:13:38 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hotrace.h>

t_trie		*hr_newnode(void)
{
	int		i;
	t_trie	*node;

	node = NULL;
	i = -1;
	node = (t_trie*)malloc(sizeof(t_trie));
	if (!node)
		return (node);
	node->is_end = 0;
	while (++i < MAX_SIZE)
		node->substring[i] = NULL;
	node->value = NULL;
	return (node);
}

void		hr_addnode(const char *key, char *value, t_trie **root)
{
	int		level;
	int		height;
	int		index;
	t_trie	*temp;

	level = 0;
	temp = *root;
	height = ft_strlen(key);
	while (level < height)
	{
		index = key[level];
		if (!temp->substring[index])
			temp->substring[index] = hr_newnode();
		temp = temp->substring[index];
		level++;
	}
	temp->value = value;
	temp->is_end = 1;
}

t_trie		*hr_getnode(const char *key, t_trie **root)
{
	int		level;
	int		height;
	int		index;
	t_trie	*temp;

	temp = *root;
	level = 0;
	height = ft_strlen(key);
	while (level < height)
	{
		index = key[level];
		if (!temp->substring[index])
			return (NULL);
		temp = temp->substring[index];
		level++;
	}
	if (!temp)
		return (NULL);
	return (temp);
}
