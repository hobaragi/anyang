#include<stdio.h>
#include<stdlib.h>

int main()
{
		int i = 10;
		int *iptr = &i;
		char ch = 'A';
		char *cptr = &ch;

		printf("[직접참조] i=%d, &i=%p\n", i, &i);
		printf("[간접참조] iptr=%p, *iptr=%d\n", iptr, *iptr);
		printf("[포인터자체주소] &iptr=%p\n", &iptr);

		printf("[직접참조] ch=%c, &ch=%p\n", ch, &ch);
		printf("[간접참조] cptr=%p, *cptr=%c\n", cptr, *cptr);
		printf("[포인터자체주소] &cptr=%p\n", &cptr);

		return 0;
}
