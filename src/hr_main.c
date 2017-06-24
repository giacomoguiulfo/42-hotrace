/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hr_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:24:33 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 11:10:01 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hotrace.h>

t_trie	*hr_read(void)
{
	char	*line;
	char	*key;
	char	*value;
	int		ret;
	t_trie	*root;

	root = (t_trie *)ft_smalloc(sizeof(t_trie));
	while ((ret = get_next_line(STDIN_FILENO, &line)))
	{
		if (!line || line[0] == '\0' || ret < 1)
			break ;
		key = ft_mstrdup(line);
		ft_strdel(&line);
		ret = get_next_line(STDIN_FILENO, &line);
		if (!line || line[0] == '\0' || ret < 1)
		{
			ft_sfree(key);
			break ;
		}
		value = ft_mstrdup(line);
		ft_strdel(&line);
		hr_addnode(key, value, &root);
	}
	ft_strdel(&line);
	return (root);
}

void	hr_query(t_trie *root)
{
	int		chr;
	int		ret;
	char	*query;
	t_trie	*temp;

	chr = 1;
	temp = NULL;
	while ((ret = get_next_line(STDIN_FILENO, &query)))
	{
		if (!query || query[0] == '\0' || ret < 1)
			break ;
		temp = hr_getnode(query, &root);
		if (temp && temp->value)
		{
			ft_putstr(temp->value);
			ft_putstr("\n");
		}
		else if (chr)
		{
			ft_putstr(query);
			ft_putstr(": Not found.\n");
		}
		ft_strdel(&query);
	}
	ft_strdel(&query);
}

int		main(void)
{
	t_heap_man	*heap_man;
	t_trie		*root;

	heap_man = ft_get_heap();
	root = hr_read();
	hr_query(root);
	ft_heap_free();
}
