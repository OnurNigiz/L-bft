/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:28:53 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/30 12:28:56 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	while (n-- > 0)
	{
		str = (unsigned char*)s;
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		s++;
	}
	return (NULL);
}

int main(void)
{
    char p[] = "Birsu";

    printf("%s", &ft_memchr(p, 66, 2));
}
