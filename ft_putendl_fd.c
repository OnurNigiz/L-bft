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
#include <unistd.h>
#include "ft_putchar_fd.c"

void ft_putendl_fd(char const *s, int fd)
{
    if (s)
    {
        while (*s)
        {
            ft_putchar_fd(*s, fd);
            s++;
        }
        ft_putchar_fd('\n', fd);
    }
}