//video_02.c
//Bruno Silveira Gama RA 2216109530
//Matheus de Matos Vieira 2216109607
//Fernanda Silva de Souza 2216109838
//Bruno Macedo Olegario  2216105743

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include"string.h"


 int main(){
system ("color A1");
 	int x,i;
 		printf("\n Sabendo que 1 pomodori equivale a 25 minutos.");
 	printf("\n Escolha uma das opcoes abaixo e veja quantos pomodoris cada tarefa tera\n");
 	printf("\n Opcao 1: \n");
 	printf("\n Opcao 2: \n");
 	printf("\n Opcao 3: \n");
 	printf("\n Opcao 4: \n");
 	printf("\n Opcao 5: Sair\n");
 	printf("\n Digite um numero: \n");
 	
 for(i=0;i<=5;i++){
 
 scanf("%d",&x);

 switch(x){
 	case 1: printf("\n Fazer um relatorio de apresentacao \n"); 
	 printf(" 2 pomodoris\n");printf("----------------\n");break;
	 
 	case 2: printf("\n Resolucoes de equacoes\n "); 
	 printf(" 3 pomodoris\n");printf("----------------\n");break;
	 
 	case 3: printf("\n Leitura de capitulos/topicos para estudos\n"); 
	 printf(" 4 pomodoris\n");printf("----------------\n");break;
	 
 	case 4: printf("\n Revisao para prova de calculo com 4 capitulos cada assunto\n");
	 printf("\n 1º Capitulo 1 pomodori\n 2º Capitulo 2 pomodoris\n 3º Capitulo 1 pomodoris\n 4º Capitulo 3 pomodoris\n");break;
	 
 		case 5: puts ("\n Obrigado pela visita \n"); getch (); return 0 ; break;
 	
 }	


 }

 
  
  }
 
