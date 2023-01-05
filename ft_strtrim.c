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
#include <string.h>
#include "ft_strlen.c"
#include "ft_memmove.c"

void *ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlen(const char *s);

char *strtrim(char *s) {
  // Initialize pointers to the beginning and end of the string
  char *start = s;
  char *end = s + ft_strlen(s) - 1;

  // Trim leading whitespace
  while (*start == ' ' || *start == '\t' || *start == '\n' || *start == '\r' || *start == '\v' || *start == '\f') 
  {
    start++;
  }

  // Trim trailing whitespace
  while (*start == ' ' || *start == '\t' || *start == '\n' || *start == '\r' || *start == '\v' || *start == '\f') 
  {
    end--;
  }

  // Write a null terminator to the new end of the string
  *(end + 1) = '\0';

  // Shift the string so that it starts at the first non-whitespace character
  ft_memmove(s, start, end - start + 2);

  // Return the modified string
  return s;
}
