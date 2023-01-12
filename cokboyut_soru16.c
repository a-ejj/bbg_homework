#include <stdio.h>
#include <stdlib.h>

//Çok Boyutlu Soru 16: Klavyeden girilen mxn tipindeki A matrisinde kaç tane birbirinde farklý deðer olduðunu veren program

int main ()
{
	int m, n, i, j, k, a;
	printf("Satir sayisini giriniz: ");
	scanf("%d", &m);
	printf("Sutun sayisini giriniz: ");
	scanf("%d", &n);
	int A[m][n], sayac[m*n];
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			sayac[A[i][j]]++;			
			if(sayac[A[i][j]]==1)
				a++;
		}
	}
	
	printf("%d tane farkli sayi vardir.\n", a);
	
	return 0;
}

