#include <string.h>
#include "ft_strlen.c"
#include "ft_strdup.c"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;
    size_t strcounter;

    i = -1;
    strcounter = -1;
    if (!s)
        return (0);
    //If the start index is greater than str len, allocate empty string?
    if (start >= ft_strlen((char *)s))
        return (ft_strdup(""));
    //Next block means that if the len is greater than str u must cut it in the end when allocating
    if (len > ft_strlen(s))
		  str = malloc(sizeof(char) * ft_strlen(s) + 1);
	  else
		  str = malloc(sizeof(char) * len + 1);
    //Control for malloc alloc.
    if (!str)
		  return (0);
    while (s[start] && ++i <= len)
    {
        str[++strcounter] = (char)s[start];
        start++;
    }
    //Last pointer must be NULL.
    str[len]='\0';
    return(str);
}