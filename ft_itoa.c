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
#include <stdlib.h>


//Use for calculaton of allocation 
static int intlen(long int c)
{
    long int i;

    i = 0;
    if (c <= 0)
        i++;
    while (c)
    {
        i++;
        c = c/ 10;
        if (c == 0)
            break;
    }
    return (i);
}

static char *strmaker(int n, int stringlen, int nmbr, char *str)
{
    while (stringlen >= 0)
    {
        nmbr = n % 10;
        str[stringlen--] = nmbr + 48;
        n = n / 10;
    }
    return (str);
}

char *ft_itoa(int n)
{
    int stringlen;
    char *str;
    int nmbr;
    int sign;
    long int nb;

    nb = n;
    stringlen = intlen(n);
    nmbr = 0;
    sign = 0;
    //Special case. Allocate memory and copy this number in it.
    if (nb == -2147483648)
    {
        str = (char *)malloc(sizeof(char) * 12);
	    if (!str)
		    return (0);
        str = "-2147483648";
        return (str);
    }
    //Allocate memory with malloc, if it fail return 0.
    str = (char *)malloc((sizeof(char) * stringlen) + 1);
    if (!str)
        return (NULL);
    //If the number is negative use the sign variable. 
    if (n < 0)
    {
        nb = -nb;
        sign = -1;
    }
    str[stringlen--] = '\0';
    strmaker(nb, stringlen, nmbr, str);
    //Add - if the number is negative.
    if (sign == -1 && str[0] == '0')
        str[0] = 45;
    return (str);
}


int main()
{
    long int x = 14;

    printf("%s\n", ft_itoa(x));
    return (0);
}