#include<stdio.h>
#include<stdlib.h>

int main()
{
		char *ptr1;
		int i;

		ptr1 = (char *)malloc(sizeof(char) * 100);

		for(i=0; i<10; i++)
		{
				*(ptr1+i) = 'A' + i;
				printf("*(ptr1+i) = %c\n", *(ptr1+i));
		}

		return 0;
}
