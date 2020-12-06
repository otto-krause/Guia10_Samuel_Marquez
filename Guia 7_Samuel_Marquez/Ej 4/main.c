#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Inicie el contador en 1 porque siempre va a  haber una nota de un tp*/
int main(int argc, char *argv[]) {
	int i,tpa=0,si=0,ci;
	float pg,pgc,pc,acu,ln=1,cont=1,nt=0,ntp,mvp;
	for (i=1;i<51;i++){
		printf("\n\n Ingrese la nota de el trabajo practico ");
		scanf("%f",&ntp);
		printf("\n Ingrese una nota ");
		scanf("%f",&ln);
			while(ln>=0){
			cont=cont+1;
			acu=ln+acu;
			printf("\n Ingrese una nota ");
			scanf("%f",&ln);			
			}
			
			if (ntp>=6){
				tpa=tpa+1;
			}
	nt=ntp+acu;
	pg=nt/cont;	
	pgc=pgc+pg;
			if (pg>mvp){
				mvp=pg;
				ci=i;
			}
			
			if (cont<=2){
			si=si+1;	
			}
			
	printf("\n El promedio de el alumno %d es  %f ",i,pg);
	printf("\n ///////////////////////////////////////////////////////////////////////////////");
	cont=1;
	acu=0;		
	}
	pc=pgc/50;
	printf("\n La cantidad de alumnos que aprobaron el tp es %d ",tpa);
	printf("\n El promedio general de el curso es %f ",pc);
	printf("\n El mejor promedio fue el alumno %d con un promedio de %f ",ci,mvp);
	printf("\n La cantidad de alumnos con 2 o menos notas ingresadas : %d",si);
	return 0;
}
