#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(){        
    char control;            
       printf("BEM VINDO Á NUVIDA!\n");
       printf("Digite (1) se você é um paciente\n");
       printf("Digite (2) se você é um médico\n");
       printf("Digite (3) se você é um funcionário\n");
       scanf("\n%c",&control);              
          switch (control){
              case '1':paciente();
                break;
              case '2':medico();
                break;
              case '3':funcionario();
          }
  }    
void paciente(){   
          char control;         
          printf("Digite (1) para login\n");
          printf("Digite (2) para se cadastrar\n");
          printf("Digite (3) para deixar um elogio ou reclamação\n");
          scanf("\n%c",&control);
          switch(control){
              case'1':login_paciente();
                  break;
              case'2':cadastro_paciente();
                  break;
              case'3':reclamacao_elogio();
                  break;
          }               
  }
void login_paciente(){   
    char control;
    char email[60];
    int senha[8];
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
               case '1':atestado();
                 break;
               case'2':agendar();
                 break;
               case'3':cancelamento_de_consultas();
                 break;
            }        
  }       
void cadastro_paciente(){             
    char nome[100];
    char data[8];
    char sexo[1];
    char cpf[13];
    char tel[10];
    char endereco[60];
    char email[60];
    int senha[8];
    int numPacientes;
        printf("Nome:\n");
        gets(nome);
        printf("Data de nascimento:\n");
        gets(data);
        printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
        gets(sexo);        
        printf("CPF:\n");
        gets(cpf);
        printf("Telefone:\n");
        gets(tel);
        printf("Endereço:\n");
        gets(endereco);
        printf("Você possui alguma alergia? Se sim, quais? Se não, não preencha\n");
        scanf("%s");
        printf("Você possui plano de saúde? Se não, não preencha\n");
        scanf("%s");       
        printf("E-mail:\n");
        gets(email);
        printf("Senha:\n");
        scanf("%id",senha);
        printf("Você foi cadastro com sucesso!\n");         
        numPacientes++;
        printf("Parabéns, seja bem vindo! Você é o nosso paciente número: %i\n", numPacientes);
        printf("Você será redirecionado para a página de login\n");
        login_paciente();           
  }
void medico(){
    char control;
       printf("Digite (1) para login\n");
       printf("Digite (2) para se cadastrar\n");
       scanf("\n%c",&control);
           switch(control){
            case'1':login_medico();
                break;
            case'2':cadastro_medico();
                break;
                 }                     
  }    
