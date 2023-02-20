#include "libft.h"
#include <stdio.h>
#include <string.h>

// This is a main for calloc
// Array tahsis ediliyor, count * size byte boyunca 0 ataması yapılıyor.
/*
int main() {
    int *ptr;
    ptr = (int *)ft_calloc(4, sizeof(int));
    if (ptr == NULL) {
        printf("Bellek tahsisi basarisiz oldu.\n");
        return 1;
    }
    
    printf("%p adresindeki değer : %d\n", ptr, *ptr);
    return 0;
}
*/

// This is a main for strdup
/*
int main()
{
    char s1[] = "Galatasaray Sampiyon Bro";
    char *s_copy = ft_strdup(s1);
    
    printf("s1 adresi: %p\n", s1);
    printf("temp metni: %s\n", s_copy);
    printf("temp adresi: %p\n", s_copy);
    return 0;
}
*/

// This is a main for ft_striteri
void a_counter(unsigned int i, char *c)
{
    static int counter = 0;

    if (*c == 'a')
        counter++;
    if (i == ft_strlen(c) - 1)
        printf("'%c' harfi sayisi: %d\n", 'a', counter);
}

int main(void)
{
    char s[] = "galatasaray";
    ft_striteri(s, &a_counter);
    return 0;
}