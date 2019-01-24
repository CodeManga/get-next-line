/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmthimun <hmthimun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 22:25:05 by hmthimun          #+#    #+#             */
/*   Updated: 2017/10/01 18:09:00 by hmthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 2000

# include "./libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

int		get_next_line(int const fd, char **line);

#endif
