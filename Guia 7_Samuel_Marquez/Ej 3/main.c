#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fac,ct,pu,np,pmv,mv,vt;
	printf("\n Ingrese la factura ");
	scanf("%d",&fac);	
	 while (fac!=999){	
		printf("\n Ingrese la cantidad ");
		scanf("%d",&ct);
		printf("\n Ingrese el precio unitario ");
		scanf("%d",&pu);		
		printf("\n Ingrese el numero de producto ");
		scanf("%d",&np);	
				vt=ct*pu;
					if (vt>mv){
						mv=vt;
					}
				if (ct>pmv) {
					pmv=np;
				}
	printf("\n //////////////////////////////////////////////////////////");
	printf("\n Ingrese la factura ");
	scanf("%d",&fac);	
	}
	printf("\n El mayor importe fue %d ",mv);
	printf("\n El producto mas vendido fue %d ",pmv);
	return 0;
}
