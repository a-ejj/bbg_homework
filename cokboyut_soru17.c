#include <stdio.h>

//�ok Boyutlu Soru 17: Klavyeden girilen matrisin, ana ile yedek k��egen �zerindeki elemanlar�n� kar��l�kl� olarak de�i�tiren program

int main() 
{
	int i, j, n, temp;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d", &n);
	int A[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]= ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
    i=0; j=0;
    while(i<n)
    {
    	temp=A[i][j];
    	A[i][j]=A[i][n-1-j];
    	A[i][n-1-j]=temp;
    	i++; j++;
	}
	
	printf("Olusan matris: \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%d\t", A[i][j]);
		printf("\n");
	}
	
    return 0;
}



