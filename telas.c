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
              printf("Digite (1) para login\n");
              printf("Digite (2) para se cadastrar como paciente\n");
              printf("Digite (3) para marcar um agendamento\n");
              printf("Digite (4) para cancelar uma consulta\n");
              printf("Digite (5) para se cadastrar como médico\n");
              printf("Digite (6) para se cadastrar como funcionário\n");
              printf("Digite (7) para fazer um elogio\n");
              printf("Digite (8) para fazer uma reclamação\n");
              printf("Digite (9) para acessar a área de relatórios\n");
              scanf("\n%c",&x);
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
              case '7':elogie();
                break;
              case '8':reclame();
                break;
              case '9':relatorio();
                break;
         }
       } while(x > 0 & x < 8 );           
}
void login(void){
       printf("E-mail:\n");
       scanf("%s",email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Usuário: %s - Seja bem vindo à NuVida!\n",email); 
}
void cadastro_paciente(void){
        printf("Nome:\n");
        scanf("%s",nome);
        printf("CPF:\n");
        scanf("%id",cpf);
        printf("Data de nascimento: \n");
        scanf("%id",nascimento);
        printf("Telefone:\n");
        scanf("%id",telefone);
        printf("Endereço:\n");
        scanf("%id",endereco);
        printf("E-mail:\n");
        scanf("%s",email);
        printf("Senha:\n");
        scanf("%id",senha);
        printf("Você foi cadastro com sucesso!\n");
}
void cadastro_agendamento(void){
       printf("E-mail:\n");
       scanf("%s",email);
       printf("CPF:\n");
       scanf("%id",cpf);
       printf("AGENDE ABAIXO\n");
       printf("Data:\n");
       scanf("%id",agendamento);
       printf("Sua consulta foi marcada para: %id \n", agendamento);
}
void cadastro_medico(void){
      printf("Nome:\n");
      scanf("%s",nome);
      printf("CPF:\n");
      scanf("%id",cpf);
      printf("Data de nascimento:\n");
      scanf("%id",nascimento);
      printf("Telefone:\n");
      scanf("%id",telefone);
      printf("Endereço:\n");
      scanf("%id",endereco);
      printf("E-mail:\n");
      scanf("%s",email);
      printf("Senha:\n");
      scanf("%id",senha);
      printf("Você foi cadastro com sucesso!\n");
}
void cadastro_funcionario(void){
      printf("Nome:\n");
      scanf("%s",nome);
      printf("CPF:\n");
      scanf("%id",cpf);
      printf("Data de nascimento:\n");
      scanf("%id",nascimento);
      printf("Telefone:\n");
      scanf("%id",telefone);
      printf("Endereço:\n");
      scanf("%id",endereco);
      printf("E-mail:\n");
      scanf("%s",email);
      printf("Senha:\n");
      scanf("%id",senha);
      printf("Você foi cadastro com sucesso!\n");
}
void cancelamento_de_consultas(void){
       printf("E-mail:\n");
       scanf("%s",email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Digite a data da consulta a ser cancelada:");
       scanf("%id",agendamento);
       printf("Você tem certeza?");
}
void elogie(void){
       printf("Deixe seu elogio abaixo:\n");
       scanf("%s");
       printf("Sua reclamação foi enviada.\n");
       printf("Nós da NuVida te agradecemos por isso!\n");
}
void reclame(void){
       printf("Deixe sua reclamação abaixo:\n");
       scanf("%s");
       printf("Sua reclamação foi enviada.\n");
       printf("Nós da NuVida te agradecemos por isso!\n");
}
void paraisopolis(void){
      printf("Relatórios da Unidade Paraisopólis\n");
      printf("Digite (1) para totalização do faturamento diário\n");
      printf("Digite (2) para totalização do faturamento mensal\n");
      printf("Digite (3) para ver o número de pacientes dessa unidade\n");
}
}
void morumbi(void){
       printf("Relatórios da Unidade Morumbi\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
}
void vila(void){
      printf("Relatórios da Unidade Vila\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
}
int relatorio(){
  char y = '0';
      do{
        printf("Você está na área de relatórios agora\n");
        printf("Digite (1) para Unidade Paraisopólis\n");
        printf("Digite (2) para Unidade Morumbi\n");
        printf("Digite (3) para Unidade Vila\n");
        scanf("\n%c",&y);
      switch (y){
         case '1':paraisopolis();
           break;
         case '2':morumbi();
           break;
         case '3':vila();
           break;
     } 
} while(y > 0 & y < 3);
}
