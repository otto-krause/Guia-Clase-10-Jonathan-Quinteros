#include <stdio.h>
#include <stdlib.h>
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
