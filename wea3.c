#include <stdio.h>
int main()
{
	float monto,des1,des8,montf1,montf8=0,x=25000
	printf("ingrese el precio del traje para carcular su descuento");
	scanf("%f",&monto);
	if (monto > x) {
		des1=  (monto*15)/100;
		montof1= (monto-des1);
		printf("el valor del traje con el 15% es:%f",montf1);
		printf("\n");
	}
	else if(monto <= x) {
		des8= (monto*8)/100;
		montof8= (monto-d8);
		printf("el valord del traje con 8% es:%f", montf8);
		printf("\n");
	}
	return 0;
