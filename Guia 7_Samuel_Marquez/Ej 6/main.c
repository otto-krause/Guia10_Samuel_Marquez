#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,fac=1,num=0;
	printf("Ingrese un numero ");
	scanf("%d",&num);
	for (i=1;i<=num;i++){
		fac=fac*i;
	}
	printf("El factorial es %d ",fac);
	return 0;
}