void login_medico(){  
    char control;          
    char email[60];
    int senha[8];    
        printf("E-mail:\n");
        gets("%s",email);
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
void cadastro_medico(){
    char nome[100];
    char cpf[13];
    char data[8];
    char sexo[1];
    char tel[10];
    char endereco[60];
    char email[60];
    int senha[8];
       printf("Nome:\n");
       gets("%s",nome);
       printf("CPF:\n");
       gets(cpf);
       printf("Data de nascimento:\n");
       gets(data);
       printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
       gets(sexo);        
       printf("Telefone:\n");
       gets(tel);
       printf("Endereço:\n");
       gets(endereco);
       printf("E-mail:\n");
       gets(email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");
       login_medico();
   }
void funcionario(){
    char control;
       printf("Digite (1) para login\n");
       printf("Digite (2) para se cadastrar como funcionário\n");
       scanf("\n%c",&control);
          switch(control){
            case'1':login_funcionario();
               break;
            case'2':cadastro_funcionario();
               break;
          }
  }     
void login_funcionario(){
    char control;
    char email[60];
    int senha[8];
        printf("E-mail:\n");
        gets(email);
        printf("Senha:\n");
        scanf("%id",senha);
        printf("Usuário: %s - Seja bem vindo à NuVida!\n",email);         
        printf("Digite (1) para marcar uma consulta\n");
        printf("Digite (2) para cancelar uma consulta\n");
        printf("Digite (3) para ver os relatórios\n");
        scanf("\n%c",&control);            
          switch (control){
              case '1':agendar();
                break;
              case'2':cancelamento_de_consultas();
                break;
              case'3':relatorio();
                break;
          }
   } 
void cadastro_funcionario(){     
    char nome[100];
    char cpf[13];
    char data[8];
    char sexo[1];
    char tel[10];
    char endereco[60];
    char email[60];
    int senha[8];
       printf("Nome:\n");
       gets(nome);
       printf("CPF:\n");
       gets(cpf);
       printf("Data de nascimento:\n");
       gets(data);
       printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
       gets(sexo);        
       printf("Telefone:\n");
       gets(tel);
       printf("Endereço:\n");
       gets(endereco);
       printf("E-mail:\n");
       gets(email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Você foi cadastro com sucesso e será redirecionado a página de login!\n");
       login_funcionario();
  }
void internacao(){      
    char nome[100];
    int idade[2];
    char motivo[200];
    char data[8];
       printf("Nome do paciente:\n");
       gets(nome);
       printf("Idade:\n");
       scanf("%id",idade);
       printf("Motivo:\n");
       gets(motivo);
       printf("Data da internação:\n");
       gets(data);
       printf("O paciente %s foi internado por motivo de: %s, na data de: %s",nome,motivo,data);
  }                              
void agendar(){ 
       char nome[100];
       char sexo[1];
       char email[60];        
       char cpf[13];
       char data[8];
       char horario[10]; 
       printf("Digite seu nome completo:\n");
       gets(nome); 
       printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
       gets(sexo);        
       printf("E-mail:\n");
       gets(email);
       printf("CPF:\n");
       gets(cpf);
       printf("AGENDE ABAIXO\n");
       printf("Data:");
       gets(data);
       printf("Horário:");
       gets(horario);
       printf("Sua consulta foi marcada para o dia: %s às %s\n",data,horario);
  }
void cancelamento_de_consultas(){
    char control;
    char email[60];
    int senha[8];      
    char data[8];      
       printf("E-mail:\n");
       gets(email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Digite a data da consulta a ser cancelada:");
       gets(data);
       printf("Você tem certeza?\n");
       printf("Digite (1) se SIM ou (2) se NÃO\n");
       scanf("\n%c",&control);
             if(control == '1'){
               printf("A consulta do dia %s foi cancelada\n",data);
             }else{
               printf("Você foi redirecionado para a página de login\n");
               login_paciente();
             }
  }
void reclamacao_elogio(void){
       printf("Deixe seu mensagem abaixo:\n");
       scanf("%s");
       printf("Sua mensagem foi enviada.\n");
       printf("Nós da NuVida te agradecemos por isso!\n");
  }
void atestado(){
   char data[8];
   char horario[8];
   char nome[100];
      printf("Digite seu nome completo:\n");
      gets(nome);
      printf("Digite a data da sua consulta:\n");
      gets(data);
      printf("Digite o horário da sua consulta:\n");
      gets(horario);
      printf("Paciente: %s  seu atestado foi gerado!\n",nome);
      printf("Por favor, acesse o link a seguir e o imprima: \n");
 }
void relatorio(){   
    char control; 
      do{
        printf("Você está na área de relatórios agora\n");
        printf("Digite (1) para Unidade Paraisopólis\n");
        printf("Digite (2) para Unidade Morumbi\n");
        printf("Digite (3) para Unidade Vila\n");
        printf("Digite (4) para todas as unidades da rede NuVida\n");
        scanf("\n%c",&control);
      switch (control){
         case '1':paraisopolis();
           break;
         case '2':morumbi();
           break;
         case '3':vila();
           break;
         case'4':totalRede();
           break;
     } 
      } while(control > 0 & control < 3);
  }
void paraisopolis(){
  char control;
      printf("Relatórios da Unidade Paraisopólis\n");
      printf("Digite (1) para totalização do faturamento diário\n");
      printf("Digite (2) para totalização do faturamento mensal\n");
      printf("Digite (3) para ver o número de pacientes dessa unidade\n");
      scanf("\n%c",&control);
      switch (control){
           case'1':faturamento_diario();
                 break;
            case'2':faturamento_mensal();
                 break;
            case'3':quantidadePacientes();
                 break;
          }
  }
void morumbi(){
   char control;
       printf("Relatórios da Unidade Morumbi\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
       scanf("\n%c",&control);
           switch (control){
             case'1':faturamento_diario();
                  break;
             case'2':faturamento_mensal();
                  break;
             case'3':quantidadePacientes();
                  break;
           }
  }
void vila(){
    char control;
       printf("Relatórios da Unidade Vila\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
       scanf("\n%c",&control);
           switch (control){
             case'1':faturamento_diario();
                  break;
             case'2':faturamento_mensal();
                  break;    
             case'3':quantidadePacientes();
                  break;       
        }
  }
void faturamento_diario(){
    float ex = 50;
    float dent = 60;
    float vac = 120;
    float cirur = 5000;
    float valEx;
    float valDent;
    float valVac;
    float valCirur;
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
void faturamento_mensal(){
    float ex = 50;
    float dent = 60;
    float vac = 120;
    float cirur = 5000;
    float valEx;
    float valDent;
    float valVac;
    float valCirur;
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
void quantidadePacientes(){     
      int numPacientes;
      printf("Essa unidade tem 1500 pacientes\n");     
  }
void totalRede(void){
      printf("Digite (1) para calcular o faturamento total da rede NuVida\n");
      printf("Digite (2) para ver o número de pacientes da rede\n");
  }