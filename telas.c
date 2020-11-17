#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu()
{
  return main();
}
int paciente(void)
{
  char control = 0;
  printf("[1] - Login\n");
  printf("[2] - Cadastro\n");
  printf("[3] - Elogio ou reclamação\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");
  return paciente();
}
int login_paciente(void)
{
  char control = 0;
  char nome[100];
  char email[100];
  int senha[8];
  printf("Primeiro nome:\n");
  __fpurge(stdin);
  scanf("%s", nome);
  printf("E-mail:\n");
  scanf("\n%s", email);
  printf("Senha:\n");
  scanf("\n%id", senha);
  printf("Paciente: %s - Seja bem vindo à NuVida!\n", nome);
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
  printf("Por favor, escolha uma opção válida!\n");
  return login_paciente();
}
int cadastro_paciente(void)
{
  char url[] = "cadastroPaciente.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  struct signUp
  {
    char nome[110];
    char data[10];
    char sexo[2];
    char cpf[15];
    char tel[13];
    char endereco[210];
    char alergia[45];
    char plano[20];
    char email[110];
    int senha[8];
  };

  struct signUp paciente;

  int juntas = 7121;
  printf("Nome:\n");
  __fpurge(stdin);
  scanf("%[^\n]", paciente.nome, 100, stdin);
  fprintf(file, paciente.nome);
  printf("Data de nascimento:\n");
  scanf("%s", paciente.data, 8, stdin);
  fprintf(file, paciente.data);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  scanf("%s", paciente.sexo, 2, stdin);
  fprintf(file, paciente.sexo);
  printf("CPF:\n");
  scanf("%s", paciente.cpf, 13, stdin);
  fprintf(file, paciente.cpf);
  printf("Telefone:\n");
  scanf("%s", paciente.tel, 10, stdin);
  fprintf(file, paciente.tel);
  printf("Endereço:\n");
  __fpurge(stdin);
  scanf("%[^\n]", paciente.endereco, 200, stdin);
  fprintf(file, paciente.endereco);
  printf("Você possui alguma alergia? Se sim, quais? Se não, não preencha\n");
  __fpurge(stdin);
  scanf("%[^\n]", paciente.alergia, 40, stdin);
  fprintf(file, paciente.alergia);
  printf("Qual seu plano de saúde? Se não tiver, não preencha\n");
  __fpurge(stdin);
  scanf("%[^\n]", paciente.plano, 18, stdin);
  fprintf(file, paciente.plano);
  printf("E-mail:\n");
  scanf("%s", paciente.email, 100, stdin);
  fprintf(file, paciente.email);
  printf("Crie uma senha:\n");
  scanf("%id", paciente.senha, 10, stdin);
  fprintf(file, paciente.senha);
  printf("Você foi cadastro com sucesso!\n");
  juntas++;
  printf("Parabéns, seja bem vindo! Você é o paciente número: %i da rede\n", juntas);
  fprintf(file, "Paciente número: %i da rede\n", juntas);
  printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");

  fclose(file);
  return login_paciente();
}
int medico(void)
{
  char control = 0;
  printf("[1] - Login\n");
  printf("[2] - Cadastro\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");
  return medico();
}
int login_medico(void)
{
  char control = 0;
  char nome[100];
  char email[100];
  int senha[8];
  printf("Primeiro nome:\n");
  __fpurge(stdin);
  scanf("%s", nome);
  printf("E-mail:\n");
  scanf("\n%s", email);
  printf("Senha:\n");
  scanf("\n%id", senha);
  printf("Médico: %s - Seja bem vindo à NuVida!\n", nome);
  printf("-----------------------------------\n");
  printf("[1] - Atestado médico\n");
  printf("[2] - Registrar internação\n");
  printf("[3] - Registrar receita\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
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
      internacao();
      break;
    case '3':
      receitaMedicamento();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!\n");
  return login_medico();
}
int cadastro_medico(void)
{
  char url[] = "cadastroMedico.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  struct signUp
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

  struct signUp medico;

  printf("Nome:\n");
  __fpurge(stdin);
  scanf("%[^\n]", medico.nome, 100, stdin);
  fprintf(file, medico.nome);
  printf("Data de nascimento:\n");
  scanf("%s", medico.data, 8, stdin);
  fprintf(file, medico.data);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  scanf("%s", medico.sexo, 2, stdin);
  fprintf(file, medico.sexo);
  printf("CPF:\n");
  scanf("%s", medico.cpf, 13, stdin);
  fprintf(file, medico.cpf);
  printf("Telefone:\n");
  scanf("%s", medico.tel, 10, stdin);
  fprintf(file, medico.tel);
  printf("Endereço:\n");
  __fpurge(stdin);
  scanf("%[^\n]", medico.endereco, 100, stdin);
  fprintf(file, medico.endereco);
  printf("E-mail:\n");
  scanf("%s", medico.email, 100, stdin);
  fprintf(file, medico.email);
  printf("Crie uma senha:\n");
  scanf("%id", medico.senha, 10, stdin);
  fprintf(file, medico.senha);
  printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");

  fclose(file);
  return login_medico();
}
int funcionario(void)
{
  char control = 0;
  printf("[1] - Login\n");
  printf("[2] - Cadastro\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");
  return funcionario();
}
int login_funcionario(void)
{
  char control = 0;
  char nome[100];
  char email[100];
  int senha[8];
  printf("Primeiro nome:\n");
  __fpurge(stdin);
  scanf("%s", nome);
  printf("E-mail:\n");
  scanf("\n%s", email);
  printf("Senha:\n");
  scanf("\n%id", senha);
  printf("Funcionário: %s - Seja bem vindo à NuVida!\n", nome);
  printf("-----------------------------------\n");
  printf("[1] - Marcar consulta\n");
  printf("[2] - Cancelar consulta\n");
  printf("[3] - Relatórios\n");
  printf("[4] - Voltar ao menu\n");
  __fpurge(stdin);
  printf("[5] - Encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");
  return login_funcionario();
}
int cadastro_funcionario(void)
{
  char url[] = "cadastroFuncionario.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  struct signUp
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

  struct signUp funcionario;

  printf("Nome:\n");
  __fpurge(stdin);
  scanf("%[^\n]", funcionario.nome, 100, stdin);
  fprintf(file, funcionario.nome);
  printf("Data de nascimento:\n");
  scanf("%s", funcionario.data, 8, stdin);
  fprintf(file, funcionario.data);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  scanf("%s", funcionario.sexo, 2, stdin);
  fprintf(file, funcionario.sexo);
  printf("CPF:\n");
  scanf("%s", funcionario.cpf, 13, stdin);
  fprintf(file, funcionario.cpf);
  printf("Telefone:\n");
  scanf("%s", funcionario.tel, 10, stdin);
  fprintf(file, funcionario.tel);
  printf("Endereço:\n");
  __fpurge(stdin);
  scanf("%[^\n]", funcionario.endereco, 100, stdin);
  fprintf(file, funcionario.endereco);
  printf("E-mail:\n");
  scanf("%s", funcionario.email, 100, stdin);
  fprintf(file, funcionario.email);
  printf("Crie uma senha:\n");
  scanf("%id", funcionario.senha, 10, stdin);
  fprintf(file, funcionario.senha);
  printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");
  printf("-----------------------------------\n");

  fclose(file);
  return login_funcionario();
}
int pagamento(void)
{
  char control = 0;
  printf("Olá, você está na área de pagamentos\n");
  printf("[1] - Pré-pagamento\n");
  printf("[2] - Pós-pagamento\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");
  return pagamento();
}
int prePagamento(void)
{
  char control = 0;
  printf("Olá, tudo bem? Quero te informar que o pré-pagamento não tem taxas ou juros.\n");
  printf("Por favor, escolha uma opção:\n");
  printf("[1] - Consulta médica\n");
  printf("[2] - Consulta odontológica\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");
  return prePagamento();
}
char *findLastDigits(char digits[])
{
  char *pnumber;
  int i = 0;
  while (digits[i] != '-')
  {
    i++;
  }
  i++;
  pnumber = &digits[i];
  return pnumber;
}

//pagamentos
int prePagamentoConsultaMedica(void)
{
  char url[] = "prePagamentoConsultaMedica.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char control = 0;
  char card[15];
  char nome[100];
  char dataValidade[8];
  char dataPagamento[8];
  int cv[3];
  char *p;
  char c, s;

  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Aceitamos: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("\n%s", card);
  fprintf(file, card);
  printf("Nome no cartão:\n");
  scanf("\n%s", nome);
  fprintf(file, nome);
  printf("Data de validade:\n");
  scanf("\n%s", dataValidade);
  fprintf(file, dataValidade);
  printf("Código de segurança:\n");
  scanf("\n%id", cv);
  fprintf(file, cv);
  printf("Data de pagamento\n");
  scanf("\n%s", dataPagamento);
  fprintf(file, dataPagamento);
  p = findLastDigits(card);
  printf("O ultimo digito do seu cpf é %s ?\n", p);
  printf("Se sim, digite (s)\n");
  scanf("\n%c", &s);
  if (s == 's' || s == 'S')
  {
    printf("Para confirmar o pagamento, digite (c)\n");
    scanf("\n%c", &c);
    if (c == 'c' || c == 'C')
    {
      printf("Seu pagamento foi aprovado!\n");
      printf("Por favor, acesse o link a seguir e apresente-o na clínica: \n");
      printf("-----------------------------------\n");
      printf("Digite [1] para voltar ao menu\n");
      printf("Digite [2] para encerrar o programa\n");
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
      printf("Por favor, escolha uma opção válida!\n");
      return menuOrExit();
    }
  }
  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOrExit();
  }
  fclose(file);
}
int prePagamentoConsultaOdontologica(void)
{
  char url[] = "prePagamentoConsultaOdontologica.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char control = 0;
  char card[15];
  char nome[100];
  char dataValidade[8];
  char dataPagamento[8];
  int cv[3];
  char *p;
  char c, s;

  printf("O valor da nossa consulta odontológica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Aceitamos: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("\n%s", card);
  fprintf(file, card);
  printf("Nome no cartão:\n");
  scanf("\n%s", nome);
  fprintf(file, nome);
  printf("Data de validade:\n");
  scanf("\n%s", dataValidade);
  fprintf(file, dataValidade);
  printf("Código de segurança:\n");
  scanf("\n%id", cv);
  fprintf(file, cv);
  printf("Data de pagamento\n");
  scanf("\n%s", dataPagamento);
  fprintf(file, dataPagamento);
  p = findLastDigits(card);
  printf("O ultimo digito do seu cpf é %s ?\n", p);
  printf("Se sim, digite (s)\n");
  scanf("\n%c", &s);
  if (s == 's' || s == 'S')
  {
    printf("Para confirmar o pagamento, digite (c)\n");
    scanf("\n%c", &c);
    if (c == 'c' || c == 'C')
    {
      printf("Seu pagamento foi aprovado!\n");
      printf("Por favor, acesse o link a seguir e apresente-o na clínica: \n");
      printf("-----------------------------------\n");
      printf("Digite [1] para voltar ao menu\n");
      printf("Digite [2] para encerrar o programa\n");
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
      printf("Por favor, escolha uma opção válida!\n");
      return menuOrExit();
    }
  }
  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOrExit();
  }
  fclose(file);
}
int posPagamento(void)
{
  char control = 0;
  printf("Olá, tudo bem? Quero te informar que o pós-pagamento tem 1% de juros.\n");
  printf("Por favor, escolha uma opção:\n");
  printf("[1] - Consulta médica\n");
  printf("[2] - Consulta odontológica\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");
  return posPagamento();
}
int posPagamentoConsultaMedica(void)
{
  char url[] = "posPagamentoConsultaMedica.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char control = 0;
  char card[15];
  char name[100];
  char date[10];
  char cv[3];
  float price = 70;
  char paymonth = 0;
  char payday[2];
  char *p;
  char s, c;

  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Bandeiras: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("%s", card);
  fprintf(file, card);
  printf("Nome no cartão:\n");
  scanf("\n%s", name);
  fprintf(file, name);
  printf("Data de validade:\n");
  scanf("\n%s", date);
  fprintf(file, date);
  printf("Código de segurança:\n");
  scanf("\n%s", cv);
  fprintf(file, cv);
  printf("Mês do pagamento:\n");
  scanf("\n%c", &paymonth);

  printf("Dia do pagamento:\n");
  scanf("\n%s", &payday);
  fprintf(file, payday);
  p = findLastDigits(card);
  printf("O ultimo digito do seu cpf é %s ?\n", p);
  printf("Se sim, digite (s)\n");
  scanf("\n%c", &s);
  if (s == 's' || s == 'S')
  {
    do
    {
      switch (paymonth)
      {
      case '1':
        printf("Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 1 * 5);
        fprintf(file, "Por causa dos juro e do atrasos, o valor da sua consulta é: R$%2.f\n", price + 1 * 5);
        break;
      case '2':
        printf("Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 1,20 * 6);
        fprintf(file, "Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 1,20 * 6);
        break;
      case '3':
        printf("Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 2,40 * 12);
        fprintf(file, "Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 2,40 * 12);
        break;
      case '4':
        printf("Por causa dos juros e do atraso, o valor da consulta é: R$2.%f\n", price + 4,80 * 24);
        fprintf(file, "Por causa dos juros e do atraso, o valor da consulta é: R$2.%f\n", price + 4,80 * 24);
        break;
      case '5':
        printf("Por causa dos juros e do atraso, o valor da sua conta é: R$%2.f\n", price + 9,60 * 48);
        fprintf(file, "Por causa dos juros, o valor da sua consulta é: R$%2.f\n", price + 9, 60 * 48);
        break;
      case '6':
        printf("Por causa dos juros e do atraso, o valor da conta é: R$%2.f\n", price + 19,20 * 96);
        fprintf(file, "Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 19,20 * 96);
        break;
      case '0':
        printf("PAGO NO MÊS ATUAL, SEM JUROS OU MULTA.");
        printf("O valor final da consulta é: R$%2.f\n", price);
        fprintf(file, "O valor final da consulta é: R$%2.f\n", price);
        break;
      }
    } while (paymonth >= 0 & paymonth <= 6);
    printf("A data de pagamento está muito atrasada, por favor entre em contato conosco no número: (11)9123-4578\n");
  }
  printf("Para confirmar o pagamento, digite (c)\n");
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
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
    printf("Por favor, escolha uma opção válida!\n");
    return menuOrExit();
  }

  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOrExit();
  }
  fclose(file);
}
int posPagamentoConsultaOdontologica(void)
{
  char url[] = "posPagamentoConsultaOdontologica.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char control = 0;
  char card[15];
  char name[100];
  char date[10];
  char cv[3];
  float price = 60;
  char paymonth = 0;
  char payday[2];
  char *p;
  char s, c;

  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Bandeiras: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("%s", card);
  fprintf(file, card);
  printf("Nome no cartão:\n");
  scanf("\n%s", name);
  fprintf(file, name);
  printf("Data de validade:\n");
  scanf("\n%s", date);
  fprintf(file, date);
  printf("Código de segurança:\n");
  scanf("\n%s", cv);
  fprintf(file, cv);
  printf("Mês do pagamento:\n");
  scanf("\n%c", &paymonth);

  printf("Dia do pagamento:\n");
  scanf("\n%s", &payday);
  fprintf(file, payday);
  p = findLastDigits(card);
  printf("O ultimo digito do seu cpf é %s ?\n", p);
  printf("Se sim, digite (s)\n");
  scanf("\n%c", &s);
  if (s == 's' || s == 'S')
  {
    do
    {
      switch (paymonth)
      {
      case '1':
        printf("Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 1 * 5);
        fprintf(file, "Por causa dos juro e do atrasos, o valor da sua consulta é: R$%2.f\n", price + 1 * 5);
        break;
      case '2':
        printf("Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 1,20 * 6);
        fprintf(file, "Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 1,20 * 6);
        break;
      case '3':
        printf("Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 2,40 * 12);
        fprintf(file, "Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 2,40 * 12);
        break;
      case '4':
        printf("Por causa dos juros e do atraso, o valor da consulta é: R$2.%f\n", price + 4,80 * 24);
        fprintf(file, "Por causa dos juros e do atraso, o valor da consulta é: R$2.%f\n", price + 4,80 * 24);
        break;
      case '5':
        printf("Por causa dos juros e do atraso, o valor da sua conta é: R$%2.f\n", price + 9,60 * 48);
        fprintf(file, "Por causa dos juros, o valor da sua consulta é: R$%2.f\n", price + 9, 60 * 48);
        break;
      case '6':
        printf("Por causa dos juros e do atraso, o valor da conta é: R$%2.f\n", price + 19,20 * 96);
        fprintf(file, "Por causa dos juros e do atraso, o valor da consulta é: R$%2.f\n", price + 19,20 * 96);
        break;
      case '0':
        printf("PAGO NO MÊS ATUAL, SEM JUROS OU MULTA.");
        printf("O valor final da consulta é: R$%2.f\n", price);
        fprintf(file, "O valor final da consulta é: R$%2.f\n", price);
        break;
      }
    } while (paymonth >= 0 & paymonth <= 6);
    printf("A data de pagamento está muito atrasada, por favor entre em contato conosco no número: (11)9123-4578\n");
  }
  printf("Para confirmar o pagamento, digite (c)\n");
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
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
    printf("Por favor, escolha uma opção válida!\n");
    return menuOrExit();
  }

  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOrExit();
  }
  fclose(file);
}

int agendar(void)
{
  char url[] = "agendamento.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char control = 0;
  char nome[100];
  char sexo[1];
  char email[100];
  char cpf[13];
  char data[10];
  char horario[10];
  printf("Digite o nome completo:\n");
  scanf("\n%s", nome);
  fprintf(file, nome);
  printf("Qual o sexo? Digite (m) se masculino ou (f) se feminino\n");
  scanf("\n%s", sexo);
  fprintf(file, sexo);
  printf("E-mail:\n");
  scanf("\n%s", email);
  fprintf(file, email);
  printf("CPF:\n");
  scanf("\n%s", cpf);
  fprintf(file, cpf);
  printf("-----AGENDE ABAIXO-----\n");
  printf("Data:");
  scanf("\n%s", data);
  fprintf(file, data);
  printf("Horário:\n");
  scanf("\n%s", horario);
  fprintf(file, horario);
  printf("A consulta foi marcada para o dia: %s às %s\n", data, horario);
  fprintf(file, "Sua consulta foi marcada para o dia: %s às %s\n", data, horario);
  printf("-----------------------------------\n");
  printf("Digite [1] para voltar ao menu\n");
  printf("Digite [2] para encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");

  fclose(file);
  return menuOrExit();
}
int internacao(void)
{
  char url[] = "internacao.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char control = 0;
  char nome[100];
  int idade[2];
  char motivo[200];
  char data[8];
  printf("Nome do paciente:\n");
  __fpurge(stdin);
  scanf("%[^\n]", nome);
  fprintf(file, nome);
  printf("Idade:\n");
  scanf("\n%id", idade);
  fprintf(file, idade);
  printf("Motivo:\n");
  __fpurge(stdin);
  scanf("%[^\n]", motivo);
  fprintf(file, motivo);
  printf("Data da internação:\n");
  scanf("\n%s", data);
  fprintf(file, data);
  printf("O paciente %s foi internado por motivo de: %s, na data de: %s\n", nome, motivo, data);
  fprintf(file, "O paciente %s foi internado por motivo de: %s, na data de: %s\n", nome, motivo, data);
  printf("-----------------------------------\n");
  printf("Digite [1] para voltar ao menu\n");
  printf("Digite [2] para encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");

  fclose(file);
  return menuOrExit();
}
int cancelamento_de_consultas(void)
{
  char url[] = "cancelamentoConsulta.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char control = 0;
  char email[100];
  char senha[10];
  char data[10];
  printf("E-mail:\n");
  scanf("\n%s", email);
  fprintf(file, email);
  printf("Senha:\n");
  __fpurge(stdin);
  scanf("\n%s", senha);
  fprintf(file, senha);
  printf("Digite a data da consulta a ser cancelada:\n");
  scanf("\n%s", data);
  fprintf(file, data);

  printf("Você tem certeza?\n");
  printf("Para confirmar digite [c]\n");
  scanf("\n%c", &control);
  if (control == 'c' || control == 'C')
  {
    printf("A consulta do dia %s foi cancelada\n", data);
    fprintf(file, "A consulta do dia %s foi cancelada\n", data);
    printf("-----------------------------------\n");
    printf("[1] - Voltar ao menu\n");
    printf("[2] - Encerrar o programa\n");

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
    printf("Por favor, escolha uma opção válida!\n");
    return menuOrExit();
  }
  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOrExit();
  }
  fclose(file);
}
int reclamacao_elogio(void)
{
  char url[] = "reclamacaoElogio.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char mensagem[400];
  printf("Deixe seu mensagem abaixo:\n");
  scanf("\n%s", mensagem);
  fprintf(file, mensagem);
  printf("-----------------------------------\n");
  printf("Sua mensagem foi enviada.\n");
  printf("Nós da NuVida te agradecemos por isso!\n");
  printf("-----------------------------------\n");

  fclose(file);
  return menuOrExit();
}
int atestado(void)
{
  char url[] = "atestado.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char nome[100];
  char data[10];
  char horario[10];
  printf("Nome do paciente:\n");
  __fpurge(stdin);
  scanf("%[^\n]", nome);
  fprintf(file, nome);
  printf("Data da consulta:\n");
  scanf("%s", data);
  fprintf(file, data);
  printf("Horário da sua consulta:\n");
  scanf("%s", horario);
  fprintf(file, horario);
  printf("-----------------------------------\n");
  printf("Verificando... \n");
  printf("-----------------------------------\n");
  printf("O atestado do paciente: %s foi gerado!\n", nome);
  fprintf(file, "O atestado do paciente: %s foi gerado!\n", nome);
  printf("Por favor, acesse o link a seguir e o imprima: \n");
  printf("-----------------------------------\n");

  fclose(file);
  return menuOrExit();
}
int receitaMedicamento(void)
{
  char url[] = "receita.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  char medicamento[100];
  char dias[2];
  char vezes[15];
  printf("Por favor, médico, receite os medicamentos com nome, dias e horários\n");
  printf("-----------------------------------\n");
  printf("Medicamento:\n");
  scanf("%s", medicamento);
  fprintf(file, medicamento);
  printf("Quantidade de dias:\n");
  scanf("%s", dias);
  fprintf(file, dias);
  printf("Vezes por dia:\n");
  scanf("%s", vezes);
  fprintf(file, vezes);
  printf("-----------------------------------\n");
  printf("Paciente, você deve tomar o %s durante %s dias, %s vezes por dia.\n", medicamento, dias, vezes);
  printf("Siga a receita fielmente, passada sobre prescrição médica.\n");

  fclose(file);
  return menuOrExit();
}
int relatorio(void)
{
  char control = 0;
  printf("Você está na área de relatórios agora\n");
  printf("[1] - Unidade Paraisopólis\n");
  printf("[2] - Unidade Morumbi\n");
  printf("[3] - Unidade Vila Sônia\n");
  printf("[4] - Todas unidades da rede NuVida\n");
  printf("[5] - Voltar ao menu\n");
  printf("[6] - Encerrar o programa\n");
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
      vilaSonia();
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
  printf("Por favor, escolha uma opção válida!\n");
  return relatorio();
}
int paraisopolis(void)
{
  char control = 0;
  printf("Relatórios da Unidade Paraisopólis\n");
  printf("[1] - Faturamento diário\n");
  printf("[2] - Faturamento mensal\n");
  printf("[3] - Número de pacientes dessa unidade\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
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
      numeroDePacientesParaisopolis();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!\n");
  return paraisopolis();
}
int morumbi(void)
{
  char control = 0;
  printf("Relatórios da Unidade Morumbi\n");
  printf("[1] - Totalização do faturamento diário\n");
  printf("[2] - Totalização do faturamento mensal\n");
  printf("[3] - Número de pacientes dessa unidade\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
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
      numeroDePacientesMorumbi();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!\n");
  return morumbi();
}
int vilaSonia(void)
{
  char control = 0;
  printf("Relatórios da Unidade Vila Sônia\n");
  printf("[1] - Totalização do faturamento diário\n");
  printf("[2] - Totalização do faturamento mensal\n");
  printf("[3] - Número de pacientes dessa unidade\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
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
      numeroDePacientesVilaSonia();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!!\n");
  return vilaSonia();
}

//para acessar faturamento tem senha (1010),(2020),(3535)
int faturamento_diario(void)
{
  char url[] = "faturamentoDiarioUnidade.txt";

  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  int credencial = 0;

  printf("Por favor, digite sua credencial abaixo\n");
  scanf("\n%id", &credencial);

  if (credencial == 1010 || credencial == 2020 || credencial == 3535)
  {

    printf("Abaixo, digite a quantidade de serviços prestados hoje nesta unidade\n");
    printf("Digite o número de exames feitos hoje: ");
    scanf("\n%f", &ex);
    printf("Digite o número de consultas odontológicas feitas hoje: ");
    scanf("\n%f", &dent);
    printf("Digite o número de vacinas vendidas hoje: ");
    scanf("\n%f", &vac);
    printf("Digite o número de cirurgias feitas hoje: ");
    scanf("\n%f", &cirur);
    printf("Calculando...\n");
    printf("Faturamento diário de exames é: R$%1.f\n", ex * valEx);
    fprintf(file, "Faturamento diário de exames é: R$%1.f\n", ex * valEx);
    printf("Faturamento diário de odontologia é: R$%1.f\n", dent * valDent);
    fprintf(file, "Faturamento diário de odontologia é: R$%1.f\n", dent * valDent);
    printf("Faturamento diário de vacinas é: R$%1.f\n", vac * valVac);
    fprintf(file, "Faturamento diário de vacinas é: R$%1.f\n", vac * valVac);
    printf("Faturamento diário de cirurgias é: R$%1.f\n", cirur * valCirur);
    fprintf(file, "Faturamento diário de cirurgias é: R$%1.f\n", cirur * valCirur);
    printf("Faturamento diário da unidade é: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
    printf("-----------------------------------\n");

    fclose(file);
    return menuOrExit();
  }
  else
  {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOrExit();
  }
}
int faturamento_mensal(void)
{
  char url[] = "faturamentoMensalUnidade.txt";

  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  int credencial = 0;

  printf("Por favor, digite sua credencial abaixo\n");
  scanf("\n%id", &credencial);

  if (credencial == 1010 || credencial == 2020 || credencial == 3535)
  {

    printf("Abaixo, digite a quantidade de serviços prestados no mês nesta unidade\n");
    printf("Digite o número de exames feitos no mês: ");
    scanf("\n%f", &ex);
    printf("Digite o número de consultas odontológicas feitas no mês: ");
    scanf("\n%f", &dent);
    printf("Digite o número de vacinas vendidas no mês: ");
    scanf("\n%f", &vac);
    printf("Digite o número de cirurgias feitas no mês: ");
    scanf("\n%f", &cirur);
    printf("Calculando...\n");
    printf("Faturamento mensal de exames é: R$%1.f\n", ex * valEx);
    fprintf(file, "Faturamento mensal de exames é: R$%1.f\n", ex * valEx);
    printf("Faturamento mensal de odontologia é: R$%1.f\n", dent * valDent);
    fprintf(file, "Faturamento mensal de odontologia é: R$%1.f\n", dent * valDent);
    printf("Faturamento mensal de vacinas é: R$%1.f\n", vac * valVac);
    fprintf(file, "Faturamento mensal de vacinas é: R$%1.f\n", vac * valVac);
    printf("Faturamento mensal de cirurgias é: R$%1.f\n", cirur * valCirur);
    fprintf(file, "Faturamento mensal de cirurgias é: R$%1.f\n", cirur * valCirur);
    printf("Faturamento mensal da unidade é: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
    printf("-----------------------------------\n");

    fclose(file);
    return menuOrExit();
  }
  else
  {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOrExit();
  }
}
int faturamento_diarioRede(void)
{
  char url[] = "faturamentoDiarioRede.txt";

  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  int credencial = 0;

  printf("Por favor, digite sua credencial abaixo\n");
  scanf("\n%id", &credencial);

  if (credencial == 1010 || credencial == 2020 || credencial == 3535)
  {

    printf("Abaixo, digite a quantidade de serviços prestados hoje em toda a rede\n");
    printf("Digite o número de exames feitos hoje: ");
    scanf("\n%f", &ex);
    printf("Digite o número de consultas odontológicas feitas hoje: ");
    scanf("\n%f", &dent);
    printf("Digite o número de vacinas vendidas hoje: ");
    scanf("\n%f", &vac);
    printf("Digite o número de cirurgias feitas hoje: ");
    scanf("\n%f", &cirur);
    printf("Calculando...\n");
    printf("Faturamento diário de exames é: R$%1.f\n", ex * valEx);
    fprintf(file, "Faturamento diário de exames é: R$%1.f\n", ex * valEx);
    printf("Faturamento diário de odontologia é: R$%1.f\n", dent * valDent);
    fprintf(file, "Faturamento diário de odontologia é: R$%1.f\n", dent * valDent);
    printf("Faturamento diário de vacinas é: R$%1.f\n", vac * valVac);
    fprintf(file, "Faturamento diário de vacinas é: R$%1.f\n", vac * valVac);
    printf("Faturamento diário de cirurgias é: R$%1.f\n", cirur * valCirur);
    fprintf(file, "Faturamento diário de cirurgias é: R$%1.f\n", cirur * valCirur);
    printf("Faturamento diário de toda a rede é: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
    printf("-----------------------------------\n");

    fclose(file);
    return menuOrExit();
  }
  else
  {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOrExit();
  }
}
int faturamento_mensalRede(void)
{
  char url[] = "faturamentoMensalRede.txt";

  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  int credencial = 0;

  printf("Por favor, digite sua credencial abaixo\n");
  scanf("\n%id", &credencial);

  if (credencial == 1010 || credencial == 2020 || credencial == 3535)
  {

    printf("Abaixo, digite a quantidade de serviços prestados no mês em toda a rede\n");
    printf("Digite o número de exames feitos no mês: ");
    scanf("\n%f", &ex);
    printf("Digite o número de consultas odontológicas feitas no mês: ");
    scanf("\n%f", &dent);
    printf("Digite o número de vacinas vendidas no mês: ");
    scanf("\n%f", &vac);
    printf("Digite o número de cirurgias feitas no mês: ");
    scanf("\n%f", &cirur);
    printf("Calculando...\n");
    printf("Faturamento mensal de exames é: R$%1.f\n", ex * valEx);
    fprintf(file, "Faturamento mensal de exames é: R$%1.f\n", ex * valEx);
    printf("Faturamento mensal de odontologia é: R$%1.f\n", dent * valDent);
    printf("Faturamento mensal de odontologia é: R$%1.f\n", dent * valDent);
    printf("Faturamento mensal de vacinas é: R$%1.f\n", vac * valVac);
    fprintf(file, "Faturamento mensal de vacinas é: R$%1.f\n", vac * valVac);
    printf("Faturamento mensal de cirurgias é: R$%1.f\n", cirur * valCirur);
    fprintf(file, "Faturamento mensal de cirurgias é: R$%1.f\n", cirur * valCirur);
    printf("Faturamento mensal da Rede é: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
    printf("-----------------------------------\n");

    fclose(file);
    return menuOrExit();
  }
  else
  {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOrExit();
  }
}

//quantidade de pacientes para cada unidade é diferente
int numeroDePacientes(void)
{
  char url[] = "numeroDePacientesRede.txt";

  FILE *file;
  file = fopen(url, "w");

  if (file == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");

  int paraisopolis = 5050;
  int morumbi = 1115;
  int vilaSonia = 956;
  int juntas = paraisopolis + morumbi + vilaSonia;
  printf("Calculando...\n");
  fprintf(file, "Todas as clínicas da NuVida juntas somam: %i pacientes até o momento.\n", juntas);
  printf("Todas as clínicas da NuVida juntas somam: %i pacientes até o momento.\n", juntas);

  fclose(file);
  return menuOrExit();
}
int numeroDePacientesParaisopolis(void)
{
  printf("A unidade Paraisopólis tem 5050 pacientes\n");
  printf("Acesse o link a seguir para ver a lista de pacientes: \n");
  printf("-----------------------------------\n");
  return menuOrExit();
}
int numeroDePacientesMorumbi(void)
{
  printf("A unidade Morumbi tem 1115 pacientes\n");
  printf("Acesse o link a seguir para ver a lista de pacientes: \n");
  printf("-----------------------------------\n");
  return menuOrExit();
}
int numeroDePacientesVilaSonia(void)
{
  printf("A unidade Vila Sônia tem 956 pacientes\n");
  printf("Acesse o link a seguir para ver a lista de pacientes: \n");
  printf("-----------------------------------\n");
  return menuOrExit();
}
int totalRede(void)
{
  char control = 0;
  printf("[1] - Faturamento diário da rede NuVida\n");
  printf("[2] - Faturamento mensal da rede NuVida\n");
  printf("[3] - Número de pacientes da rede\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
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
      numeroDePacientes();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!\n");
  return totalRede();
}
int main(void)
{
  char control = 0;
  printf("-----BEM VINDO Á NUVIDA!-----\n");
  printf("Digite [1] se você é um paciente\n");
  printf("Digite [2] se você é um médico\n");
  printf("Digite [3] se você é um funcionário\n");
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
  printf("Por favor, escolha uma opção válida!\n");
  return menu();
}
int menuOrExit(void)
{
  char control = 0;
  printf("[1] - Voltar ao menu\n");
  printf("[2] - Encerrar o programa\n");
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
  printf("Por favor, escolha uma opção válida!\n");
  return menuOrExit();
}
