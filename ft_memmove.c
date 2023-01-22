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
#include "ft_memcpy.c"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dest;
    char *src2;
    size_t i;

    i = 0;
    dest = (char *)dst;
    src2 = (char *)src;
    if (!dst && !src)
        return (NULL);
    if (src2 < dest)
        while (i++ <= len)
            dest[len - i] = src2[len - i];
    else 
        return (ft_memcpy(dst, src, len));
    return (dst);
}
