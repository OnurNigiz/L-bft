/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:52:04 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/16 18:52:07 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    while (*s != (char)c && *s != 0)
        s++;
    if (*s == (char)c)
        return ((char *)s);
    else
        return (NULL);
    return (NULL);
}

int main(void)
{
    char *str = "OnurBirsu";

    printf("\nft_strchr: %s", ft_strchr(str, 'O'));
    printf("\n");
    printf("strchr: %s\n\n", strchr(str, 122));

    return 0;
}
