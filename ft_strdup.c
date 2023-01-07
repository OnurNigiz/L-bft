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
#include <string.h>

char *ft_strdup(const char *s) 
{
  // Calculate the length of the string, not including the null terminator
  size_t len = strlen(s);

  // Allocate memory for the copy, including space for the null terminator
  char *copy = (char*)malloc(len + 1);

  // If malloc failed, return NULL
  if (copy == NULL) {
    return NULL;
  }

  // Copy the string into the allocated memory
  strcpy(copy, s);

  // Return a pointer to the copy
  return (copy);
}
