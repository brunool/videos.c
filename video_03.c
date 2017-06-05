//"video_04.c
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

int menu (void);
void funcao1 (void);
void funcao2 (void);


int main (){
	system ("color 4F");
    puts("\n Precione uma tecla para continuar...");
	getch();
	
	for ( ; ; ){
		switch (menu()){
			case 0 : puts ("\n Ate logo parsa  !!! ;) ");
			getch (); return 0;
			break;
			case 1 : funcao1 ();
			break;
			case 2 :funcao2 ();
		
			
				break;
			
		
			default : puts ("\n Opcao invalida");	
			
		}
		getch ();
	} 
}
int menu (void){
	int opcao;
	system ("cls");
	puts("Menu de opcoes: \n");
	puts("1 - Parar de Fumar \n");
	puts("2 - Para de Beber \n");
    puts("0 - Sair \n");
	printf("\n Sua opcao: ");
	scanf ("%i", & opcao);
	return opcao;
}

void funcao1 (void){
	printf ("\t Rotinas para parar de fumar \n\n 1-Fazer caminhada \n\n 2-Respirar ar puro\n\n 3-Fazer atividades fisicas \n\n");
	printf("\t Recompensas \n\n 1-Saude melhor \n\n 2-Elimina o mau cheiro \n\n 3-Respiracao melhor");


}

void funcao2 (void){ 
   printf("\t Rotinas para parar de beber \n\n 1-Jogar bola \n\n 2-Academia \n\n 3-Beber agua\n\n");
   printf("\t Recompensas \n\n 1-Dorme bem \n\n 2-Desempenho melhor em atividades \n\n 3-Sua atitude melhora");
}



