/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 22:21:10 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/14 18:06:30 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_utils.h>
#include <stdio.h>

int		ft_getchar(void)
{
	static char	buf[BUFSIZ];
	static char	*bufp = buf;
	static int	n = 0;

	if (n == 0)
	{
		n = read(0, buf, sizeof(buf));
		bufp = buf;
	}
	return ((--n >= 0) ? (unsigned char)*bufp++ : EOF);
}
