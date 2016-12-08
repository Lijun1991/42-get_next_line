/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 19:31:36 by lwang             #+#    #+#             */
/*   Updated: 2016/12/08 12:33:02 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUF_SIZE 32
# define MAX_FD 1000
# include "./libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

int		get_next_line(const int fd, char **line);

#endif
