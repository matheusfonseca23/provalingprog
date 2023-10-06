#include <stdio.h>
#include <stdlib.h>

/*
PROVA PRÁTICA DE LINGUAGEM DE PROGRAMAÇÃO
Ao término enviar e-mail conforme modelo:
Para:       preti.joao@ifmt.edu.br
Assunto:    Prova 1 de Linguagem de Programação 2023/2
Mensagem:   NOME COMPLETO DO ESTUDANTE
Anexo:      prova1.c
*/

//1. Faça um programa que leia o valor unitário de um produto,
//   a quantidade desejada e imprima o valor total a pagar. (2,5pt)
void q01() {
    float valor, valo_final;
    int quantidade;
    printf("Digite o valor unitário do produto:\n");
    scanf("%f",&valor);
    printf("Digite a quantidade desejada do produto:\n");
    scanf("%d",&quantidade);
    valo_final = valor*quantidade;
    printf("O valor total do produto será de R$: %.2f reais.",valo_final);
}

//2. Faça um programa que leia 3 números e imprima o maior deles. (2,5pt)
void q02() {
      float num1, num2, num3, resultado;
    
    printf("Digite o valor do primeiro número:\n");
    scanf("%f",&num1);
    printf("Digite o valor do segundo número número:\n");
    scanf("%f",&num2);
    printf("Digite o valor do terceiro número:\n");
    scanf("%f",&num3);
    
    if( num1>num2 && num1>num3){
        resultado = num1;
    }
    else if(num2>num1 && num2>num3){
        resultado = num2;
    }
    else{
        resultado=num3;
    }
    
    printf("O maior número é: %2.f",resultado);
}

//3. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota
//   da prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1,
//   a nota da prova 2, a média das notas e uma das mensagens: "Aprovado",
//   "Reprovado" ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para
//   reprovação e as demais em prova final). (2,5pt)
void q03() {
    char nome[100];
    float nota1, nota2, media;
    printf("Informe o seu nome:\n");
    printf("OBS: Não utilize espaço caso seja nome composto\n");
    scanf("%s",nome);
    printf("Informe a nota da prova 1:\n");
    scanf("%f",&nota1);
    printf("Informe a nota da prova 2:\n");
    scanf("%f",&nota2);
    media = (nota1+nota2)/2;
    printf("Nome: %s\n",nome);
    printf("Nota da prova 1: %.2f\n",nota1);
    printf("Nota da prova 2: %.2f\n",nota2);
    printf("Média: %.2f\n",media);
    
    if(media>=7){
        printf("APROVADO!");
    }
    else if(media<7 && media>=3){
        printf("EM PROVA FINAL!");
    }
    else{
        printf("REPROVADO");
    }
}

//4. Faça um programa que apresente um menu com 4 opções:
//   [1] - Cadastrar
//   [2] - Excluir
//   [3] - Pesquisar
//   [0] - Sair
//   O usuário deve escolher uma opção e o programa deve imprimir uma mensagem 
//   ao entrar em cada opção do menu. O programa só deve encerrar quando a opção
//   escolhida for zero (0). (2,5pt)
void q04() {
  int opcao;
   
   printf(" -----Menu-----\n\n");
   printf("[1] - Cadastrar\n");
   printf("[2] - Excluir\n");
   printf("[3] - Pesquisar\n");
   printf("[0] - Sair\n");
   printf("Escolha uma opção:\n\n");
   scanf("%d",&opcao);
   
   switch(opcao){
   
    case 0:
    printf("Você escolheu a opção de sair!");
    break;
    
   case 1:
    printf("Você escolheu a opção de cadastrar!\n\n");
    break;
    
   case 2:
    printf("Você escolheu a opção de excluir!\n\n");
    break;
   
   case 3:
    printf("Você escolheu a opção de pesquisar!\n\n");
    break;
    
    default:
    printf("OPÇÃO INVÁLIDA!");
   
   }

}

int main() {
  q01();
  q02();
  q03();
  q04();
  
  return EXIT_SUCCESS;
}
