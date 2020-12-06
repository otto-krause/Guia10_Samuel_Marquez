#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=1,div;
	float num;
	printf("Ingrese un numero a dividir ");
	scanf("%f",&num);
	printf("Ingrese el divisor ");
	scanf("%d",&div);
	while (div<num){
	num=num-div;
	}
		if (num==div){
			num=num-div;
		}
	printf("El resto es %f",num);
	return 0;
}
