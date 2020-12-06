#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mes,dia,anio,a;

	
	printf("Ingrese un anio ");
	scanf("%d",&anio);
	while (anio>0){
		printf("\n Ingrese un mes ");
		scanf("%d",&mes);
		while((mes<=12)&&(mes>=1)){
				printf("\n Ingrese un dia ");
				scanf("%d",&dia);
				if (mes==2){
				while((28>=dia)&&(dia>=1)){
					printf("\n Fecha valida ");
					scanf(" ",&a);
				}						
						} else{
						
				while((31>=dia)&&(dia>=1)){
					printf("\n Fecha valida ");
					scanf(" ",&a);
				}
			}
					printf("\n Dia Invalido");
				}
		printf("\n Mes invalido");
	}
	return 0;
}
