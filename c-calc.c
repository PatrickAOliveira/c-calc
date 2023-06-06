/*Faça um programa com as funções basicas de
uma calculadora, soma, divisão, multiplicação e
subtração*/
#include <stdio.h>
#include <conio.h>

int main(){
   int opcao,n1,n2,result;
   printf("Digite 1 para somar;\n");
   printf("Digite 2 para subtrair;\n");
   printf("Digite 3 para multiplicar;\n");
   printf("Digite 4 para dividir;\n");
   scanf("%d",&opcao);
   switch(opcao){
      case 1:
         printf("Soma de 2 n\xa3meros\n");
         printf("Digite o primeiro n\xa3mero:\n");
         scanf("%d",&n1);
         printf("Digite o segundo n\xa3mero:\n");
         scanf("%d",&n2);
         result=n1+n2;
         printf("O resultado \x82: %d",result);
         break;
      case 2:
         printf("Subtra\x87\xc6o de 2 n\xa3meros\n");
         printf("Digite o primeiro n\xa3mero:\n");
         scanf("%d",&n1);
         printf("Digite o segundo n\xa3mero:\n");
         scanf("%d",&n2);
         result=n1-n2;
         printf("O resultado \x82: %d",result);
         break;
      case 3:
         printf("Multiplica\x87\xc6o de 2 n\xa3meros\n");
         printf("Digite o primeiro n\xa3mero:\n");
         scanf("%d",&n1);
         printf("Digite o segundo n\xa3mero:\n");
         scanf("%d",&n2);
         result=n1*n2;
         printf("O resultado \x82: %d",result);
         break;
      case 4:
         printf("Divis\xc6o de 2 n\xa3meros\n");
         printf("Digite o primeiro n\xa3mero:\n");
         scanf("%d",&n1);
         printf("Digite o segundo n\xa3mero:\n");
         scanf("%d",&n2);
         result=n1/n2;
         printf("O resultado \x82: %d",result);
         break;
      default:
         printf("Voc\x88 escolheu sair.\n");
         break;
   }
   
   getch();
   return 0;
}