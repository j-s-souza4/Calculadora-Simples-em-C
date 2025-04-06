#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int adicao(int n1, int n2){
    printf("Resultado: %d + %d = %d\n", n1, n2, n1+n2);
}

int subtracao(int n1, int n2){
    printf("Resultado: %d - %d = %d\n", n1, n2, n1-n2);
}

int multiplicacao(int n1, int n2){
    printf("Resultado: %d * %d = %d\n", n1, n2, n1*n2);
}

int divisao(int n1, int n2){
    if(n2 == 0){
       printf("Erro: Divisao por zero nao e permitida.");
    }else{
        printf("Resultado: %d / %d = %d\n", n1, n2, n1/n2);
    }
}

int main(){
    int opcao, n1, n2;
    char resposta;

    do{
    printf("==================================\n");
    printf("       Calculadora Simples        \n");
    printf("==================================\n");


       printf("Selecione uma operacao:\n");
       printf("1. Adicao\n");
       printf("2. Subtracao\n");
       printf("3. Multiplcacao\n");
       printf("4. Divisao\n");
       printf("5. Sair\n");
       printf("Opcao: ");
       scanf("%d", &opcao);

       if(opcao >= 1 && opcao <= 4){
          printf("Digite o primeiro numero: ");
          scanf("%d", &n1);
          printf("Digite o segundo numero: ");
          scanf("%d", &n2);

       switch(opcao){
          case 1:
            adicao(n1,n2);
            break;
          case 2:
            subtracao(n1,n2);
            break;
          case 3:
            multiplicacao(n1,n2);
            break;
          case 4:
            divisao(n1,n2);
            break;
       }
       }else if(opcao == 5){
          printf("Obrigado por usar a calculadora! Ate a proxima.\n");
          break;
       }else{
          printf("Opcao invalida! Tente novamente.\n");
       }
       
       printf("\n=========================================\n");

       printf("Deseja realizar outra operacao? (s/n): ");
       getchar();
       scanf("%c", &resposta);
       if(resposta == 'n' || resposta == 'N'){
         printf("Obrigado por usar a calculadora! Ate a proxima.");
       }
  }while(resposta == 's' || resposta == 'S');
     return 0;
}

