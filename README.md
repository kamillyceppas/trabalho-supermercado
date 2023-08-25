<!DOCTYPE html>
<html>
<head>
  <title>Trabalho - Supermercado</title>
</head>
<body>

<h2>Resumo do Código</h2>

<ul>
  <li><strong>Declaração de Variáveis:</strong>
    <ul>
      <li>Declaração das variáveis para controlar o menu, armazenar informações dos clientes e calcular estatísticas de compras.</li>
    </ul>
  </li>
  
  <li><strong>Cadastro de Clientes:</strong>
    <ul>
      <li>Loop que permite o cadastro de até três clientes.</li>
      <li>Solicita o nome do cliente, verifica se já existe e garante um nome único.</li>
      <li>Pede e valida o sexo do cliente (masculino ou feminino).</li>
      <li>Solicita e valida o valor da compra, calculando totais e estatísticas.</li>
    </ul>
  </li>
  
  <li><strong>Menu Principal:</strong>
    <ul>
      <li>Exibe um menu interativo com três opções.</li>
      <li>Opção 1: Permite pesquisar informações de um cliente específico.</li>
      <li>Opção 2: Analisa compras baseadas em um valor limite e exibe estatísticas.</li>
      <li>Opção 3: Encerra o programa.</li>
    </ul>
  </li>
  
  <li><strong>Opção 1 - Ver Informações do Cliente:</strong>
    <ul>
      <li>Solicita o nome de um cliente para consulta.</li>
      <li>Procura o cliente na base de dados e exibe suas informações se encontrado.</li>
      <li>Lida com casos em que o cliente não é encontrado.</li>
    </ul>
  </li>
  
  <li><strong>Opção 2 - Ver Informações de Produtos Cadastrados:</strong>
    <ul>
      <li>Solicita um valor limite para análise.</li>
      <li>Conta e exibe quantidades de compras abaixo e acima do limite.</li>
      <li>Exibe estatísticas como quantidade de compradoras mulheres, valor total comprado por homens, valor total das compras, média das compras e compra mais barata.</li>
    </ul>
  </li>
  
  <li><strong>Opção 3 - Encerrar o Programa:</strong>
    <ul>
      <li>Exibe mensagem de encerramento.</li>
      <li>Define a resposta como 'n', encerrando o loop principal.</li>
    </ul>
  </li>
  
  <li><strong>Loop Principal e Encerramento:</strong>
    <ul>
      <li>O loop principal mantém o programa em execução até que o usuário opte por sair.</li>
      <li>Exibe mensagem de encerramento caso a resposta seja 'n'.</li>
    </ul>
  </li>
  
  <li><strong>Retorno:</strong>
    <ul>
      <li>Retorna 0 para indicar que o programa foi executado com sucesso.</li>
    </ul>
  </li>
</ul>

</body>
</html>
