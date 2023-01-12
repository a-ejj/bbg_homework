#include <stdio.h>

//Çok Boyutlu Soru 9: Klavyeden girilen nxn tipindeki A ve B matrislerindeki ayný olan elemanlarýný C dizisine aktaran program 

int main ()
{
	int n, i, j;
	printf("Satir ve sutun sayisi giriniz: ");
	scanf("%d",&n);
	int A[n][n], B[n][n], C[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]= ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("B[%d][%d]= ", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(A[i][j]=B[i][j])
				C[i][j]=A[i][j];
			printf("C[%d][%d]=%d\n", i+1, j+1, C[i][j]);		    
		}
	}
	
	return 0;
}
