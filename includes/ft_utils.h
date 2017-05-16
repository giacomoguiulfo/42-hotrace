/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:23:37 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/16 10:34:45 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int					ft_getchar(void);
void				*ft_realloc(void *ptr, size_t src_size, size_t new_size);
void				*ft_memcpy(void *dst, const void *src, size_t n);
size_t				ft_strlen(const char *s);
void				ft_putstr(char const *s);

#endif
