# Ferramenta cbuild

Esta ferramenta automatiza tarefas de compilação, execução, limpeza, geração de logs e obtenção de estatísticas do projeto em linguagem **C**.

## Pré-Requisito de Uso

Para o melhor funcionamento desta ferramenta, o projeto de **C** deve ter seguinte formato barebone:

```
  meu_projeto/
 	|――――src/
 		|―――― main.c
 		|―――― ...
     |―――― include/
 		|―――― algum_cabeçalho.h
 		|―――― ...
```

## Sintaxe de Comando e Opções Disponíveis
Esta ferramenta tem seguinte sintaxe: 
```Shell
./cbuild [OPÇÃO]
```
As opções disponíveis são apresentadas a seguir:  

### build

```Shell
./cbuild build
```

Buscar e compilar os arquivos com sufixo .c no diretório *src/* junto com os cabeçalhos no diretório *include/*.Se a compilação foi bem sucedida, cbuild irá:

1. criar o diretório *build/* ;
2. criar o binário executável com o nome do diretório raiz;

<!-- Falta implementar -->

3. registrar o resultado do comando em diretório *logs/*.

<!-- Falta implementar -->

Caso contrário, cbuild irá:

1. Escrever o mensagem de erro.
2. registrar o resultado do comando em diretório *logs/*.

### run

```Shell
./cbuild run
```

Buscar e executar o binário executável dentro do diretório. Caso não encontrar o executável, escrever o mensagem de erro.

### clean

```Shell
./cbuild clean
```

Remover todos os arquivos do diretório *build/*

<!-- Falta considerar o caso em que build/ não existe -->

### rebuild

```Shell
./cbuild rebuild
```

Limpa e Recompila o projeto. Na prática, realiza um comando ./cbuild clean sucedido pelo um ./cbuild build.

### info



```Shell
./cbuild info
```
Exibe um relatório detalhado sobre o estado atual do projeto, quantidade e tamanho de arquivos. Note que ./cbuild info atua sem modificar ou apagar nenhum arquivo.
