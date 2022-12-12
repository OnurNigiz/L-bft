#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    while (*s != (char)c && *s != 0)
        s++;
    if (*s == (char)c)
        return ((char*)s);
    else
        return (NULL);
    return (NULL);
}

int main(void)
{
    char *str = "OnurBirsu";

    printf("\nft_strchr: %s", ft_strchr(str, 'u'));
    printf("\n");
    printf("strchr: %s\n\n", strchr(str, 117));

    return 0;
}