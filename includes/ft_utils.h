/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:23:37 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/24 07:16:38 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define GNL_BUFF_SIZE 1024

typedef struct s_list	t_list;

struct			s_list
{
	void		*content;
	size_t		content_size;
	t_list		*next;
};

typedef struct	s_gnl
{
	int			fd;
	char		*file_content;
}				t_gnl;

size_t			ft_strlen(const char *s);
int				get_next_line(const int fd, char **line);
char			*ft_strchr(const char *s, int c);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *s1);
char			*ft_mstrdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			*ft_memalloc(size_t size);
void			*ft_realloc(void *ptr, size_t src_size, size_t new_size);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_putstr(char const *s);
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstdelnode(t_list **head,
							t_list *node, void (*del)(void*, size_t));
t_list			*ft_lstnew(void const *content, size_t content_size);
t_list			*ft_lstfind(t_list *begin_list, void *data, int (*cmp)());

#endif
