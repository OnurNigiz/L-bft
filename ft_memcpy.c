/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:06:46 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/30 14:06:47 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst_char;
	const char	*src_char;

	src_char = src;
	dst_char = dest;
	if (n && dest != src)
		while (n--)
			*dst_char++ = *src_char++;
	return (dest);
}