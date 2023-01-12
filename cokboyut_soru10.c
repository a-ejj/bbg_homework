#include <stdio.h>

//Çok Boyutlu Soru 10: Klavyeden girilen nxn tipindeki A matrisinde hangi elemandan kaç tane olduðunu bulan kod.

int main ()
{
	int  n, i, j, k, m;
	printf("Satir ve sutun sayisi giriniz: ");
	scanf("%d",&n);
	int A[n][n], B[n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]= ", i+1, j+1);
			scanf("%d", &A[i][j]);
	    }
	}
	
	int sayac[100]={0};
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			sayac[A[i][j]]++;
	}
	
	for(i=0; i<100; i++)
	{
		if(sayac[i]!=0)
			printf("%d den: %d kadar vardir.\n", i, sayac[i]);
	}
	
	return 0;	
}
	
