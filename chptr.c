#include<stdio.h>

int main()
{
		char ch, ch2;
		char *ptr;

		//ch = 'A';

		ptr = &ch;
		*ptr = 'A';

		ch2 = *ptr;

		printf("&ch = %p, ptr = %p, &ptr = %p, ch = %c, ch2 = %c\n", &ch, ptr, &ptr, *ptr, ch2);

		return 0;
}
