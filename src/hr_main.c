/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hr_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:24:33 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/14 18:12:54 by gguiulfo         ###   ########.fr       */
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

// This will return a t_trie later
void	hr_read(void)
{
	int		chr;
	char	*key;
	char	*value;

	chr = 1;
	while (chr)
	{
		if ((key = hr_read_line()) == NULL)
			break ;
		chr = (key[0] > 0) ? 1 : 0;
		if (chr)
		{
			if ((value = hr_read_line()) == NULL)
			{
				free(key);
				break ;
			}
			chr = (value[0] > 0) ? 1 : 0;
		}
		if (chr)
			; // store stuff
	}
	// return (trie)
}

void	hr_query(void)
{
	int		chr;
	char	*query;

	chr = 1;
	query = NULL;
	while (chr)
	{
		if ((query = hr_read_line()) == NULL)
			break ;
		chr = (query[0] > 0) ? 1 : 0;
		// print query value for key
	}
}

void	hr_dlt_trie(void)
{
	; // deletes trie
}

int		main(void)
{
	hr_read();
	hr_query();
	hr_dlt_trie();
}
