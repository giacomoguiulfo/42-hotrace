/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hr_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:24:33 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/16 10:56:51 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hotrace.h>

char	*hr_read_line(void)
{
	int		c;
	int		bufsize;
	int		position;
	char	*buffer;

	position = 0;
	bufsize = BUFF_SIZE;
	buffer = (char *)malloc(sizeof(char) * bufsize);
	while (1)
	{
		if ((c = ft_getchar()) == EOF)
			free(buffer);
		if (c == EOF)
			return (NULL);
		if (c == '\n')
			buffer[position] = '\0';
		if (c == '\n')
			return (buffer);
		else
			buffer[position++] = c;
		if (position >= bufsize)
			buffer = ft_realloc(buffer, bufsize, bufsize + BUFF_SIZE);
		if (position >= bufsize)
			bufsize += BUFF_SIZE;
	}
}

t_trie	*hr_read(void)
{
	int		chr;
	char	*key;
	char	*value;
	t_trie	*root;

	chr = 1;
	root = (t_trie *)malloc(sizeof(t_trie));
	while (chr)
	{
		if ((key = hr_read_line()) == NULL)
			break ;
		if (!(chr = (key[0] > 0) ? 1 : 0))
			free(key);
		if (chr)
		{
			if ((value = hr_read_line()) == NULL)
			{
				free(key);
				break ;
			}
			if (!(chr = (key[0] > 0) ? 1 : 0))
				free(value);
		}
		if (chr)
			hr_addnode(key, value, &root);
	}
	return (root);
}

void	hr_query(t_trie *root)
{
	int		chr;
	char	*query;
	t_trie	*temp;

	chr = 1;
	query = NULL;
	temp = NULL;
	while (chr)
	{
		if ((query = hr_read_line()) == NULL)
			break ;
		chr = (query[0] > 0) ? 1 : 0;
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
		free(query);
	}
}

int		main(void)
{
	t_trie	*root;

	root = hr_read();
	hr_query(root);
}
