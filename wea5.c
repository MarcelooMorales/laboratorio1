#incloude <stdio.h>
int main ()
{
	char fin;
	float caestaturas=0,estaturapromedio=0,estaturas=0,estatura;
	printf("algortimo para la estatura del promedio")
	
	while (fin!='s'||fin!='5'){
		printf("ingrese la estatura en metros")
		scanf("%f",&estatura);
		
		estaturas=estatura+estatura;
		caestaturas++;
	}
	
	estaturapromedio=estaturas/caestaturas;
	printf("la estatura promedio es: %f metros",estaturapromedio);
	
	return 0;
}		
		
