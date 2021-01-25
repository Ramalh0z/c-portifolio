#include <stdio.h>

void menu(){
	printf("###################");
	printf("CALCULADORA 1.0");
	printf("###################\n");
	printf("escolha uma das opções: \n");
	printf("1 - adição");
	printf("2 - subtração");
	printf("3 - divisão");
	printf("4 - multiplicação");
	printf("\n");
	printf("digite sua opção: ");
}

void voltarInicio()
{
	printf("deseja voltar para o inicio?\n [s/n] ");
	String voltar;
	scanf("%s", voltar);
	if(voltar == "s"){
	 goto inicio;
	}
	if(voltar == "n"){
	 printf("deseja sair do programa? [s/n]");
	 String resposta2;
	 scanf("%s", &resposta2);
	  if(resposta2 == "s"){
	   return 0;
	   }
	  if(resposta2 == "n"){
	   goto inicio;
	   }
	 }
}

float soma(float n1, float n2){ return n1 + n2;}
float sub(float n1, float n2){ return n1 - n2;}
float div(float n1, float n2){ return n1 / n2;}
float multi(float n1, float n2){ return n1 * n2;}

int main(void)
{
	float n1, n2;
	int opcoes;

	inicio:	menu();
	scanf("%d", &opcoes);

	switch (opcoes)
	{
	 case 1:
	  printf("deseja somar ", &n1, "e ", &n2, "? [s/n]\n");
	  String respostaA;
	  scanf("%s", &respostaA)

	  if(respostaA == "s"){
	    soma(n1, n2);
	  }

	  voltarInicio();

	 case 2:
	  printf("deseja subtrair ", &n1, "e ", &n2, "? [s/n]");
	  String respostaB;
	  scanf("%s", &respostaB);

	  if(respostaB == "s"){
	    sub(n1, n2);
	  }

	  voltarInicio();

	 default:
	  return 0;
}
