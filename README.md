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
	|―――― cbuild
```

## Sintaxe de Comando e Opções Disponíveis

Esta ferramenta tem seguinte sintaxe:

```Shell
./cbuild [OPÇÃO] [FUCIONALIDADES ADICIONAIS]
```

As opções disponíveis são apresentadas a seguir:

### build

```Shell
./cbuild build
```

Buscar e compilar os arquivos com sufixo .c no diretório *src/* junto com os cabeçalhos no diretório *include/*.Se a compilação foi bem sucedida, cbuild irá:

1. criar o diretório *build/* ;
2. criar o binário executável com o nome do diretório raiz;
3. registrar o resultado do comando em diretório *logs/*.

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

## Fucionalidades Adicionais

Você pode utilizar as funcionalidades adicionais usando seguintes argumentos.

* Modo verboso [-v]
* Modo debug [-d]

Também é possível entrar nos ambos os modos através de

```Shell
./cbuild [OPCÃO] -vd
```
ou
```Shell
./cbuild [OPCÃO] -v -d
```

## Erros Comuns

### Permission denied

É possível encontrar seguinte erro ao executar cbuild:

```Shell
bash: ./cbuild: Permission denied
```

Isso acontece pois cbuild não tem permissão de executável. Este problema pode ser resolvido com

```Shell
chmod +x cbuild
```

### Fatal error: src/*.c: No such file or directory

Existem diferentes causas desse error, normalmente quando script não encontrou arquivo fonte no diretorio *srcs/*. Porém, uma outro causa mais sútil é quando cbuild não está no diretório raiz do projeto.
