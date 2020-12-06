#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i,dni,an,ch=0,cm=0,dtr=0;
	float me=0,ct1=0,ed,pme;
	char sexo;
	printf("\n Ingrese su dni ");
	scanf("%d",&dni);
		for(i=dni;i>0;i++){
			ct1=ct1+1;
			printf("\n Ingrese su sexo F/M ");
			scanf("%s",&sexo);
			printf("\n Ingrese su anio de nacimiento ");
			scanf("%d",&an);
			ed=2020-an;
			
			if(sexo=='f'){
				cm=cm+1;
			}
			if(sexo=='m'){
				ch=ch+1;
			}
			
			if(dni<=30000000){
				dtr=dtr+1;
			}
			if(ed<=17){
			me=me+1;	
			}
			
		
		printf("\n Ingrese su dni ");
		scanf("%d",&dni);
		i=dni;	
		}
	pme=(me*100)/ct1;
	printf("\n La cantidad de hombres %d ",ch);
	printf("\n La cantidad de mujeres %d ",cm);
	printf("\n El porcentaje de menores de edad es %f ",pme);
	printf("\n Personas con dni menor a 30 millones %d ",dtr);
	
	return 0;
}
