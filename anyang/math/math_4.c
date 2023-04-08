#include<stdio.h>

int main()
{
		int dataA[10], dataB[20];
		int i, j, num;

		printf("dataA의 정수 10개를 입력하시오 : ");

		for(i=0; i<10; i++)
				scanf("%d", &dataA[i]);

		printf("dataB의 정수 20개를 입력하시오 : ");

		for(i=0; i<20; i++)
				scanf("%d", &dataB[i]);

		printf("dataA의 정수입니다. \n");

		for(i=0; i<10; i++)
				printf("%2d, ", dataA[i]);

		printf("\n");

		printf("dataB의 정수입니다. \n");

		for(i=0; i<20; i++)
				printf("%2d, ", dataB[i]);

		printf("\n");

		while(1)
		{
				printf("AND : 1, OR : 2, EXIT : 0\npress:");
				scanf("%d", &num);

				if(num==0)
				{
						printf("프로그램을 종료합니다.\n");
						break;
				}
				else if(num==1)
				{
						for(i=0; i<10; i++)
						{
								for(j=0; j<20; j++)
										printf("%d(dataA[%d]) & %d(dataB[%d]) = %d\n", dataA[i], i, dataB[j], j, dataA[i]&dataB[j]);
								printf("\n");
						}
						printf("****************************************\n");
				}
				else if(num==2)
				{
						for(i=0; i<10; i++)
						{
								for(j=0; j<20; j++)
										printf("%d(dataA[%d]) | %d(dataB[%d]) = %d\n", dataA[i], i, dataB[j], j, dataA[i]|dataB[j]);
								printf("\n");
						}
						printf("****************************************\n");
				}
				else
						printf("다시 입력하시오.\n");
		}

		return 0;
}
