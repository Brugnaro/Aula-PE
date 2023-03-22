#include "Jogador.h"
#include <stdio.h>
#include <stdlib.h>

 void ImprimeJogador (Jogador jogador){
 int dados = jogador.jogos*1 + jogador.gols*7+ jogador.assist*3
 printf("jogador\n");
 printf("nome do jogador.: %s\n",jogador.nome);
 printf("nome do jogos.: %d\n",jogador.jogos);
 printf("quantidade de gols.: %d\n",jogador.gols);
printf("quantidade de assit.: %d\n",jogador.assit);
printf("Pontos.: %d",dados);
 }
 Jogador atribui (char *nome,int jogos,int gols,int assit){
Jogador jogador;
jogador.nome = nome;
jogador.jogos = jogos;
jogador.gols = gols;
jogador.assist = assit;
return jogador
