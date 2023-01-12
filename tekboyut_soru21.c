#include <stdio.h>
#include <stdlib.h>

int main()
{
	float tamKisim, ondaliKisim, sayi;
	printf("Ondalik sayinizi giriniz: ");
	scanf("%f,%f", &tamKisim, &ondaliKisim);
	
	if(tamKisim<0)
		sayi=tamKisim-ondaliKisim/100;
	else
		sayi=tamKisim+ondaliKisim/100;

	printf("Sayiniz, %g", sayi);
	
	return 0;
}
