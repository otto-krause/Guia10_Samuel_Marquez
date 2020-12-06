#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=1,div;
	float rt,ac,num;
	printf("Ingrese un numero a dividir ");
	scanf("%f",&num);
	printf("Ingrese el divisor ");
	scanf("%d",&div);
	while (div<num){
	num=num-div;
	i=i+1;
	}
	
	printf("El resultado es %d",i);
	return 0;
}
