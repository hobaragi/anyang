#include<stdio.h>

int main()
{
	float var = 33.123;
	float *ptr;

	ptr = &var;

	printf("&var = %p, var = %.3f\n", ptr, *ptr);

	return 0;
}
