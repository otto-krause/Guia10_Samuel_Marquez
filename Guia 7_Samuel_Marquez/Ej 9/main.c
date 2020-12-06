#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,num=0,num1=0,res=0,dea=0,acu=0;
	printf("Ingrese un numero a multiplicar ");
	scanf("%d",&num);
	printf("Ingrese otro numero a multiplicar ");
	scanf("%d",&num1);

	for (i=1;i<=num1;i++){
	res=num;
	acu=acu+res;
	}
	printf("El resultado es %d",acu);
	return 0;
}
