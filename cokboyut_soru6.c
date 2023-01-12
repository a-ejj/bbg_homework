#include <stdio.h>
#include <math.h>

/*Çok Boyutlu Soru 6: Klavyeden girilen nxn tipindeki A matrisinin tüm elemanlarýnýn karelerini alarak B matrisini ve tüm elemanlarýnýn 
    kareköklerini alarak C matrisini oluþturup bu matrisini oluþturup bu matrisleri çarpýp D matrisini bulan program*/

int main()
{
	int n, i, j;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d", &n);
	int A[n][n], B[n][n], C[n][n], D[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]= ", i+1, j+1);
			scanf("%d", &A[i][j]);		
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			B[i][j]=A[i][j]*A[i][j];
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			C[i][j]=sqrt(A[i][j]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			D[i][j]=B[i][j]*C[i][j];
			printf("D[%d][%d]=%d \n", i+1, j+1, D[i][j]);
	    }
	}
	
	return 0;
}
