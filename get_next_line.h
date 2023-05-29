/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:30:52 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/24 14:35:18 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		str_len(char *str);
char	*str_chr(char *str, int c);
char	*str_combine(char *str1, char *str2);
char	*read_buff(int fd, char *buffer);
char	*read_line(char *buff);
char	*ft_strdup(char *s1);
char	*str_join(char *str1, char *str2);

#endif
