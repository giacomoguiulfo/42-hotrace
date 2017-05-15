/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 11:23:37 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/05/14 18:12:23 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define GNL_BUFF_SIZE 4096

typedef struct		s_gnl
{
	int				fd;
	char			*content;
	struct s_gnl	*next;
}					t_gnl;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_getchar(void);
void				*ft_realloc(void *ptr, size_t src_size, size_t new_size);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdelnode(t_list **head, t_list *node);
t_list				*ft_lstnew(void const *content, size_t content_size);
char				*ft_strdup(const char *s1);
char				*ft_strndup(const char *src, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
size_t				ft_strlen(const char *s);
void				ft_bzero(void *s, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strnew(size_t size);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putstr(char const *s);
void				*ft_memalloc(size_t size);
int					get_next_line(const int fd, char **line);

#endif
