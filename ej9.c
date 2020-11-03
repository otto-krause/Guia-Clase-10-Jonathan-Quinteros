#include <stdio.h>
#include <stdlib.h>
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
