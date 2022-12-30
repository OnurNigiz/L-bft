/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:45:42 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/23 12:45:46 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t hayint;
    size_t needint;

    hayint = 0;
    if (*needle == 0)
        return((char *)haystack);
    while (haystack[hayint] != 0 && hayint < len)
    {
        needint = 0;
        while ((haystack[hayint + needint] == needle[needint]) 
                && (needle[needint] != 0) && (needint + hayint < len))
            needint++;
        if (!needle[needint])
            return ((char *)&haystack[hayint]);
        hayint++;
    }
    return (NULL);
}

int main (void)
{
    char *str = "Birsu";
    char *ctrl = 0;
    int len = 5;

    printf("%s\n", ft_strnstr(str, ctrl, len));
}
