#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,num1,num2,ac;
	printf("Ingrese un numero ");
	scanf("%d",&num1);
	printf("Ingrese un numero ");
	scanf("%d",&num2);
	for (i=num1;i<=num2;i++){
		ac=i*5;
		printf("\n %d",ac);
	}	
	return 0;
}
