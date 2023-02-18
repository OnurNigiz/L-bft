#include "libft.h"
#include <stdio.h>


// This is a main sample for ft_issths' 
/*
int main()
{
	int a = 9;

	printf("%d", ft_isdigit(a));

	return 0;
}
*/

// This is a main for toupper and tolower
/*
int main()
{
	char str = 'B';

	printf("%d\n", ft_tolower(str));

	return 0;
}
*/

// This is a main for strlen
/*
int main()
{
	char *str = "Birsu";

	printf("%ld\n", ft_strlen(str));

	return 0;
}
*/


/* ---Write Fonksiyonu 1. Parametre (File Descriptor)---
File descriptor, bir dosyanın açılması veya oluşturulması sırasında oluşan bir sayısal tanımlayıcıdır. 
Bir dosyaya erişmek için kullanılır ve işletim sistemi kaynaklarını temsil eder.
Unix/Linux sistemlerinde, dosyaların, soketlerin, tünellerin ve diğer girdi/çıktı aygıtlarının (input/output devices) tümü, file descriptor'lar kullanılarak temsil edilir. 
Dosyaların okunması veya yazılması gibi işlemler, file descriptor'lar üzerinden gerçekleştirilir.
File descriptor'lar, sistem kaynaklarından sınırlı sayıda olduğundan, verimli bir şekilde kullanılmalıdır. 
Programlar, dosyaları kullanımdan kaldırdıklarında, file descriptor'ları serbest bırakmalıdır.
File descriptor'lar, genellikle open() sistem çağrısı ile dosya açılırken veya soketler veya diğer girdi/çıktı aygıtları oluşturulurken oluşturulurlar. 
Ayrıca, standart girdi (stdin), standart çıktı (stdout) ve standart hata çıktısı (stderr) gibi öntanımlı dosyalar, 0, 1 ve 2 numaralı file descriptor'larla önceden tanımlanmıştır.
*/


// This is a main for putchar
/*
int main()
{
	ft_putchar_fd('p', 1);
	printf("\n");

	return 0;
}
*/

// This is a main for putstr
/*
int main()
{
	char *str = "Birsu";

	ft_putstr_fd(str, 1);
	printf("\n");

	return 0;
}
*/

// This is a main for putendl
/*
int main()
{
	char str[] = "Onur";

	ft_putendl_fd(str, 1);
	return 0;
}
*/

// This is a main for putnbr (Çalışma prensibini tekrar et evodan önce!!!)
/*
int main()
{
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	return 0;
}
*/