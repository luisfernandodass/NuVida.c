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
char data[10];
char horario[6];

int main(){
       int x = '0';      
       do{
              printf("BEM VINDO Á NUVIDA!\n");
              printf("Digite (1) se você é um paciente\n");
              printf("Digite (2) se você é um médico\n");
              printf("Digite (3) se você é um funcionário\n");
              scanf("\n%c",&x);              
         switch (x){
              case '1':paciente();
                break;
              case '2':medico();
                break;
              case '3':funcionario();
                break;      
                    }
       } while(x > 0 & x < 8 );           
}
void paciente(void){   
          int p ='0';   
          printf("Digite (1) para login\n");
          printf("Digite (2) para se cadastrar\n");
          scanf("\n%c",&p);
          switch(p){
              case'1':login_paciente();
                  break;
              case'2':cadastro_paciente();
                  break;
                   }               
}
void login_paciente(void){
     int a = '0';
     printf("E-mail:\n");
     scanf("%s",email);
     printf("Senha:\n");
     scanf("%id",senha);
     printf("Usuário: %s - Seja bem vindo à NuVida!\n",email); 
     printf("Digite (1) para gerar atestado médico\n");
     printf("Digite (2) para marcar uma consulta\n");
     printf("Digite (3) para cancelar uma consulta\n");
     printf("Digite (4) para deixar um elogio ou reclamação\n");
     scanf("\n%c",&a);            
     switch (a){
         case '1':atestado();
           break;
         case'2':agendar();
           break;
         case'3':cancelamento_de_consultas();
           break;
         case'4':reclamacao_elogio();
           break;
}     
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
void medico(void){
         int m ='0';   
    printf("Digite (1) para login\n");
    printf("Digite (2) para se cadastrar\n");
    scanf("\n%c",&m);
       switch(m){
        case'1':login_medico();
            break;
        case'2':cadastro_medico();
            break;
             }                     
}
void login_medico(void){
       int a = '0';
       printf("E-mail:\n");
       scanf("%s",email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Usuário: %s - Seja bem vindo à NuVida!\n",email); 
       printf("Digite (1) para fazer um atestado médico\n");
       printf("Digite (2) para marcar uma consulta\n");
       printf("Digite (3) para cancelar uma consulta\n");
       printf("Digite (4) para registrar uma internação\n");
       printf("Digite (5) para ver os relatórios\n");
       scanf("\n%c",&a);            
       switch (a){
           case '1':atestado();
             break;
           case'2':agendar();
             break;
           case'3':cancelamento_de_consultas();
             break;
           case'4':internacao();
             break;
           case'5':relatorio();
             break;
  }
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
void funcionario(void){
        int a='0';
        printf("Digite (1) para login\n");
        printf("Digite (2) para se cadastrar como funcionário\n");
        scanf("\n%c",&a);
        switch(a){
          case'1':login_funcionario();
             break;
          case'2':cadastro_funcionario();
             break;
          case'3':faturamento_diario();
        }
}   
void login_funcionario(void){
        int a = '0';
        printf("E-mail:\n");
        scanf("%s",email);
        printf("Senha:\n");
        scanf("%id",senha);
        printf("Usuário: %s - Seja bem vindo à NuVida!\n",email);         
        printf("Digite (1) para marcar uma consulta\n");
        printf("Digite (2) para cancelar uma consulta\n");
        printf("Digite (3) para ver os relatórios\n");
        scanf("\n%c",&a);            
        switch (a){
            case '1':agendar();
              break;
            case'2':cancelamento_de_consultas();
              break;
            case'3':relatorio();
              break;
        }
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
void internacao(void){
       printf("Nome do paciente:\n");
       scanf("%s");
       printf("Data da internação:\n");
       scanf("%id");
       printf("Motivo:");
       scanf("%s");
}                              
void agendar(void){
       printf("E-mail:\n");
       scanf("%s",email);
       printf("CPF:\n");
       scanf("%id",cpf);
       printf("AGENDE ABAIXO\n");
       printf("Data:");
       scanf("%s",data);
       printf("Horário:");
       scanf("%s",horario);
       printf("Sua consulta foi marcada para o dia: %s às %s\n",data,horario);
}
void cancelamento_de_consultas(void){
       printf("E-mail:\n");
       scanf("%s",email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Digite a data da consulta a ser cancelada:");
       scanf("%id",data);
       printf("Você tem certeza?");
}
void reclamacao_elogio(void){
       printf("Deixe seu mensagem abaixo:\n");
       scanf("%s");
       printf("Sua mensagem foi enviada.\n");
       printf("Nós da NuVida te agradecemos por isso!\n");
}
void atestado(void){
  printf("Digite a data da sua consulta:\n");
  scanf("%id",data);
  printf("Digite o horário da sua consulta:\n");
  scanf("%id",horario);
  printf("Paciente: %s  seu atestado foi gerado\n",email);
  printf("Por favor, acesse o link a seguir e o imprima: \n");
}
void relatorio(void){
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
void paraisopolis(void){
      int a ='0';
      printf("Relatórios da Unidade Paraisopólis\n");
      printf("Digite (1) para totalização do faturamento diário\n");
      printf("Digite (2) para totalização do faturamento mensal\n");
      printf("Digite (3) para ver o número de pacientes dessa unidade\n");
      scanf("\n%c",&a);
      switch (a){
           case'1':faturamento_diario();
                 break;
            case'2':faturamento_mensal();
                 break;
            case'3':numero_pacientes();
                 break;
          }
}
void morumbi(void){
       int a ='0';
       printf("Relatórios da Unidade Morumbi\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
       scanf("\n%c",&a);
           switch (a){
             case'1':faturamento_diario();
                  break;
             case'2':faturamento_mensal();
                  break;
             case'3':numero_pacientes();
                  break;
           }
}
void vila(void){
       int a ='0';
       printf("Relatórios da Unidade Vila\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
       scanf("\n%c",&a);
           switch (a){
             case'1':faturamento_diario();
                  break;
             case'2':faturamento_mensal();
                  break;
             case'3':numero_pacientes();
                  break;
     }
}
void faturamento_diario(void){
  int ex, dent, vac, cirur;
  printf("Digite o número de exames feitos hoje: ");
  scanf("%f",&ex);
  printf("Digite o número de consultas odontológicas feitas hoje: ");
  scanf("%f",&dent);
  printf("Digite o número de vacinas vendidas hoje: ");
  scanf("%f",&vac);
  printf("Digite o número de cirurgias feitas hoje: ");
  scanf("%f",&cirur);
  printf("Calculando...\n");
  printf("Faturamento diário de exames: R$%1.f\n",ex * 50);
  printf("Faturamento diário de odontologia: R$%1.f\n",dent * 60);
  printf("Faturamento diário de vacinas: R$%1.f\n",vac * 100);
  printf("Faturamento diário de cirurgias: R$%1.f\n",cirur * 5000);
  printf("Faturamento diário da unidade: R$%1.f\n", ex*50 + dent*60 + vac*100 + cirur*5000);
}
void faturamento_mensal(void){
   float ex, dent, vac, cirur;
   printf("Abaixo, digite a quantidade de serviços prestados no mês\n");
   printf("Digite o número de exames mensais realizados: ");
   scanf("%f",&ex);
   printf("Digite o número de consultas odontológicas mensais realizadas: ");
   scanf("%f",&dent);
   printf("Digite o número de vacinas mensais vendidas: ");
   scanf("%f",&vac);
   printf("Digite o número de cirurgias mensais realizadas: ");
   scanf("%f",&cirur);
   printf("Calculando...\n");
   printf("Faturamento mensal de exames: R$%1.f\n",ex * 50);
   printf("Faturamento mensal de odontologia: R$%1.f\n",dent * 60);
   printf("Faturamento mensal de vacinas: R$%1.f\n",vac * 100);
   printf("Faturamento mensal de cirurgias: R$%1.f\n",cirur * 5000);
   printf("Faturamento mensal da unidade: R$%1.f\n", ex*50 + dent*60 + vac*100 + cirur*5000);
}
void numero_pacientes(void){
  printf("Digite o número\n");
}
