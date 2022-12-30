/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:47:55 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/30 13:47:59 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*firststr;
	const unsigned char	*secondstr;

	firststr = s1;
	secondstr = s2;
	if (n)
	{
		while (n--)
			if (*firststr++ != *secondstr++)
				return (*--firststr - *--secondstr);
	}
	return (0);
}