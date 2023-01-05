/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:26:21 by onigiz            #+#    #+#             */
/*   Updated: 2022/12/30 14:26:23 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void *calloc(size_t nmemb, size_t size) 
{
  // Calculate the total size of the memory block to be allocated
  size_t total_size = nmemb * size;

  // Allocate the memory using malloc
  void *ptr = (void*)malloc(total_size);

  // If malloc failed, return NULL
  if (ptr == NULL) {
    return NULL;
  }

  // Initialize all bytes in the memory block to zero
  size_t i = 0;
  while (i < total_size) {
    *((char *)ptr + i) = 0;
    i++;
  }

  // Return a pointer to the allocated and initialized memory block
  return (ptr);
}
