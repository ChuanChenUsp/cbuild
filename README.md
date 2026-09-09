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

<u>Opcões:</u>

* build
* run
* clean
* rebuild
* info

## Opções Disponíveis
