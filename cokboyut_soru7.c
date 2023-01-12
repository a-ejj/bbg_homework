#include <stdio.h>
#include <math.h>

//Çok Boyutlu Soru 7: Klavyeden girilen nxn tipindeki A matrisinin belirtilen üssünü alan kod.

int main ()
{
	int n, k, i, j, ussu;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d", &n);
	int A[n][n];
	for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]= ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	printf("Ussu sayisini giriniz: ");
	scanf("%d", &k);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			ussu=pow(A[i][j],k);
			printf("A[%d][%d]:%d \n", i, j, ussu);
		}
	}
	
	return 0;
	
}
