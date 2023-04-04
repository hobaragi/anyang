#include<stdio.h>
#include<stdlib.h>

int main()
{
		int *intPtr;
		double *dblPtr;
		int i;

		intPtr = (int *)malloc(sizeof(int) * 10);
		dblPtr = (double *)malloc(sizeof(double) * 10);

		for(i=0; i<10; i++)
		{
				*(intPtr + i) = i+1;
				*(dblPtr + i) = i+1;

				printf("[%p]*(intPtr+%d)=%d\t[%p]*(dblPtr+%d)=%.1lf\n", intPtr+i, i, *(intPtr+i), dblPtr+i, i, *(dblPtr+i));
		}

		return 0;
}
