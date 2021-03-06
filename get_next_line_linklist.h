/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:36:23 by cterblan          #+#    #+#             */
/*   Updated: 2018/06/30 14:53:23 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 500
# include "libft/libft.h"

int	get_next_line(int const fd, char **line);
int	ft_get_next_line(int const fd, char **line, char **stat);
int	checkloop(int const fd, char **line, char **stat);
#endif
