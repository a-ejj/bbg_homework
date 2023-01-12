#include <stdio.h>
#include <stdlib.h>

//Çok Boyutlu Soru 2: Klavyeden girilen nxn tipindeki A matrisini, transpozesiyle çarpýp B matrisini oluþturan ve bu B matrisinin en büyük ve en küçük elemanýný bulan kod.

int main ()
{
	int n, i, j, k, m;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	int a[n][n], b[n][n], t[n][n];
	for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(k=0; k<n; k++)
	{
		for(m=0; m<n; m++)
			t[k][m]=a[m][k];
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			b[i][j]=(t[i][j]*a[i][j]);
	}
	
	printf("Olusan Matris: \n");
	for(k=0; k<n; k++)
	{
		for(m=0; m<n; m++)
			printf("%d\t", b[k][m]);
		printf("\n");
	}
	
	int max=b[0][0], min=b[0][0];
	for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(b[i][j]>max)
				max=b[i][j];
		    else if(b[i][j]<min)
			    min=b[i][j];
		}
	}
	printf("En buyuk eleman: %d \nEn kucuk eleman: %d", max, min);

	return 0;
}
