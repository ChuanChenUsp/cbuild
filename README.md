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

## Forma de Execução e Sintaxe de Comando

```Shell
./cbuild [OPÇÃO]
```

### Opções Disponíveis

##### build
```Shell
./cbuild build
```
Buscar e compilar os arquivos com sufixo .c no diretório *src/* junto com os cabeçalhos no diretório *include/*.  
Se a compilação foi bem sucedida, cbuild irá:
1. criar o diretório *build/* ;
2. criar o binário executável com o nome do diretório raiz;
<!-- Falta implementar -->
3. registrar o resultado do comando em diretório *logs/*.
<!-- Falta implementar -->
Caso contrário, cbuild irá:
1. Escrever o mensagem de erro.
2. registrar o resultado do comando em diretório *logs/*.

##### run
```Shell
./cbuild run
```
Buscar e executar o binário executável dentro do diretório. Caso não encontrar o executável, escrever o mensagem de erro.

##### clean
```Shell
./cbuild clean
```
Remover todos os arquivos do diretório *build/*
<!-- Falta considerar o caso em que build/ não existe -->

##### rebuild
```Shell
./cbuild rebuild
```
Recompilar o projeto. Na prática, realiza um clean sucedido pelo um build.

##### info
```Shell
./cbuild info
```
