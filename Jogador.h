#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED
//definindo estrutura
typedef struct{
char *nome;
int jogos;
int gols;
int assist;
}Jogador

// atribui dados ao jogador
Jogador atribui (char *nome,int jogos,int gols,int assit);
//imprime dados
void ImprimeJogador(Jogador jogador);



#endif // JOGADOR_H_INCLUDED
