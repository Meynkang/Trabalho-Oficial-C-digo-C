#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
  
  //Nome. Curso. Universidade. Matrícula.
  puts("Meynka do Nascimento Griebeler. Analise e Desenvolvimento de Sistemas. UniLaSalle. 202212240\n");
 int operacao, menu;
  float num1, num2;
  menu = 1;
  do {
    // Solicitando ao usuário qual operação deseja realizar;
    printf("Escolha \n 1 para raiz quadrada: \n 2 para soma, subtracao, multiplicacao, "
           "divisao e potenciacao: \n 0 para sair: \n");
    scanf("%i", &operacao);

    // Selecionando a opçao 1 realiza a raiz quadrada;
    if (operacao == 1) {
      printf("Digite o numero desejado: \n");
      scanf("%f", &num1);
      printf("A raiz de quadrada de %0.2f = %0.2f \n", num1, sqrt(num1));
    }
    // Caso digite 2 realiza a soma, multiplicaçao, divisão e potenciação;
    else if (operacao == 2) {
      char simbolo;
      printf("Digite o simbolo matematico da operacao desejada(+, -, *, /, "
             "^): \n");
      scanf(" %c", &simbolo);

      switch (simbolo) {
      case '+':
        printf("Digite o primeiro numero: \n");
        scanf("%f", &num1);

        printf("Digite o proximo numero: \n");
        scanf("%f", &num2);

        printf("A soma e: %0.2f\n", num1 + num2);
        break;

      case '-':
        printf("Digite o primeiro numero: \n");
        scanf("%f", &num1);

        printf("Digite o proximo numero: \n");
        scanf("%f", &num2);

        printf("A subtracao e: %0.2f\n", num1 - num2);
        break;

      case '*':
        printf("Digite o primeiro numero: \n");
        scanf("%f", &num1);

        printf("Digite o proximo numero: \n");
        scanf("%f", &num2);

        printf("A multiplicacao e: %0.2f\n", num1 * num2);
        break;

      case '/':
        printf("Digite o primeiro numero: \n");
        scanf("%f", &num1);
        do {
          printf("Digite o proximo numero: \n");
          scanf("%f", &num2);
        //Não pode dividir por zero.
          if (num2 == 0) {
            printf("Voce não pode dividir por zero.");
          }

        } while (num2 = 0);

        printf("A divisao e: %0.2f\n", num1 / num2);
        break;

      case '^':
        printf("Digite a base: \n");
        scanf("%f", &num1);

        printf("Digite o expoente: \n");
        scanf("%f", &num2);

        printf("A potencia e: %0.2f\n", pow(num1, num2));
        break;

      case 'r':
        printf("Para essa operacao voce precisa escolher a opcao 1:\n");
        break;

      default:
        printf("A operação escolhida e inválida:\n");
      }
    } else if (operacao == 0) {
      menu = 0;
      printf("SAINDO...");
    }

    else {
      printf("Operacao invalida");
    }

  }

  while (menu == 1);

  return 0;
}

  

