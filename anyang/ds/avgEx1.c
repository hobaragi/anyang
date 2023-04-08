#include<stdio.h>
#define NUM 3

int main()
{
		int i, num[NUM], c[NUM], java[NUM], net[NUM], total[NUM];
		char name[NUM][10];
		float avg[NUM];

		for(i=0;i<NUM;i++)
		{
				printf("num[%d]: ", i);
				scanf("%d", &num[i]);

				printf("name[%d]: ", i);
				scanf("%s", name[i]);

				printf("c[%d]: ", i);
				scanf("%d", &c[i]);

				printf("java[%d]: ", i);
				scanf("%d", &java[i]);

				printf("net[%d]: ", i);
				scanf("%d", &net[i]);

				total[i] = c[i] + java[i] + net[i];
				avg[i] = (float)total[i] / 3;
				//avg[i] = total[i] / 3.0f;
		}

		for(i=0;i<NUM;i++)
		{
				printf("%2d %s\t%3d %3d %3d %3d %.2f\n", num[i], name[i], c[i], java[i], net[i], total[i], avg[i]);
		}

		return 0;
}
