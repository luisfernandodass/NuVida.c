#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
  char control;
  printf("BEM VINDO Á NUVIDA!\n");
  printf("Digite (1) se você é um paciente\n");
  printf("Digite (2) se você é um médico\n");
  printf("Digite (3) se você é um funcionário\n");
  scanf("\n%c", &control);
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
}
void paciente()
{
  char control;
  printf("1 - Login\n");
  printf("2 - Cadastro\n");
  printf("3 - Elogio ou reclamação\n");
  scanf("\n%c", &control);
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
  }
}
void login_paciente()
{
  char control;
  char email[60];
  int senha[8];
  printf("E-mail:\n");
  scanf("%s", email);
  printf("Senha:\n");
  scanf("%id", senha);
  printf("Usuário: %s - Seja bem vindo à NuVida!\n", email);
  printf("1 - Atestado médico\n");
  printf("2 - Marcar consulta\n");
  printf("3 - Cancelar consulta\n");
  printf("4 - Realizar pagamento\n");
  scanf("\n%c", &control);
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
  }
}
void cadastro_paciente()
{
  char nome[100];
  char data[8];
  char sexo[1];
  char cpf[13];
  char tel[10];
  char endereco[60];
  char email[60];
  int senha[8];
  int juntas = 7121;
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
  scanf("%id", senha);
  printf("Você foi cadastro com sucesso!\n");
  juntas++;
  printf("Parabéns, seja bem vindo! Você é o paciente número: %i da rede\n", juntas);
  printf("Você será redirecionado para a página de login\n");
  login_paciente();
}
void pagamento()
{
  char control;
  printf("Olá, você está na área de pagamentos\n");
  printf("1 - Pré-pagamento\n");
  printf("2 - Pós-pagamento\n");
  scanf("\n%c", &control);
  switch (control)
  {
  case '1':
    prePagamento();
    break;
  case '2':
    posPagamento();
    break;
  }
}
void prePagamento()
{
  char control;
  printf("Olá, tudo bem? Quero te informar que o pré-pagamento não tem taxas ou juros.\n");
  printf("Por favor, escolha um serviço:\n");
  printf("1 - Consulta médica\n");
  printf("2 - Consulta odontológica\n");
  scanf("\n%c", control);
  switch (control)
  {
  case '1':
    prePagamentoConsultaMedica();
    break;
  case '2':
    prePagamentoConsultaOdontologica();
    break;
  }
}
void prePagamentoConsultaMedica()
{
  int cartao[15];
  char nome[60];
  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Aceitamos: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("%id");
  printf("Nome no cartão:\n");
  gets(nome);
  printf("Data de validade:\n");
  scanf("%id");
  printf("Código de segurança:\n");
  scanf("%id");
}
void prePagamentoConsultaOdontologica()
{
  int cartao[15];
  char nome[60];
  printf("O valor da nossa consulta odontológica é de R$60,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Bandeiras: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("%id");
  printf("Nome no cartão:\n");
  gets(nome);
  printf("Data de validade:\n");
  scanf("%id");
  printf("Código de segurança:\n");
  scanf("%id");
}
void posPagamento()
{
  char control;
  printf("Olá, tudo bem? Quero te informar que o pós-pagamento tem 1% de juros.\n");
  printf("Por favor, escolha um serviço:\n");
  printf("1 - Consulta médica\n");
  printf("2 - Consulta odontológica\n");
  scanf("\n%c", &control);
  switch (control)
  {
  case '1':
    posPagamentoConsultaMedica();
    break;
  case '2':
    posPagamentoConsultaOdontologica();
    break;
  }
}
void posPagamentoConsultaMedica()
{
  char control;
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
  scanf("%id", numCartao);
  printf("Nome no cartão:\n");
  gets(nome);
  printf("Data de validade:\n");
  gets(data);
  printf("Código de segurança:\n");
  scanf("%id", cv);
  printf("Dia do pagamento:\n");
  scanf("\n%id", &dia);
  if (dia == 16)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.33);
  }
  if (dia == 17)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.66);
  }
  if (dia == 18)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.99);
  }
  if (dia == 19)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 1.32);
  }
  if (dia == 20)
  {
    printf("Por causa dos juros, o valor da sua conta é: R$%f\n", valor + 1.65);
  }
  if (dia <= 15)
  {
    printf("O valor final da consulta é: R$%1.f\n", valor);
  }
  printf("Para confirmar o pagamento, digite (c)\n");
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("Por favor, acesse o link a seguir e apresente-o na clínica: \n");
    
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
    scanf("\n%c",control);
    switch (control){
      case'1':
         main();
         break;
    }
  }
}
void posPagamentoConsultaOdontologica()
{
  char control;
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
  scanf("$id", numCartao);
  printf("Nome no cartão:\n");
  gets(nome);
  printf("Data de validade:\n");
  scanf("%id", data);
  printf("Código de segurança:\n");
  scanf("%id", cv);
  printf("Dia do pagamento:\n");
  scanf("\n%id", &dia);
  if (dia == 16)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.33);
  }
  if (dia == 17)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.66);
  }
  if (dia == 18)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 0.99);
  }
  if (dia == 19)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", valor + 1.32);
  }
  if (dia == 20)
  {
    printf("Por causa dos juros, o valor da sua consulta é:R$%f\n", valor + 1.65);
  }
  if (dia <= 15)
  {
    printf("O valor final da consulta é: R$%1.f\n", valor);
  }
  printf("Para confirmar o pagamento, digite (c)\n");
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
    ;
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("Por favor, acesse o link a seguir e apresente-o na clínica: \n");

    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
    scanf("\n%c",control);
    switch (control){
      case'1':
         main();
         break;
    }
  }
}
void medico()
{
  char control;
  printf("1 - Login\n");
  printf("2 - Cadastro\n");
  scanf("\n%c", &control);
  switch (control)
  {
  case '1':
    login_medico();
    break;
  case '2':
    cadastro_medico();
    break;
  }
}
void login_medico()
{
  char control;
  char email[60];
  int senha[8];
  printf("E-mail:\n");
  gets("%s", email);
  printf("Senha:\n");
  scanf("%id", senha);
  printf("Usuário: %s - Seja bem vindo à NuVida!\n", email);
  printf("1 - atestado médico\n");
  printf("2 - marcar consulta\n");
  printf("3 - cancelar consulta\n");
  printf("4 - registrar internação\n");
  printf("5 - relatórios\n");
  scanf("\n%c", &control);
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
  }
}
void cadastro_medico()
{
  char nome[100];
  char cpf[13];
  char data[8];
  char sexo[1];
  char tel[10];
  char endereco[60];
  char email[60];
  int senha[8];
  printf("Nome:\n");
  gets("%s", nome);
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
  scanf("%id", senha);
  printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");
  login_medico();
}
void funcionario()
{
  char control;
  printf("1 - Login\n");
  printf("2 - Cadastro\n");
  scanf("\n%c", &control);
  switch (control)
  {
  case '1':
    login_funcionario();
    break;
  case '2':
    cadastro_funcionario();
    break;
  }
}
void login_funcionario()
{
  char control;
  char email[60];
  int senha[8];
  printf("E-mail:\n");
  gets(email);
  printf("Senha:\n");
  scanf("%id", senha);
  printf("Usuário: %s - Seja bem vindo à NuVida!\n", email);
  printf("1 - Marcar consulta\n");
  printf("2 - Mancelar consulta\n");
  printf("3 - Relatórios\n");
  scanf("\n%c", &control);
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
  }
}
void cadastro_funcionario()
{
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
  scanf("%id", senha);
  printf("Você foi cadastro com sucesso e será redirecionado a página de login!\n");
  login_funcionario();
}
void internacao()
{
  char control;
  char nome[100];
  int idade[2];
  char motivo[200];
  char data[8];
  printf("Nome do paciente:\n");
  gets(nome);
  printf("Idade:\n");
  scanf("%id", idade);
  printf("Motivo:\n");
  gets(motivo);
  printf("Data da internação:\n");
  gets(data);
  printf("O paciente %s foi internado por motivo de: %s, na data de: %s", nome, motivo, data);

  printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
    scanf("\n%c",control);
    switch (control){
      case'1':
         main();
         break;
    }
}
void agendar()
{
  char control;
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
  printf("Sua consulta foi marcada para o dia: %s às %s\n", data, horario);  

    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
    scanf("\n%c",control);
    switch (control){
      case'1':
         main();
         break;
    }
}
void cancelamento_de_consultas()
{
  char control;
  char email[60];
  int senha[8];
  char data[8];
  printf("E-mail:\n");
  gets(email);
  printf("Senha:\n");
  scanf("%id", senha);
  printf("Digite a data da consulta a ser cancelada:");
  gets(data);
  printf("Você tem certeza?\n");
  printf("Para confirmar digite [c]\n");
  scanf("\n%c", &control);
  if (control == 'c' || control == 'C')
  {
    printf("A consulta do dia %s foi cancelada\n", data);

    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");
    scanf("\n%c",control);
    switch (control){
      case'1':
         main();
         break;
    }
 
  }else{
    printf("ERROR! Você será redirecionado para a aréa de cancelamento\n");
    cancelamento_de_consultas();
  }
}
void reclamacao_elogio()
{
  printf("Deixe seu mensagem abaixo:\n");
  scanf("%s");
  printf("Sua mensagem foi enviada.\n");
  printf("Nós da NuVida te agradecemos por isso!\n");
}
void atestado()
{
  char data[8];
  char horario[8];
  char nome[100];
  printf("Digite seu nome completo:\n");
  gets(nome);
  printf("Digite a data da sua consulta:\n");
  gets(data);
  printf("Digite o horário da sua consulta:\n");
  gets(horario);
  printf("Paciente: %s  seu atestado foi gerado!\n", nome);
  printf("Por favor, acesse o link a seguir e o imprima: \n");
}
void relatorio()
{
  char control;

  printf("Você está na área de relatórios agora\n");
  printf("1 - Unidade Paraisopólis\n");
  printf("2 - Unidade Morumbi\n");
  printf("3 - Unidade Vila\n");
  printf("4 - Todas unidades da rede NuVida\n");
  scanf("\n%c", &control);
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
  }
}
void paraisopolis()
{
  char control;
  printf("Relatórios da Unidade Paraisopólis\n");
  printf("1 - Faturamento diário\n");
  printf("2 - Faturamento mensal\n");
  printf("3 - Número de pacientes dessa unidade\n");
  scanf("\n%c", &control);
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
  }
}
void morumbi()
{
  char control;
  printf("Relatórios da Unidade Morumbi\n");
  printf("1 - totalização do faturamento diário\n");
  printf("2 - totalização do faturamento mensal\n");
  printf("3 - número de pacientes dessa unidade\n");
  scanf("\n%c", &control);
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
  }
}
void vila()
{
  char control;
  printf("Relatórios da Unidade Vila\n");
  printf("1 - totalização do faturamento diário\n");
  printf("2 - totalização do faturamento mensal\n");
  printf("3 - número de pacientes dessa unidade\n");
  scanf("\n%c", &control);
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
  }
}
void faturamento_diario()
{
  float ex;
  float dent;
  float vac;
  float cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  printf("Digite o número de exames feitos hoje: ");
  scanf("%f", &ex);
  printf("Digite o número de consultas odontológicas feitas hoje: ");
  scanf("%f", &dent);
  printf("Digite o número de vacinas vendidas hoje: ");
  scanf("%f", &vac);
  printf("Digite o número de cirurgias feitas hoje: ");
  scanf("%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento diário de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento diário de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento diário de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento diário de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento diário da unidade: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
}
void faturamento_mensal()
{
  float ex;
  float dent;
  float vac;
  float cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  printf("Abaixo, digite a quantidade de serviços prestados no mês\n");
  printf("Digite o número de exames mensais realizados: ");
  scanf("%f", &ex);
  printf("Digite o número de consultas odontológicas mensais realizadas: ");
  scanf("%f", &dent);
  printf("Digite o número de vacinas mensais vendidas: ");
  scanf("%f", &vac);
  printf("Digite o número de cirurgias mensais realizadas: ");
  scanf("%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento mensal de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento mensal de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento mensal de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento mensal de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento mensal da unidade: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
}
void faturamento_diarioRede()
{
  float ex;
  float dent;
  float vac;
  float cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  printf("Abaixo, digite a quantidade de serviços prestados no mês\n");
  printf("Digite o número de exames mensais realizados: ");
  scanf("%f", &ex);
  printf("Digite o número de consultas odontológicas mensais realizadas: ");
  scanf("%f", &dent);
  printf("Digite o número de vacinas mensais vendidas: ");
  scanf("%f", &vac);
  printf("Digite o número de cirurgias mensais realizadas: ");
  scanf("%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento mensal de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento mensal de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento mensal de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento mensal de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("O faturamento diário de todas as clínicas da rede é: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
}
void faturamento_mensalRede()
{
  float ex;
  float dent;
  float vac;
  float cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  printf("Abaixo, digite a quantidade de serviços prestados no mês\n");
  printf("Digite o número de exames mensais realizados: ");
  scanf("%f", &ex);
  printf("Digite o número de consultas odontológicas mensais realizadas: ");
  scanf("%f", &dent);
  printf("Digite o número de vacinas mensais vendidas: ");
  scanf("%f", &vac);
  printf("Digite o número de cirurgias mensais realizadas: ");
  scanf("%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento mensal de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento mensal de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento mensal de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento mensal de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("O faturamento mensal de todas as clínicas da rede é: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
}
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
  char control;
  printf("1 - Faturamento diário da rede NuVida\n");
  printf("2 - Faturamento mensal da rede NuVida\n");
  printf("3 - Número de pacientes da rede\n");
  scanf("\n%c", &control);
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
  }
}
void encerrar(){
    char control;
    printf("O programa foi encerrado!");
    printf("Digite [1] para voltar ao menu\n");
    scanf("\n%c",control);
    switch (control){
      case'1':
         main();
         break;
    }
}