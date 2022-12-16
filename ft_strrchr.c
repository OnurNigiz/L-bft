/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:30:06 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/16 18:30:10 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

char *ft_strrchr(const char *s, int c)
{
    int pos;

    pos = ft_strlen(s);
    if (s)
    {
        while (s[pos] != (char)c && pos >= 0)
            pos--;
        if (s[pos] == (char)c)
            return ((char*)&s[pos]);
        else    
            return (NULL);
    }
    return (NULL);
}

int main()
{
    const char *str = "OnurBirsu";

    printf("\n\nft_strrchr: %s\n", ft_strrchr(str, 117));
    printf("strrchr: %s\n\n", strrchr(str, 'B'));
    
    return 0;
}
