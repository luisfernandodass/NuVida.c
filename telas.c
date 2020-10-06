#include <stdio.h>
#include <string.h>
#include <stdlib.h>

   
      int numPacientes = 1500; 
 
int main(char control, char email[60], int senha[8], char nome[100], char cpf[12], char endereco[100],char data[10], char horario[6],int idade[2],char motivo[200],float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){        
              printf("BEM VINDO Á NUVIDA!\n");
              printf("Digite (1) se você é um paciente\n");
              printf("Digite (2) se você é um médico\n");
              printf("Digite (3) se você é um funcionário\n");
              scanf("\n%c",&control);              
         switch (control){
              case '1':paciente(control, email, senha, nome, cpf, endereco, data, horario);
                break;
              case '2':medico(control,email,senha,nome,cpf,endereco,data,horario,idade,motivo,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                break;
              case '3':funcionario(control,nome,data,endereco,cpf,email,senha,horario,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                break;      
          }
  }    
void paciente(char control, char email[60], int senha[8], char nome[100], char cpf[12], char endereco[100],char data[10], char horario[6]){            
          printf("Digite (1) para login\n");
          printf("Digite (2) para se cadastrar\n");
          printf("Digite (3) para deixar um elogio ou reclamação\n");
          scanf("\n%c",&control);
          switch(control){
              case'1':login_paciente(control, email, senha, control, data, horario);
                  break;
              case'2':cadastro_paciente(control,nome, data, cpf, endereco, email, senha, horario);
                  break;
              case'3':reclamacao_elogio();
                  break;
          }               
  }
void login_paciente(char control, char email[60],int senha[8], char cpf[12], char data[10], char horario[6]){   
           printf("E-mail:\n");
           scanf("%s",email);
           printf("Senha:\n");
           scanf("%id",senha);
           printf("Usuário: %s - Seja bem vindo à NuVida!\n",email); 
           printf("Digite (1) para gerar atestado médico\n");
           printf("Digite (2) para marcar uma consulta\n");
           printf("Digite (3) para cancelar uma consulta\n");     
           scanf("\n%c",&control);            
           switch (control){
               case '1':atestado(data,  horario, email);
                 break;
               case'2':agendar(email, cpf, data, horario);
                 break;
               case'3':cancelamento_de_consultas(control, email, senha, cpf, data, horario);
                 break;
            }        
  }       
void cadastro_paciente(char control,char email[60],int senha[8], char nome[100], char cpf[12], char endereco[100], char data[10],char horario[6]){      
        printf("Nome:\n");
        scanf("%s",nome);
        printf("Data de nascimento:\n");
        scanf("%s",data);
        printf("CPF:\n");
        scanf("%id",cpf);
        printf("Telefone:\n");
        scanf("%id");
        printf("Endereço:\n");
        scanf("%id",endereco);
        printf("Você possui alguma alergia? Se sim, quais? Se não, não preencha\n");
        scanf("%s");
        printf("Você possui plano de saúde? Se não, não preencha\n");
        scanf("%s");       
        printf("E-mail:\n");
        scanf("%s",email);
        printf("Senha:\n");
        scanf("%id",senha);
        printf("Você foi cadastro com sucesso!\n");         
        numPacientes++;
        printf("Parabéns, seja bem vindo! Você é o nosso paciente número: %i\n", numPacientes);
        printf("Você será redirecionado para a página de login\n");
        login_paciente(control, email, senha, cpf, data, horario);           
  }
void medico(char control,char email[60],int senha[8], char nome[100], char cpf[12], char endereco[100],char data[10],char horario[6],int idade[2], char motivo[100],float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){          
        printf("Digite (1) para login\n");
        printf("Digite (2) para se cadastrar\n");
        scanf("\n%c",&control);
           switch(control){
            case'1':login_medico(control,email,senha,nome,data,cpf,idade,motivo,endereco,horario,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                break;
            case'2':cadastro_medico(control,email,senha,nome,data,cpf,idade,motivo,endereco,horario,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                break;
                 }                     
  }    
void login_medico(char control,char email[60],int senha[8],char nome[100],char data[10],char cpf[12],int idade[2],char motivo[200],char endereco[100],char horario[6], float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){      
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
           scanf("\n%c",&control);            
           switch (control){
               case '1':atestado(data, horario, email);
                 break;
               case'2':agendar(email,cpf,data,horario);
                 break;
               case'3':cancelamento_de_consultas(control,email,senha,cpf,data,horario);
                 break;
               case'4':internacao(nome,idade,motivo,data);
                 break;
               case'5':relatorio(control,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                 break;
          }
    }
void cadastro_medico(char control,char nome[100],char data[10], char cpf[12],int idade[2],char motivo[100],char endereco[100],char email[60],int senha[8],char horario[6], float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){
      printf("Nome:\n");
      scanf("%s",nome);
      printf("CPF:\n");
      scanf("%id",cpf);
      printf("Data de nascimento:\n");
      scanf("%s",data);
      printf("Telefone:\n");
      scanf("%id");
      printf("Endereço:\n");
      scanf("%id",endereco);
      printf("E-mail:\n");
      scanf("%s",email);
      printf("Senha:\n");
      scanf("%id",senha);
      printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");
      login_medico(control,nome,data,cpf,idade,motivo,endereco,email,senha,horario,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
   }
void funcionario(char control,char nome[100],char data[10],char endereco[100],char cpf[12],char email[60],int senha[8],char horario[6],float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){
          printf("Digite (1) para login\n");
          printf("Digite (2) para se cadastrar como funcionário\n");
          scanf("\n%c",&control);
          switch(control){
            case'1':login_funcionario(control,data,cpf,email,senha,horario,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
               break;
            case'2':cadastro_funcionario(control,nome,cpf,data,endereco,email,senha,horario,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
               break;
          }
  }     
void login_funcionario(char control,char email[60],char senha[8],char data[10],char cpf[12], char horario[6],float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){
          printf("E-mail:\n");
          scanf("%s",email);
          printf("Senha:\n");
          scanf("%id",senha);
          printf("Usuário: %s - Seja bem vindo à NuVida!\n",email);         
          printf("Digite (1) para marcar uma consulta\n");
          printf("Digite (2) para cancelar uma consulta\n");
          printf("Digite (3) para ver os relatórios\n");
          scanf("\n%c",&control);            
          switch (control){
              case '1':agendar(email, cpf, data, horario);
                break;
              case'2':cancelamento_de_consultas(control,email,senha,cpf,data,horario);
                break;
              case'3':relatorio(control,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                break;
          }
   } 
void cadastro_funcionario(char control,char nome[100],char cpf[12],char data[10],char endereco[100],char email[60],int senha[8],char horario[6],float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){
      printf("Nome:\n");
      scanf("%s",nome);
      printf("CPF:\n");
      scanf("%id",cpf);
      printf("Data de nascimento:\n");
      scanf("%s",data);
      printf("Telefone:\n");
      scanf("%id");
      printf("Endereço:\n");
      scanf("%id",endereco);
      printf("E-mail:\n");
      scanf("%s",email);
      printf("Senha:\n");
      scanf("%id",senha);
      printf("Você foi cadastro com sucesso e será redirecionado a página de login!\n");
      login_funcionario(control,data,cpf,email,senha,horario,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
  }
void internacao(char nome[100], int idade[2],char motivo[100], char data[10]){
       printf("Nome do paciente:\n");
       scanf("%s",nome);
       printf("Idade:\n");
       scanf("%c",idade);
       printf("Motivo:\n");
       scanf("%s",motivo);
       printf("Data da internação:\n");
       scanf("%s",data);
       printf("O paciente %s foi internado por motivo de: %s, na data de: %s",nome,motivo,data);
  }                              
void agendar(char email[60], char cpf[12], char data[10],char horario[6]){
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
void cancelamento_de_consultas(char control, char email[60],char senha[8],char cpf[12],char data[10],char horario[6]){
       printf("E-mail:\n");
       scanf("%s",email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Digite a data da consulta a ser cancelada:");
       scanf("%s",data);
       printf("Você tem certeza?\n");
       printf("Digite (1) se SIM ou (2) se NÃO\n");
       scanf("\n%c",&control);
             if(control == '1'){
               printf("A consulta do dia %s foi cancelada\n",data);
             }else{
               printf("Você foi redirecionado para a página de login\n");
               login_paciente(control,email,senha,cpf,data,horario);
             }
  }
void reclamacao_elogio(void){
       printf("Deixe seu mensagem abaixo:\n");
       scanf("%s");
       printf("Sua mensagem foi enviada.\n");
       printf("Nós da NuVida te agradecemos por isso!\n");
  }
void atestado(char data[10], char horario[6], char email[60]){
  printf("Digite a data da sua consulta:\n");
  scanf("%s",data);
  printf("Digite o horário da sua consulta:\n");
  scanf("%s",horario);
  printf("Paciente: %s  seu atestado foi gerado\n",email);
  printf("Por favor, acesse o link a seguir e o imprima: \n");
 }
void relatorio(char control,float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){    
      do{
        printf("Você está na área de relatórios agora\n");
        printf("Digite (1) para Unidade Paraisopólis\n");
        printf("Digite (2) para Unidade Morumbi\n");
        printf("Digite (3) para Unidade Vila\n");
        printf("Digite (4) para todas as unidades da rede NuVida\n");
        scanf("\n%c",&control);
      switch (control){
         case '1':paraisopolis(control,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
           break;
         case '2':morumbi(control,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
           break;
         case '3':vila(control,ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
           break;
         case'4':totalRede();
           break;
     } 
      } while(control > 0 & control < 3);
  }
void paraisopolis(char control,float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){
      printf("Relatórios da Unidade Paraisopólis\n");
      printf("Digite (1) para totalização do faturamento diário\n");
      printf("Digite (2) para totalização do faturamento mensal\n");
      printf("Digite (3) para ver o número de pacientes dessa unidade\n");
      scanf("\n%c",&control);
      switch (control){
           case'1':faturamento_diario(ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                 break;
            case'2':faturamento_mensal(ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                 break;
            case'3':quantidadePacientes();
                 break;
          }
  }
void morumbi(char control,float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){
       printf("Relatórios da Unidade Morumbi\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
       scanf("\n%c",&control);
           switch (control){
             case'1':faturamento_diario(ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                  break;
             case'2':faturamento_mensal(ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                  break;
             case'3':quantidadePacientes();
                  break;
           }
  }
void vila(char control,float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){
       printf("Relatórios da Unidade Vila\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
       scanf("\n%c",&control);
           switch (control){
             case'1':faturamento_diario(ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                  break;
             case'2':faturamento_mensal(ex,dent,vac,cirur,valEx,valDent,valVac,valCirur);
                  break;    
             case'3':quantidadePacientes();
                  break;       
        }
  }
void faturamento_diario(float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){
  printf("Digite o número de exames feitos hoje: ");
  scanf("%f",&ex);
  printf("Digite o número de consultas odontológicas feitas hoje: ");
  scanf("%f",&dent);
  printf("Digite o número de vacinas vendidas hoje: ");
  scanf("%f",&vac);
  printf("Digite o número de cirurgias feitas hoje: ");
  scanf("%f",&cirur);
  printf("Calculando...\n");
  printf("Faturamento diário de exames: R$%1.f\n",ex*valEx);
  printf("Faturamento diário de odontologia: R$%1.f\n",dent*valDent);
  printf("Faturamento diário de vacinas: R$%1.f\n",vac*valVac);
  printf("Faturamento diário de cirurgias: R$%1.f\n",cirur*valCirur);
  printf("Faturamento diário da unidade: R$%1.f\n", ex*valEx + dent*valDent + vac*valVac + cirur*valCirur);
 }
void faturamento_mensal(float ex, float dent, float vac, float cirur, float valEx, float valDent, float valVac, float valCirur){
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
      printf("Faturamento mensal de exames: R$%1.f\n",ex*valEx);
      printf("Faturamento mensal de odontologia: R$%1.f\n",dent*valDent);
      printf("Faturamento mensal de vacinas: R$%1.f\n",vac*valVac);
      printf("Faturamento mensal de cirurgias: R$%1.f\n",cirur*valCirur);
      printf("Faturamento mensal da unidade: R$%1.f\n", ex*valEx + dent*valDent + vac*valVac + cirur*valCirur);
  }
void quantidadePacientes(void){     
      printf("Essa unidade tem 1500 pacientes\n");     
  }
void totalRede(void){
      printf("Digite (1) para calcular o faturamento total da rede NuVida\n");
      printf("Digite (2) para ver o número de pacientes da rede\n");
  }