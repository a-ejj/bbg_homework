#include <stdio.h>

//Çok Boyutlu Soru 8: Klavyeden girilen nxn tipindeki A matrisindeki pozitif elemanlarýný B ve negatif elemanlarýný C dizisine atan program

int main ()
{
	int n, i, j, k;
	printf("Satir ve sutun sayilarini giriniz: ");
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
    
    for(i=0; i<n; i++)
    {
    	for(j=0; j<n; j++)
    	{
    		if(A[i][j]>0)
    		{
    			B[i][j]=A[i][j];
			    printf("B[%d][%d]=%d\n", i+1, j+1, B[i][j]);
			}
			else
			{
				C[i][j]=A[i][j];
				printf("C[%d][%d]=%d\n", i+1, j+1, C[i][j]);
			}
		}
    }
    
    return 0;	
}
