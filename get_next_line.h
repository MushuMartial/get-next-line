/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:19:16 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/01 16:38:11 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

unsigned int	ft_strlen(char *s);
char			*free_all(char *line, char **save, char *buffer, int ret);
int				fill_line(char **line, char **save, char *buffer, int ret);
int				check_save(char **line, char **save);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strdup(char *s1);
char			*ft_strchr(char *s, int c);
char			*ft_substr(char *s, unsigned int start, size_t len);
unsigned int	pos_n(char *buffer);
char			*get_next_line(int fd);

#endif