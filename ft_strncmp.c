/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:07:22 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/23 12:07:26 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (i < n && (str1[i] || str2[i]))
    {
        if (str1[i] > str2[i])
            return (1);
        else if (str2[i] > str1[i])
            return (-1);
        i++;
    }
    return (0);
}

int main(void)
{
    char *s1 = "O1nur4";
    char *s2 = "O2nur3";
    size_t c = 6;

    printf("\nstrncmp: %d", strncmp(s1, s2, c));
    printf("\nft_strncmp: %d\n\n", ft_strncmp(s1, s2, c));
}
