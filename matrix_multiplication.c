#include <stdio.h>
int main()
{
	int a[2][3], b[3][2]={0};
	int m[2][2]={0};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{ 
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				m[i][j] += a[i][k] * b[k][j];
			}
		}
	}

for (int i = 0; i < 2; i++)
{
	for (int j = 0; j < 2; j++)
	{
		printf("%d ",m[i][j]);
	}
	printf("\n");
}
return 0;
}