#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
int main()//La función int no tiene argumentos. 
{
	int i,x,nota;
	char nom[20],mvp[100],ca[100];
	for (i=1;i<16;i++){
		printf("\n Ingrese la nota de el alumno %d ",i);
		scanf("%d",&nota);
		printf("\n Ingrese el nombre de el alumno %d ",i);
		scanf("%s",&nom);
		if (nota>=8){
			strcpy(mvp,nom);
			strcat(ca,mvp);
			strcat(ca," ");
		
		}

	}
	printf("\n Los mejores alumnos son ");
	printf("%s ",ca);
/*No se porque al imprimir la variable "ca" se imprime un corazon*/	
	return 0;
}
