#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char email[30];
char senha[8];
char nome[60];
char cpf [12];
char nascimento[10];
char telefone [14];
char endereco[60];
char agendamento[10];
 
int main(){
       char x = '0';      
       do{
              printf("BEM VINDO Á NUVIDA!\n");
              printf("Digite (1) para login ou (2) para se cadastrar como paciente: \n");
              printf("Digite (3) para marcar um agendamento ou (4) para cancelar uma consulta: \n");
              printf("Digite (5) para se cadastrar como médico ou (6) para se cadastrar como funcionário:  \n");
              printf("Digite (7) para fazer uma reclamação ou elogio: \n");
              scanf("\n%c", &x);
       switch (x){
              case '1':login();
                break;
              case '2':cadastro_paciente();
                break;
              case '3':cadastro_agendamento();
                break;
              case '4':cancelamento_de_consultas();
                break;
              case '5':cadastro_medico();
                break;
              case '6':cadastro_funcionario();
                break;
              case '7':reclame_elogie();
                break;
         }
       }while(x > 0 & x < 8 );
             return 0;
}
void login(void){
       printf("E-mail: \n");
       scanf("%s", email);
       printf("Senha: \n");
       scanf("%id", senha);
       printf("Usuário: %s - Seja bem vindo à NuVida!\n",email); 
}
void cadastro_paciente(void){
        printf("Nome: \n");
        scanf("%s", nome);
        printf("CPF: \n");
        scanf("%id", cpf);
        printf("Data de nascimento: \n");
        scanf("%id", nascimento);
        printf("Telefone: \n");
        scanf("%id", telefone);
        printf("Endereço: \n");
        scanf("%id", endereco);
        printf("E-mail: \n");
        scanf("%s", email);
        printf("Senha: \n");
        scanf("%id", senha);
}
void cadastro_agendamento(void){
       printf("E-mail: \n");
       scanf("%s", email);
       printf("CPF: \n");
       scanf("%id", cpf);
       printf("AGENDE ABAIXO");
       printf("Data : \n");
       scanf("%id", agendamento);
}
void cadastro_medico(void){
      printf("Nome: \n");
      scanf("%s", nome);
      printf("CPF: \n");
      scanf("%id", cpf);
      printf("Data de nascimento: \n");
      scanf("%id", nascimento);
      printf("Telefone: \n");
      scanf("%id", telefone);
      printf("Endereço: \n");
      scanf("%id", endereco);
      printf("E-mail: \n");
      scanf("%s", email);
      printf("Senha: \n");
      scanf("%id", senha);
}
void cadastro_funcionario(void){
      printf("Nome: \n");
      scanf("%s", nome);
      printf("CPF: \n");
      scanf("%id", cpf);
      printf("Data de nascimento: \n");
      scanf("%id", nascimento);
      printf("Telefone: \n");
      scanf("%id", telefone);
      printf("Endereço: \n");
      scanf("%id", endereco);
      printf("E-mail: \n");
      scanf("%s", email);
      printf("Senha: \n");
      scanf("%id", senha);
}
void cancelamento_de_consultas(void){
       printf("E-mail: \n");
       scanf("%s", email);
       printf("Senha: \n");
       scanf("%id", senha);
       printf("Digite a data da consulta a ser cancelada: ");
       scanf("%id", agendamento);
       printf("Você tem certeza?");
}
void reclame_elogie(void){
       printf("Deixe seu elogio ou reclamação abaixo: \n");
       scanf("%s");
       printf("Nós da NuVida te agradecemos por isso! \n");
}
