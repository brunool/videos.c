//video_01.c
//Bruno Silveira Gama 2216109530
//Matheus de Matos Vieira 2216109607
//Fernanda Silva de Souza 2216109838
//Bruno Macedo Olegario  2216105743

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include"string.h"

int menu (void);
void funcao1 (void);
void funcao2 (int, int);
float funcao3 (float,float);

int main (){
	system ("color 1a");
	puts("\n Boas aulas\n");
	puts("\n Precione uma tecla para continuar...");
	getch();
	
	for ( ; ; ){
		switch (menu()){
			case 0 : puts ("\n Ate a proxima!!!");
			getch (); return 0;
			break;
			case 1 : funcao1 ();
			break;
			case 2 :{int n1, n2;
			funcao2 (n1, n2);}
				break;
			
			case 3 : {int n1, n2, media, resposta;
			printf("\n Digite o primeiro numero:");
			scanf("%d", &n1);
			printf("\n Digite o segundo numero:");
			scanf("%d", &n2);
			printf("\n Digite sua resposta:");
			scanf("%d", &resposta);
			media = funcao3 (n1, n2);
			printf ("\n A media de %1d e %.1d = %.2d", n1, n2, media);
if (resposta==media)
   		printf ("\nResposta Exata");
	if (resposta!=media)
        	printf ("\nResposta Errada");
		}
	}
		getch ();
	} 
}
int menu (void){
	int opcao;
	system ("cls");
	puts("Menu de opcoes: \n");
	puts("1 - Cardapio \n");
	puts("2 - Calculadora \n");
	puts("3 - Media dos Numeros \n");
	puts("0 - Sair \n");
	printf("\n Sua opcao: ");
	scanf ("%i", & opcao);
	return opcao;
}

void funcao1 (void){
    float a,b,preco, dinheiro, troco;
	printf("\n1- Cachorro Quente........... R$ 4,00\n");
	printf("\n2- X-Salada........... R$ 4,50\n");
	printf("\n3- X-Bacon........... R$ 5,00 \n");
	printf("\n4- Batata Frita........... R$ 2,00\n");
	printf("\n5- Refrigerante........... R$ 1,50\n");
	printf("\nDigite o numero do pedido:\n");
	 scanf("%f",&a);
	printf("\nDigite a quantidade:\n");
    scanf("%f",&b);
    if(a==1)
        preco=b*4.00;
    else if(a==2)
        preco=b*4.50;
    else if(a==3)
        preco=b*5.00;
    else if(a==4)
        preco=b*2.00;
    else if(a==5)
        preco=b*1.50;
        printf("\n Dinheiro R$:\n");
        scanf("%f", &dinheiro);
        fflush(stdin);
    printf("Total: R$ %.2f\n",preco);
    troco = dinheiro-preco;
        printf("Troco: R$ %.2f", troco);
            if (troco>=1)
   		printf ("\nAguarde o troco...");
	if (troco==0)
        	printf ("\nObrigado!!!");

		
}

void funcao2 (int n1, int n2){
float numero1,numero2;
float soma,subtracao,divisao,multiplicacao;
int escolha;
printf("numero:");
scanf("%f",&numero1);
printf("numero:");
scanf("%f",&numero2);
printf("Qual operacao:\n 1-somar \n 2- subtrair \n 3-multiplicar \n 4-dividir \n 5-sair :");
scanf("%d",&escolha);
switch(escolha){
case 1:
soma = numero1 + numero2;
printf("soma = %f",soma);
break;
while(escolha != 0); //No caso, o usuario teria de digitar 0 para sair
case 2:
subtracao = numero1 - numero2;
printf("subtracao = %f",subtracao);
break;
case 3:
multiplicacao = numero1 * numero2;
printf("multiplicacao = %f",multiplicacao);
break;
case 4:
divisao = numero1 / numero2;
printf("divisao = %f",divisao);
break;
case 5:
printf("operação finalizada");
break;
default:
printf("codigo invalido");
while(escolha != 0); //No caso, o usuario teria de digitar 0 para sair
}
}

float funcao3 (float n1, float n2){
	return ((n1 + n2) / 2);
	
}
