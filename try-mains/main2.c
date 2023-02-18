#include "libft.h"
#include <stdio.h>
#include <string.h>

// This is a main for memcmp
/*
int main()
{
    int a = ft_memcmp("Birsu", "BiRsu", 4);
    printf("%d\n", a);
    return 0;
}
*/

// This is a main for memchr
/*
Bu, libft kütüphanesindeki ft_memchr fonksiyonunun implementasyonudur. 
Bu fonksiyon, s tarafından gösterilen bellek alanındaki ilk n bayt içinde, 
c karakterinin (bir unsigned char olarak yorumlandığında) ilk örneğini arar.
*/
/*
int main()
{
    char str[] = "Birsu";
    printf("%s\n", (char *)ft_memchr(str, 'B', 4));
    printf("%s\n", (char *)memchr(str, 'B', 4));
    return 0;
}
*/

// This is a main for memset
/*
Bu kod, libft kütüphanesindeki ft_memset fonksiyonunun implementasyonunu içerir. 
Bu fonksiyon, b tarafından gösterilen bellek alanının ilk len baytını, c karakterine ayarlar.
Bir bellek bloğundaki belirli baytları belirli bir karakterle doldurmak için kullanışlıdır.
*/
/*
int main()
{
    char str[] = "Galatasaray";
    printf("%s", (char *)ft_memset(str, 'X', 5));
    return 0;
}
*/

// This is a main for memcpy
/*
int main()
{
    char dst[] = "Onur";
    char src[] = "Birsu";

    printf("%s", (char *)ft_memcpy(dst, src, 7));
    return 0;
    
}
*/

// This is a main for memmove
/*
int main()
{
    char dst[] = "";
    char src[] = "";

    printf();
    return 0;
}
*/

// This is a main for bzero
/*
int main()
{
    char s[] = "Galatasaray";
    ft_bzero(s, 5);
    printf("%s", s);
    int m = 0;
    while(m < 11)
    {
        printf("%c", s[m++]);
    }
}
*/

// This is a main for atoi
/*
int main()
{
    printf("%d", ft_atoi("         -123a45"));
    return 0;
}
*/

// This is a main for memmove
// Overlappingi önlemek için memcpy aksine tersten kopyalamaya bailıyor
/*
int main()
{   
    char dst[] = "abcd";
    char src[] = "123456789";
    printf("%s\n", (char *)ft_memmove(dst, src, 3));
    printf("%s\n", (char *)memmove(dst, src, 3));
    return 0;
}
*/


//This is a main for strncmp 
/*
int main()
{
    char s1[] = "Onur";
    char s2[] = "OnUr";

    printf("%d\n", ft_strncmp(s1, s2, 3));
    return 0;
}
*/


// This is a main for ft_strchr
// Dizi içinde belirtilen karakterin ilk bulunduğu yeri arar
// Oradan itibaren return eder, o adresi return eder
/*
int main()
{
    char x[] = "GAlatasaray";
    printf("%s\n", ft_strchr(x, 't'));
    return 0;
}
*/


// This is a main for strrchr
// Dizi içinde belirtilen karakterin SON örneğini arar
// Bulunca oradan itibaren yazdırır
/*
int main()
{
    char s[] = "GalaTasaray";
    printf("%s\n", ft_strrchr(s, 'a'));
    return 0;
}
*/


//This is a main for strlcpy

int main()
{
    char src[] = "Galatasaray";
    char dst[] = "Barcelona";
    printf("%ld\n", ft_strlcpy(dst, src, 4));
    return 0;
}