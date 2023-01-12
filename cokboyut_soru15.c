#include <stdio.h>
#include <string.h>

//Çok Boyutlu Soru 15: Klavyeden girilen bir kelimeyi, ekrana dikey olarak yazdýran kod.

int main()
{
	char A[100];
	int len, i;
	printf("Kelimeyi giriniz: ");
	scanf("%s", &A);
	len=strlen(A);
	for(i=0; i<len; i++)
		printf("%c\n",A[i]);
	
	return 0;	
}
