/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:03:46 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/08 16:03:48 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//How many words are there?
static int wordcounter(const char *s, char c)
{
    int i;

    i = 0;
    while (*s)
    {
        while (*s == c && *s)
            s++;
        if (*s == '\0')
            return (i);
        while (*s != c && *s)
            s++;
        i++;
    }
    return (i);
}

//How many characthers in the word?
static int charcounter(const char *s, char c)
{
    int i;

    i = 0;
    while (*s && (*s != c))
    {
        i++;
        s++;
    }
    return (i);
}

int main()
{
    char *str = "123456";
    printf("Wordcounter: %d\n", wordcounter(str, '\0'));
    printf("Charcounter: %d\n", charcounter(str, '\0'));
    return (0);
}