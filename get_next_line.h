/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque < ebmarque@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:10:26 by ebmarque          #+#    #+#             */
/*   Updated: 2023/05/06 11:54:34 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50

# endif

char	*ft_get_line(char *aux);
char	*ft_new_aux(char *aux);
char	*get_next_line(int fd);
char	*ft_read_to_aux(int fd, char *str);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_strchr(char *buffer, int target);
size_t	ft_strlen(const char *str);

#endif