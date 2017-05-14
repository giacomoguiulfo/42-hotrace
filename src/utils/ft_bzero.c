/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 11:33:26 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/14 14:42:57 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_utils.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = 0;
}
