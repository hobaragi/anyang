#include<stdio.h>

int main()
{
		char ch;
		char *ptr = &ch;

		ch = 'A';

		printf("&ch = %p, ptr = %p, &ptr = %p, ch = %c\n", &ch, ptr, &ptr, *ptr);

		return 0;
}
