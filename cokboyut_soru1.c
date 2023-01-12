#include <stdio.h>
#include <stdlib.h>

//Çok Boyutlu Soru 1: Klavyeden girilen nxn tipindeki A matrisinin her bir sütun elemanlarýný kendi aralarýnda büyükten küçüðe doðru sýralayan kod.

int main()
{
	int i, n, j, k, b, sayac=0;
	printf("Lutfen Satir ve Sutun sinirini giriniz :");
	scanf("%d", &n);
	int a[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Olusan matris \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{	
			printf("%d\t", a[i][j]);
		}	
		printf("\n");
	}
	
	while(sayac<n+1)
	{
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				if(i+1==n)
					continue;
				else if(a[i+1][j]>a[i][j])
				{
					b=a[i][j];
					a[i][j]=a[i+1][j];
					a[i+1][j]=b;	
				}
			}
		}
		sayac++;
	}
			
		
	printf("Olusan matris \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{	
			printf("%d\t", a[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
}
