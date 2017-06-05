//"video_04.c
//Bruno Silveira Gama RA 2216109530
//Matheus de Matos Vieira 2216109607
//Fernanda Silva de Souza 2216109838
//Bruno Macedo Olegario  2216105743



#include<string.h>
#include<conio.h>
#include<stdio.h>

struct agenda {
       int num;
       char atividades [100];
    int vazio; 
} registros[100];
       

void cadastrar(int num, int pos);
void consultar();
int verifica_pos();
void zerar();
int verifica_num(int num);
void excluir();

main() {
	system ("color 0E");
zerar();
int op=0,retorno,codaux,posicao;
while(op!=4){
   printf("\n\n\t\t\t\t** AGENDA DAS ATIVIDADES **\n\n\nMENU ATIVIDADES\n\n1 - Cadastrar\n2 - Consultar\n3 - Excluir\n4 - Sair\n\nOpcao:  ");
   scanf("%d",&op);
   fflush(stdin);
   switch(op) {
       case 1: {                 
            posicao=verifica_pos();
            if (posicao!=-1) {
            printf("\nEntre com o numero da atividade desejado\n");
            scanf("%d",&codaux);fflush(stdin);
               retorno=verifica_num(codaux);
               if (retorno==1)
                  cadastrar(codaux,posicao);
               else
                  printf("\nNumero ja existente\n");
            } 
            else
              printf("\nA agenda esta cheia\n");    
       break;
       }
       
       case 2: {                 
            consultar();
       break;    
       }
       
       case 3: {
            excluir();
       break;
       }
       
       case 4: {
            printf("\n\nAte logo parsa !!");
       break;
       }
            
   }
}
     
getch();      
}

void cadastrar(int num, int pos) {
pos=verifica_pos();
registros[pos].num=num;
printf("\nAtividade:\n");
gets(registros[pos].atividades);
registros[pos].vazio=1;
printf("\nRegistro da Atividade Realizado com Sucesso!\n\n");
}

void consultar() {
int cont=0, num;
printf("\nEntre com o numero da atividade desejado\n");
scanf("%d",&num);
while(cont<=100) {
    if (registros[cont].num==num) {
       if (registros[cont].vazio==1) {
          printf("\nAtividade: %s",registros[cont].atividades);
          
          break;
       }
    }
    cont++;
    if (cont>100)
       printf("\nNumero nao encontrado\n"); 
}                         
}

int verifica_pos() {
int cont=0;
while (cont<=100) {
      if (registros[cont].vazio==0)
         return(cont);
      cont++;    
}
return(-1);
}

void zerar() {
int cont;
for (cont=0;cont<=100;cont++)
    registros[cont].vazio=0; 
}

int verifica_num(int num) {
int cont=0;
while (cont<=100) {
   if (registros[cont].num==num)
      return(0);
   cont++;
}
return(1);
}

void excluir() {
int num, cont=0;
printf("\nEntre com o numero da atividade que deseja excluir\n");
scanf("%d",&num);


while (cont<=100) {
      if (registros[cont].num==num)
         if (registros[cont].vazio==1) {
            registros[cont].vazio=0;
            printf("\nExclusao feita com sucesso\n");
            break;
         }
      cont++;
      if (cont>100)
         printf("\nNumero nao encontrado\n");
}
}
