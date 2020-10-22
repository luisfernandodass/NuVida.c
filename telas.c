#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu()
{
  return main();
}
void paciente()
{
  char control = 0;
  printf("[1] - Login\n");
  printf("[2] - Cadastro\n");
  printf("[3] - Elogio ou reclamação\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      login_paciente();
      break;
    case '2':
      cadastro_paciente();
      break;
    case '3':
      reclamacao_elogio();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida\n");
  return paciente();
}
void login_paciente()
{
  char control = 0;
  char email[100];
  int senha[8];
  printf("E-mail:\n");
  __fpurge(stdin);
  gets(email);
  printf("Senha:\n");
  __fpurge(stdin);
  gets(senha);
  printf("Usuário: %s - Seja bem vindo à NuVida!\n", email);
  printf("-----------------------------------\n");
  printf("[1] - Atestado médico\n");
  printf("[2] - Marcar consulta\n");
  printf("[3] - Cancelar consulta\n");
  printf("[4] - Realizar pagamento\n");
  printf("[5] - Voltar ao menu\n");
  printf("[6] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      atestado();
      break;
    case '2':
      agendar();
      break;
    case '3':
      cancelamento_de_consultas();
      break;
    case '4':
      pagamento();
      break;
    case '5':
      menu();
      break;
    case '6':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 6);
  printf("Por favor, escolha uma opção válida\n");
  return login_paciente();
}
void cadastro_paciente()
{
  struct cadastro
  {
    char nome[110];
    char data[10];
    char sexo[2];
    char cpf[15];
    char tel[13];
    char endereco[110];
    char email[110];
    int senha[8];
  };

  struct cadastro paciente;

  int juntas = 7121;
  printf("Nome:\n");
  __fpurge(stdin);
  fgets(paciente.nome, 100, stdin);
  printf("Data de nascimento:\n");
  __fpurge(stdin);
  fgets(paciente.data, 8, stdin);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  __fpurge(stdin);
  fgets(paciente.sexo, 2, stdin);
  printf("CPF:\n");
  __fpurge(stdin);
  fgets(paciente.cpf, 13, stdin);
  printf("Telefone:\n");
  __fpurge(stdin);
  fgets(paciente.tel, 10, stdin);
  printf("Endereço:\n");
  __fpurge(stdin);
  fgets(paciente.endereco, 100, stdin);
  printf("Você possui alguma alergia? Se sim, quais? Se não, não preencha\n");
  __fpurge(stdin);
  scanf("%s");
  printf("Você possui plano de saúde? Se não, não preencha\n");
  __fpurge(stdin);
  scanf("%s");
  printf("E-mail:\n");
  __fpurge(stdin);
  fgets(paciente.email, 100, stdin);
  printf("Senha:\n");
  __fpurge(stdin);
  fgets(paciente.senha, 10, stdin);
  printf("Você foi cadastro com sucesso!\n");
  juntas++;
  printf("Parabéns, seja bem vindo! Você é o paciente número: %i da rede\n", juntas);
  printf("Você será redirecionado para a página de login\n");
  return login_paciente();
}
void medico()
{
  char control = 0;
  printf("[1] - Login\n");
  printf("[2] - Cadastro\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      login_medico();
      break;
    case '2':
      cadastro_medico();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida\n");
  return medico();
}
void login_medico()
{
  char control = 0;
  char email[60];
  int senha[8];
  printf("E-mail:\n");
  scanf("%s", &email);
  printf("Senha:\n");
  scanf("%id", &senha);
  printf("Usuário: %s - Seja bem vindo à NuVida!\n", email);
  printf("-----------------------------------\n");
  printf("[1] - Atestado médico\n");
  printf("[2] - Marcar consulta\n");
  printf("[3] - Cancelar consulta\n");
  printf("[4] - Registrar internação\n");
  printf("[5] - Relatórios\n");
  printf("[6] - Voltar ao menu\n");
  printf("[7] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      atestado();
      break;
    case '2':
      agendar();
      break;
    case '3':
      cancelamento_de_consultas();
      break;
    case '4':
      internacao();
      break;
    case '5':
      relatorio();
      break;
    case '6':
      menu();
      break;
    case '7':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 7);
  printf("Por favor, escolha uma opção válida\n");
  return login_medico();
}
void cadastro_medico()
{
  struct cadastro
  {
    char nome[110];
    char data[10];
    char sexo[2];
    char cpf[15];
    char tel[13];
    char endereco[110];
    char email[110];
    int senha[8];
  };

  struct cadastro medico;

  printf("Nome:\n");
  __fpurge(stdin);
  fgets(medico.nome, 100, stdin);
  printf("Data de nascimento:\n");
  __fpurge(stdin);
  fgets(medico.data, 8, stdin);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  __fpurge(stdin);
  fgets(medico.sexo, 2, stdin);
  printf("CPF:\n");
  __fpurge(stdin);
  fgets(medico.cpf, 13, stdin);
  printf("Telefone:\n");
  __fpurge(stdin);
  fgets(medico.tel, 10, stdin);
  printf("Endereço:\n");
  __fpurge(stdin);
  fgets(medico.endereco, 100, stdin);
  printf("E-mail:\n");
  __fpurge(stdin);
  fgets(medico.email, 100, stdin);
  printf("Senha:\n");
  __fpurge(stdin);
  fgets(medico.senha, 10, stdin);
  printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");
  return login_medico();
}
void funcionario()
{
  char control = 0;
  printf("[1] - Login\n");
  printf("[2] - Cadastro\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      login_funcionario();
      break;
    case '2':
      cadastro_funcionario();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida\n");
  return funcionario();
}
void login_funcionario()
{
  char control = 0;
  char email[60];
  int senha[8];
  printf("E-mail:\n");
  __fpurge(stdin);
  gets(email);
  printf("Senha:\n");
  __fpurge(stdin);
  gets(senha);
  printf("Usuário: %s - Seja bem vindo à NuVida!\n", email);
  printf("-----------------------------------\n");
  printf("[1] - Marcar consulta\n");
  printf("[2] - Cancelar consulta\n");
  printf("[3] - Relatórios\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      agendar();
      break;
    case '2':
      cancelamento_de_consultas();
      break;
    case '3':
      relatorio();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida\n");
  return login_funcionario();
}
void cadastro_funcionario()
{
  struct cadastro
  {
    char nome[110];
    char data[10];
    char sexo[2];
    char cpf[15];
    char tel[13];
    char endereco[110];
    char email[110];
    int senha[8];
  };

  struct cadastro funcionario;

  printf("Nome:\n");
  __fpurge(stdin);
  fgets(funcionario.nome, 100, stdin);
  printf("Data de nascimento:\n");
  __fpurge(stdin);
  fgets(funcionario.data, 8, stdin);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  __fpurge(stdin);
  fgets(funcionario.sexo, 2, stdin);
  printf("CPF:\n");
  __fpurge(stdin);
  fgets(funcionario.cpf, 13, stdin);
  printf("Telefone:\n");
  __fpurge(stdin);
  fgets(funcionario.tel, 10, stdin);
  printf("Endereço:\n");
  __fpurge(stdin);
  fgets(funcionario.endereco, 100, stdin);
  printf("E-mail:\n");
  __fpurge(stdin);
  fgets(funcionario.email, 100, stdin);
  printf("Senha:\n");
  __fpurge(stdin);
  fgets(funcionario.senha, 10, stdin);
  printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");
  printf("-----------------------------------\n");
  return login_funcionario();
}
void pagamento()
{
  char control = 0;
  printf("Olá, você está na área de pagamentos\n");
  printf("[1] - Pré-pagamento\n");
  printf("[2] - Pós-pagamento\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      prePagamento();
      break;
    case '2':
      posPagamento();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida\n");
  return pagamento();
}
void prePagamento()
{
  char control = 0;
  printf("Olá, tudo bem? Quero te informar que o pré-pagamento não tem taxas ou juros.\n");
  printf("Por favor, escolha uma opção:\n");
  printf("[1] - Consulta médica\n");
  printf("[2] - Consulta odontológica\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      prePagamentoConsultaMedica();
      break;
    case '2':
      prePagamentoConsultaOdontologica();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida\n");
  return prePagamento();
}
void prePagamentoConsultaMedica()
{
  char control = 0;
  int numCartao[15];
  char nome[60];
  char dataValidade[8];
  char dataPagamento[8];
  int cv[3];
  char c;
  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Aceitamos: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  __fpurge(stdin);
  gets(numCartao);
  printf("Nome no cartão:\n");
  __fpurge(stdin);
  gets(nome);
  printf("Data de validade:\n");
  __fpurge(stdin);
  gets(dataValidade);
  printf("Código de segurança:\n");
  __fpurge(stdin);
  gets(cv);
  printf("Data de pagamento\n");
  __fpurge(stdin);
  gets(dataPagamento);
  printf("Para confirmar o pagamento, digite (c)\n");
  __fpurge(stdin);
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("Por favor, acesse o link a seguir e apresente-o na clínica: \n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
    __fpurge(stdin);
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
  else
  {
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
}
void prePagamentoConsultaOdontologica()
{
  char control = 0;
  int numCartao[15];
  char nome[60];
  char dataValidade[8];
  char dataPagamento[8];
  int cv[3];
  char c;
  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Aceitamos: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  __fpurge(stdin);
  gets(numCartao);
  printf("Nome no cartão:\n");
  __fpurge(stdin);
  gets(nome);
  printf("Data de validade:\n");
  __fpurge(stdin);
  gets(dataValidade);
  printf("Código de segurança:\n");
  __fpurge(stdin);
  gets(cv);
  printf("Data de pagamento\n");
  __fpurge(stdin);
  gets(dataPagamento);
   printf("Para confirmar o pagamento, digite (c)\n");
  __fpurge(stdin);
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("Por favor, acesse o link a seguir e apresente-o na clínica: \n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
    __fpurge(stdin);
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
  else
  {
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
}
void posPagamento()
{
  char control = 0;
  printf("Olá, tudo bem? Quero te informar que o pós-pagamento tem 1% de juros.\n");
  printf("Por favor, escolha uma opção:\n");
  printf("[1] - Consulta médica\n");
  printf("[2] - Consulta odontológica\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      posPagamentoConsultaMedica();
      break;
    case '2':
      posPagamentoConsultaOdontologica();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida\n");
  return posPagamento();
}
void posPagamentoConsultaMedica()
{
  char control = 0;
  int numCartao[15];
  char nome[60];
  char data[2];
  int cv[3];
  float valor = 50;
  int dia;
  char c;
  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Bandeiras: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  __fpurge(stdin);
  scanf("%id", &numCartao);
  printf("Nome no cartão:\n");
  __fpurge(stdin);
  gets(nome);
  printf("Data de validade:\n");
  __fpurge(stdin);
  gets(data);
  printf("Código de segurança:\n");
  __fpurge(stdin);
  scanf("%id", &cv);
  printf("Dia do pagamento:\n");
  __fpurge(stdin);
  scanf("%id", &dia);
  if (dia == 16)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.33);
  }
  else if (dia == 17)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.66);
  }
  else if (dia == 18)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.99);
  }
  else if (dia == 19)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 1.32);
  }
  else if (dia == 20)
  {
    printf("Por causa dos juros, o valor da sua conta é: R$%f\n", valor + 1.65);
  }
  else if (dia <= 15 && dia != 0)
  {
    printf("O valor final da consulta é: R$%2.f\n", valor);
  }
  else
  {
    printf("A data de pagamento está muito atrasada, por favor entre em contato conosco no número: (11)9123-4578\n");
  }
  printf("Para confirmar o pagamento, digite (c)\n");
  __fpurge(stdin);
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
    __fpurge(stdin);
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
  else
  {
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
}
void posPagamentoConsultaOdontologica()
{
  char control = 0;
  int numCartao[15];
  char nome[60];
  char data[2];
  int cv[3];
  float valor = 60;
  int dia;
  char c;
  printf("O valor da nossa consulta odontológica é de R$60,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Aceitamos: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  __fpurge(stdin);
  gets(numCartao);
  printf("Nome no cartão:\n");
  __fpurge(stdin);
  gets(nome);
  printf("Data de validade:\n");
  __fpurge(stdin);
  gets(data);
  printf("Código de segurança:\n");
  __fpurge(stdin);
  gets(cv);
  printf("Dia do pagamento:\n");
  __fpurge(stdin);
  scanf("\n%id", &dia);
  if (dia == 16)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.33);
  }
  else if (dia == 17)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.66);
  }
  else if (dia == 18)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.99);
  }
  else if (dia == 19)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 1.32);
  }
  else if (dia == 20)
  {
    printf("Por causa dos juros, o valor da sua conta é: R$%f\n", valor + 1.65);
  }
  else if (dia <= 15 && dia != 0)
  {
    printf("O valor final da consulta é: R$%f\n", valor);
  }
  else
  {
    printf("A data de pagamento está muito atrasada, por favor entre em contato conosco no número: (11)9123-4578\n");
  }
  printf("Para confirmar o pagamento, digite (c)\n");
  __fpurge(stdin);
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
    __fpurge(stdin);
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
  else
  {
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
}
void agendar()
{
  char control = 0;
  char nome[100];
  char sexo[1];
  char email[60];
  char cpf[13];
  char data[8];
  char horario[10];
  printf("Digite seu nome completo:\n");
  __fpurge(stdin);
  gets(nome);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  __fpurge(stdin);
  gets(sexo);
  printf("E-mail:\n");
  __fpurge(stdin);
  gets(email);
  printf("CPF:\n");
  __fpurge(stdin);
  gets(cpf);
  printf("-----AGENDE ABAIXO-----\n");
  printf("Data:");
  __fpurge(stdin);
  gets(data);
  printf("Horário:");
  __fpurge(stdin);
  gets(horario);
  printf("Sua consulta foi marcada para o dia: %s às %s\n", data, horario);
  printf("-----------------------------------\n");
  printf("Digite [1] para voltar ao menu\n");
  printf("Digite [2] para encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 2);
  printf("Por favor, escolha uma opção válida\n");
  return menuOuSaida();
}
void internacao()
{
  char control = 0;
  char nome[100];
  int idade[2];
  char motivo[200];
  char data[8];
  printf("Nome do paciente:\n");
  __fpurge(stdin);
  gets(nome);
  printf("Idade:\n");
  __fpurge(stdin);
  gets(idade);
  printf("Motivo:\n");
  __fpurge(stdin);
  gets(motivo);
  printf("Data da internação:\n");
  __fpurge(stdin);
  gets(data);
  printf("O paciente %s foi internado por motivo de: %s, na data de: %s", nome, motivo, data);
  printf("Digite [1] para voltar ao menu\n");
  printf("Digite [2] para encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 2);
  printf("Por favor, escolha uma opção válida\n");
  return menuOuSaida();
}
void cancelamento_de_consultas()
{
  char control = 0;
  char email[60];
  int senha[8];
  char data[8];
  printf("E-mail:\n");
  __fpurge(stdin);
  gets(email);
  printf("Senha:\n");
  __fpurge(stdin);
  gets(&senha);
  printf("Digite a data da consulta a ser cancelada:\n");
  __fpurge(stdin);
  gets(data);
  printf("Você tem certeza?\n");
  printf("Para confirmar digite [c]\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  if (control == 'c' || control == 'C')
  {
    printf("A consulta do dia %s foi cancelada\n", data);
    printf("-----------------------------------\n");
    printf("[1] - Voltar ao menu\n");
    printf("[2] - Encerrar o programa\n");
    __fpurge(stdin);
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
  else
  {
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
}
void reclamacao_elogio()
{
  printf("Deixe seu mensagem abaixo:\n");
  __fpurge(stdin);
  scanf("%s");
  printf("Sua mensagem foi enviada.\n");
  printf("Nós da NuVida te agradecemos por isso!\n");
  printf("-----------------------------------\n");
  return menuOuSaida();
}
void atestado()
{
  char data[8];
  char horario[8];
  char nome[100];
  printf("Digite seu nome completo:\n");
  __fpurge(stdin);
  gets(nome);
  printf("Digite a data da sua consulta:\n");
  __fpurge(stdin);
  gets(data);
  printf("Digite o horário da sua consulta:\n");
  __fpurge(stdin);
  gets(horario);
  printf("Paciente: %s  seu atestado foi gerado!\n", nome);
  printf("Por favor, acesse o link a seguir e o imprima: \n");
  printf("-----------------------------------\n");
  return menuOuSaida();
}
void relatorio()
{
  char control = 0;
  printf("Você está na área de relatórios agora\n");
  printf("[1] - Unidade Paraisopólis\n");
  printf("[2] - Unidade Morumbi\n");
  printf("[3] - Unidade Vila\n");
  printf("[4] - Todas unidades da rede NuVida\n");
  printf("[5] - Voltar ao menu\n");
  printf("[6] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      paraisopolis();
      break;
    case '2':
      morumbi();
      break;
    case '3':
      vila();
      break;
    case '4':
      totalRede();
      break;
    case '5':
      menu();
      break;
    case '6':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 6);
  printf("Por favor, escolha uma opção válida\n");
  return relatorio();
}
void paraisopolis()
{
  char control = 0;
  printf("Relatórios da Unidade Paraisopólis\n");
  printf("[1] - Faturamento diário\n");
  printf("[2] - Faturamento mensal\n");
  printf("[3] - Número de pacientes dessa unidade\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      faturamento_diario();
      break;
    case '2':
      faturamento_mensal();
      break;
    case '3':
      quantidadePacientesParaisopolis();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida\n");
  return paraisopolis();
}
void morumbi()
{
  char control = 0;
  printf("Relatórios da Unidade Morumbi\n");
  printf("[1] - Totalização do faturamento diário\n");
  printf("[2] - Totalização do faturamento mensal\n");
  printf("[3] - Número de pacientes dessa unidade\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      faturamento_diario();
      break;
    case '2':
      faturamento_mensal();
      break;
    case '3':
      quantidadePacientesMorumbi();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida\n");
  return morumbi();
}
void vila()
{
  char control = 0;
  printf("Relatórios da Unidade Vila\n");
  printf("[1] - Totalização do faturamento diário\n");
  printf("[2] - Totalização do faturamento mensal\n");
  printf("[3] - Número de pacientes dessa unidade\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      faturamento_diario();
      break;
    case '2':
      faturamento_mensal();
      break;
    case '3':
      quantidadePacientesVila();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida\n");
  return vila();
}
//para acessar faturamento tem senha (1010),(2020),(3535)
void faturamento_diario()
{
  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  int credencial = 0;
  printf("Por favor, digite sua credencial abaixo\n");
  scanf("%id",&credencial);
  if(credencial == 1010 ||credencial == 2020  || credencial == 3535){
  printf("Abaixo, digite a quantidade de serviços prestados hoje nesta unidade\n");
  printf("Digite o número de exames feitos hoje: ");
  __fpurge(stdin);
  scanf("%f", &ex);
  printf("Digite o número de consultas odontológicas feitas hoje: ");
  __fpurge(stdin);
  scanf("%f", &dent);
  printf("Digite o número de vacinas vendidas hoje: ");
  __fpurge(stdin);
  scanf("%f", &vac);
  printf("Digite o número de cirurgias feitas hoje: ");
  __fpurge(stdin);
  scanf("%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento diário de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento diário de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento diário de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento diário de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento diário da unidade: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
  printf("-----------------------------------\n");
  return menuOuSaida();
  }else {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOuSaida();
  }
}
void faturamento_mensal()
{
  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  int credencial = 0;
  printf("Por favor, digite sua credencial abaixo\n");
  scanf("%id",&credencial);
  if(credencial == 1010 ||credencial == 2020  || credencial == 3535){
  printf("Abaixo, digite a quantidade de serviços prestados no mês nesta unidade\n");
  printf("Digite o número de exames feitos no mês: ");
  __fpurge(stdin);
  scanf("%f", &ex);
  printf("Digite o número de consultas odontológicas feitas no mês: ");
  __fpurge(stdin);
  scanf("%f", &dent);
  printf("Digite o número de vacinas vendidas no mês: ");
  __fpurge(stdin);
  scanf("%f", &vac);
  printf("Digite o número de cirurgias feitas no mês: ");
  __fpurge(stdin);
  scanf("%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento mensal de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento mensal de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento mensal de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento mensal de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento mensal da unidade: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
  printf("-----------------------------------\n");
  return menuOuSaida();
  }else {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOuSaida();
  }
}
void faturamento_diarioRede()
{
  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  int credencial = 0;
  printf("Por favor, digite sua credencial abaixo\n");
  scanf("%id",&credencial);
  if(credencial == 1010 ||credencial == 2020  || credencial == 3535){
  printf("Abaixo, digite a quantidade de serviços prestados hoje em toda a rede\n");
  printf("Digite o número de exames feitos hoje: ");
  __fpurge(stdin);
  scanf("%f", &ex);
  printf("Digite o número de consultas odontológicas feitas hoje: ");
  __fpurge(stdin);
  scanf("%f", &dent);
  printf("Digite o número de vacinas vendidas hoje: ");
  __fpurge(stdin);
  scanf("%f", &vac);
  printf("Digite o número de cirurgias feitas hoje: ");
  __fpurge(stdin);
  scanf("%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento diário de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento diário de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento diário de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento diário de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento diário de toda a rede: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
  printf("-----------------------------------\n");
  return menuOuSaida();
  }else {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOuSaida();
  }
}
void faturamento_mensalRede()
{
  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  int credencial = 0;
  printf("Por favor, digite sua credencial abaixo\n");
  scanf("%id",&credencial);
  if(credencial == 1010 ||credencial == 2020  || credencial == 3535){
  printf("Abaixo, digite a quantidade de serviços prestados no mês em toda a rede\n");
  printf("Digite o número de exames feitos no mês: ");
  __fpurge(stdin);
  scanf("%f", &ex);
  printf("Digite o número de consultas odontológicas feitas no mês: ");
  __fpurge(stdin);
  scanf("%f", &dent);
  printf("Digite o número de vacinas vendidas no mês: ");
  __fpurge(stdin);
  scanf("%f", &vac);
  printf("Digite o número de cirurgias feitas no mês: ");
  __fpurge(stdin);
  scanf("%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento mensal de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento mensal de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento mensal de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento mensal de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento mensal da unidade: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
  printf("-----------------------------------\n");
  return menuOuSaida();
  }else {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOuSaida();
  }
}

//quantidade de pacientes para cada unidade é diferente
void quantidadePacientes()
{
  int paraisopolis = 5050;
  int morumbi = 1115;
  int vila = 956;
  int juntas = paraisopolis + morumbi + vila;
  printf("Calculando...\n");
  printf("Todas as clínicas da NuVida juntas somam: %i pacientes até o momento.\n", juntas);
}
void quantidadePacientesParaisopolis()
{
  printf("A unidade Paraisopólis tem 5050 pacientes\n");
  printf("Acesse o link a seguir para ver a lista de pacientes: \n");
}
void quantidadePacientesMorumbi()
{
  printf("A unidade Morumbi tem 1115 pacientes\n");
  printf("Acesse o link a seguir para ver a lista de pacientes: \n");
}
void quantidadePacientesVila()
{
  printf("A unidade Vila tem 956 pacientes\n");
  printf("Acesse o link a seguir para ver a lista de pacientes: \n");
}
void totalRede()
{
  char control = 0;
  printf("[1] - Faturamento diário da rede NuVida\n");
  printf("[2] - Faturamento mensal da rede NuVida\n");
  printf("[3] - Número de pacientes da rede\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      faturamento_diarioRede();
      break;
    case '2':
      faturamento_mensalRede();
      break;
    case '3':
      quantidadePacientes();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida\n");
}
void main()
{
  char control = 0;
  printf("-----BEM VINDO Á NUVIDA!-----\n");
  printf("Digite [1] se você é um paciente\n");
  printf("Digite [2] se você é um médico\n");
  printf("Digite [3] se você é um funcionário\n");
  __fpurge(stdin);
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      paciente();
      break;
    case '2':
      medico();
      break;
    case '3':
      funcionario();
    }
  } while (control > 0 & control <= 3);
  printf("Por favor, escolha uma opção válida\n");
  return menu();
}
void menuOuSaida(){
  char control = 0;
  printf("[1] - Voltar ao menu\n");
  printf("[2] - Encerrar o programa\n");
  __fpurge(stdin);
  scanf("\n%c",&control);
  do{
   switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
 }while (control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida\n");
    return menuOuSaida();
  }
