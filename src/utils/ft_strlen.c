/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:17:47 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/14 14:44:01 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_utils.h>

size_t	ft_strlen(const char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
