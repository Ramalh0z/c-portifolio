#include <stdio.h>

int main(){
	double f, m, a;
	printf("digite o valor de massa: ");
	scanf("%lf", &m);
	printf("digite o valor da aceleração: ");
	scanf("%lf", &a);

	f = m * a;
	printf("o valor da força é: ");
	printf("%s", &f);
	return 0;
}
