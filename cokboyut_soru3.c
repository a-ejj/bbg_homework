#include <stdio.h>
#include <stdlib.h>

//Çok Boyutlu Soru 3: Klavyeden girilen nxn tipindeki A, B, C matrislerini kullanarak verilen iþlemiyle D matrisini oluþturup bu matrisin izini bulan program

int main ()
{
	int n, i, j, k, m, toplam=0;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	int A[n][n], B[n][n], C[n][n], D[n][n], T1[n][n], T2[n][n];
	for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
    }
    
    for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("B[%d][%d]=", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
    }
    
    for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("C[%d][%d]=", i+1, j+1);
			scanf("%d", &C[i][j]);
		}
    }
    
    for(k=0; k<n; k++)
	{
		for(m=0; m<n; m++)
		{
			T1[k][m]=B[m][k];
			T2[k][m]=C[m][k];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			D[i][j]=(A[i][j])*(T1[i][j]+T2[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",D[i][j]);
		printf("\n");
	}

	for(i=0;i<n;i++)
		toplam+=D[i][i];
		
	printf("Matris izi: %d", toplam);
	
    return 0;    
}
