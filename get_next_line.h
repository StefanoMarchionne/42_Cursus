/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:20:22 by smarchio          #+#    #+#             */
/*   Updated: 2022/12/30 18:49:05 by smarchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE BUFSIZ
# endif

char	*get_next_line(int fd);
void	ft_read_line(int fd, char **keep, char **tmp);
char	*ft_parse_line(char **keep, char **tmp);
char	*get_before_nl(const char *s);
char	*get_after_nl(const char *s);

int		contains_nl(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_join(const char *s1, const char *s2);
void	*ft_calloc(size_t count, size_t size);
void	ft_free(char **str, char **str2, char **str3);

#endif