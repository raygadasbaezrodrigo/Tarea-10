//PRograma que pida el iva de una cantidad, imprimiendo el iva, el subtotal y el total con scanf//
#include<stdio.h>
#include<math.h>
int main ()
{
	float cant=0;
	
		printf("Mande la cantidad  ");
		scanf("%f",&cant);
		printf("El iva es: %f\n\n\n",cant*0.16);
		printf("El subtotal es: %f\n\n\n",cant);
		printf("Total a pagar: %f\n\n\n",cant+(cant*0.16));
}

