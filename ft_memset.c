/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:05:45 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/30 12:05:50 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char *a;

	a = (char *)s;
	while (n > 0)
	{
		*a++ = (char)c;
		n--;
	}
	return (s);
}

int main(void)
{
    char s[] = "Onur";
    ft_memset(s, 42 , 3);
    printf("%d", strcmp(s, "Onur"));
}

