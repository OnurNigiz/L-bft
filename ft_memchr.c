#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n-- != 0)
	{
		if ((unsigned char)c == *p)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
