/* https://github.com/sohitfirs/5.3.git */

#include <stdio.h>
#include <cstdlib>
#include <time.h>

main()
{
	int mas[100][100];
	int n, m;
	
	printf("n=");
	scanf("%i", &n);
	
	printf("m=");
	scanf("%i", &m);
	
	srand(time(NULL));
	
	for (int j=0; j<n; j++)
	{
		for (int i=0; i<m; i++)
		{
			mas[j][i]=rand()%10+(-2);
		}
	}
	
	for (int j=0; j<n; j++)
	{
		for (int i=0; i<m; i++)
		{
			printf("%3i", mas[j][i]);
		}
		printf("\n");
	}
	system("pause");
}

