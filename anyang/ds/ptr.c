#include<stdio.h>

int main()
{
	float var = 33.123;
	float *ptr = &var;

//	ptr = &var;

	printf("&var = %p, &ptr = %p, ptr = %p, var = %.3f\n",&var, &ptr, ptr, *ptr);

	return 0;
}
