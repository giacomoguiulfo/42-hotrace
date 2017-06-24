/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 07:56:13 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/23 07:57:12 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_heap.h>

char	*ft_mstrdup(const char *s1)
{
	int		i;
	char	*dup;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dup = (char*)ft_smalloc(sizeof(char) * i + 1);
	if (!dup)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		dup[i] = s1[i];
	dup[i] = '\0';
	return (dup);
}
