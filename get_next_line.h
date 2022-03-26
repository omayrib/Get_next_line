/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:40:40 by iomayr            #+#    #+#             */
/*   Updated: 2021/12/22 20:31:19 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE

# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *str, char *buff);
char	*get_all_line(int fd, char *str);
char	*ft_strchr(char *buff, int c);
char	*get_line(char *str);
char	*get_rest(char *str);
size_t	ft_strlen(char *str);

#endif
