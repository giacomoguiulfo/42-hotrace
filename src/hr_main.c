/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hr_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:24:33 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/14 16:32:16 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hotrace.h>

// This will return a t_trie later
void	hr_read(void)
{
	int		chr;
	char	*key;
	char	*value;

	chr = 1;
	while (chr)
	{
		get_next_line(0, &key);
		chr = (key[0]) ? 1 : 0;
		if (chr)
		{
			get_next_line(0, &value);
			chr = (value[0]) ? 1 : 0;
		}
		if (chr)
			; // store stuff
	}
}

void	hr_query(void)
{
	int		chr;
	char	*query;

	chr = 1;
	while (chr)
	{
		get_next_line(0, &query);
		chr = (query[0]) ? 1 : 0;
		// print query value for key
	}
}

int		main(void)
{
	hr_read();
	hr_query();
	// hr_dlt_trie();
}
