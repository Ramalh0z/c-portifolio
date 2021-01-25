#include <stdio.h>

int main(){

	int x, y;

	printf("digite o valor de x: ");
	scanf("%d", &x);
	printf("digite o valor de y: ");
	scanf("%d", &y);

	if(x > y)
	{
	 printf("x é maior que y\n");
	} else {
	 printf("y é maior que x\n");
	}

	return 0;
}
