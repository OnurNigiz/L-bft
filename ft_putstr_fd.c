/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:26:21 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/30 14:26:23 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strlen.c"
#include <unistd.h>

size_t	ft_strlen(const char *s);

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}