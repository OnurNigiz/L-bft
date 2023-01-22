/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:15:18 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/08 13:17:57 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
		((unsigned char *)s)[n-- - 1] = 0;
}

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int main()
{
    int i;
    char test_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Original array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", test_array[i]);
    printf("\n");

    ft_bzero(test_array, 5);
    printf("ft_bzero: ");
    for (i = 0; i < 10; i++)
        printf("%d ", test_array[i]);
    printf("\n");

    bzero(test_array, 5);
    printf("bzero: ");
    for (i = 0; i < 10; i++)
        printf("%d ", test_array[i]);
    printf("\n");
    return 0;
}
