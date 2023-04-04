#include<stdio.h>
#define COLS 5
#define ROWS 3

int main()
{
		//정수 하나 저장하는 경우
		int num = 90;
		//정수 n개 저장하는 경우
		int arr[ROWS][COLS] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
		int i,j;

		printf("num : %d, &num: %p, sizeof(num) = %d\n", num, &num, sizeof(num));

		for(i=0;i<ROWS;i++)
		{
				for(j=0;j<COLS;j++)
						printf("arr[%d][%d] : %d, &(arr[%d][%d]) = %p, sizeof(arr[%d][%d]) = %d\n", i, j, arr[i][j], i, j, &arr[i][j], i, j, sizeof(arr[i][j]));
				printf("\n");
		}

		return 0;
}
