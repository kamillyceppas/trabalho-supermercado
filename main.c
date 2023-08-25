#include <stdio.h>
#include <string.h>

int main(void) {

//Kamilly Ceppas
  // Declaração de variáveis
  
 // Variáveis para controlar o menu
  int menu = 0;
  char resposta;

  // Variáveis para armazenar informações dos clientes
  char nomePesquisa[30];
  float valorTotal[3];
  char sexo[3];
  int comp = 0;
  int nomeIgual = 0;
  int a = 0;
  char nomes[3][30];
  char nome[30];
  int clienteSim = 0;
  int clienteNao = 0;
  float valorPesquisa = 0;

  // Variáveis para análise de compras
  int menoresValor = 0;
  int maioresValor = 0;
  int mulheres = 0;
  int homens = 0;
  float somaValores = 0;
  float media = 0;
  float maisBarata = 0;
  float totalHomens = 0;
  
  // Variáveis adicionais
  char retorno;
  float somaTotal = 0;

  // 1. Cadastro de clientes
  for (int i = 0; i < 3; i++) {
    printf("\nNome do cliente %d: ", i + 1);
    scanf("%s", nome);
    
// Verifica se o nome já foi usado
    for (int a = 0; a < i; a++) {
      if (strcmp(nomes[a], nome) == 0) {
        nomeIgual = 1;
      }
    }
// Garante que o nome seja único
    while (nomeIgual == 1) {
      printf("\nERRO! Nome repetido.\nDigite outro nome: ");
      scanf("%s", nome);
      nomeIgual = 0;
      for (int a = 0; a < i; a++) {
        if (strcmp(nomes[a], nome) == 0) {
          nomeIgual = 1;
        }
      }
    }

    // Armazena o nome único
    strcpy(nomes[i], nome);
    
  // Solicita e valida o sexo do cliente
    do {
      printf("Sexo do cliente %d: (m - Masculino | f - Feminino): ", i + 1);
      scanf(" %c", &sexo[i]);

      if (sexo[i] != 'm' && sexo[i] != 'f') {
        printf("ERROR | Sexo inválido cadastrado! Tente outra vez\n");
      }

    } while (sexo[i] != 'm' && sexo[i] != 'f');
    
  // Solicita e valida o valor da compra
    do {
      printf("Valor da compra do cliente %d: ", i + 1);
      scanf("%f", &valorTotal[i]);
      if (valorTotal[i] < 0) {
        printf("\nERROR | Valor negativo cadastrado! Tente outra vez\n");
      }

     
    } while (valorTotal[i] < 0);

      // Atualiza as contagens de gênero e valores
    
    if (sexo[i] == 'f' || sexo[i] == 'F') {
      mulheres++;
    } else if (sexo[i] == 'm' || sexo[i] == 'M') {
      homens++;
      totalHomens += valorTotal[i];
    }
    
 // Encontra a compra mais barata
    
    if (i == 0 || valorTotal[i] < maisBarata) {
      maisBarata = valorTotal[i];
    } 
    
    // Calcula o total das compras
     somaTotal += valorTotal[i];

     // Calcula a média das compras
    
      media = somaTotal / 3;
    printf("\n------------------------------------------------------");
    printf("\nInformações cadastradas com sucesso!\n");
    printf("------------------------------------------------------\n");
  }

  // 2. Menu principal
  do {
    printf("\n\n------------------------------------------------------");
    printf("\n----------------- DIGITE UMA OPÇÃO -------------------");
    printf("\n\n1- Ver informações de compras de um cliente específico");
    printf("\n2- Ver informações de todos os produtos cadastrados");
    printf("\n3- Encerrar o programa");
    printf("\n\nNúmero escolhido: ");
    scanf("%d", &menu);

    switch (menu) {
    case 1:
      printf("------------------------------------------------------");
      printf("\n------------------------------------------------------");
      printf("\n\nDigite o nome do cliente para consulta: ");
      scanf("%s", nomePesquisa);

      clienteSim = 0;
      clienteNao = 1;

          // Procura o cliente e exibe informações se encontrado

      for (int i = 0; i < 3; i++) {
        comp = strcmp(nomePesquisa, nomes[i]);
        if (comp == 0) {
          clienteSim = 1;
          clienteNao = 0;
          printf("\n\n------------------------------------------------------");
          printf("\n----------------- DADOS DO CLIENTE -------------------\n");
          printf("------------------------------------------------------\n");
          printf("\nNome pesquisado: %s ", nomes[i]);
          printf("\nValor da compra: R$%.2f\n", valorTotal[i]);
          printf("Sexo: %c\n", sexo[i]);

          break; // Não precisa continuar o loop se já encontrou o cliente
        }
      }
      
 // Se o cliente não for encontrado
      if (clienteNao == 1) {
        printf("\nNome não cadastrado no sistema.\n");
      }

      printf("\nDeseja voltar para o menu inicial? (s/n): ");
      scanf(" %c", &resposta);
      break;

    case 2:
      printf("------------------------------------------------------");
      printf("\n---------------- PRODUTOS CADASTRADOS ----------------\n");
      printf("------------------------------------------------------\n");
      printf("\n\nInforme o valor limite: ");
      scanf("%f", &valorPesquisa);

       // Calcula quantidades de compras abaixo e acima do valor limite
      
      for (int i = 0; i < 3; i++) {
  

        if (valorTotal[i] < valorPesquisa) {
          menoresValor++;
        }

        if (valorTotal[i] > valorPesquisa) {
          maioresValor++;
        }
      }

      printf("\n\n------------------------------------------------------");
      printf("\n---------------------- RESULTADOS --------------------\n");
      printf("------------------------------------------------------\n");
      printf("\n◆ Quantidade de compras abaixo de R$%.2f: %d\n", valorPesquisa,
             menoresValor);
      printf("\n◆ Quantidade de compras acima de R$%.2f: %d\n", valorPesquisa,
             maioresValor);
      printf("\n◆ Quantidade de compradoras mulheres: %d\n", mulheres);
      printf("\n◆ Valor total comprado pelos homens: %.2f\n", totalHomens);
      printf("\n◆ Valor total das compras: R$%.2f\n", somaTotal);
      printf("\n◆ Valor médio das compras: R$%.2f\n", media);
      printf("\n◆ Valor da compra mais barata: R$%.2f\n", maisBarata);

      printf("\n\nDeseja voltar para o menu inicial? (s/n): ");
      scanf(" %c", &resposta);
      break;

    case 3:
      printf("\n\n----------PROGRAMA ENCERRADO -------------\n\n");
      resposta = 'n'; // Encerra o programa
      break;

    default:
      printf("\n----------- ERROR | Digite um número válido -------\n");
      resposta = 's'; // Continua no menu
      break;
    }
  } while (resposta == 's' || resposta == 'S');

  // Quando sair do loop, verifica se o programa foi encerrado ou não
if(resposta=='n'){
  printf("\n\n--------- PROGRAMA ENCERRADO ------------");
}
  return 0;
}



