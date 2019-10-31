#ifndef FILALISTA_H
#define FILALISTA_H

typedef struct celula{
    int dado;
    struct celula *proximo; 
} celula;

celula *fila;
 int size = 0;

int cria_fila();
int enfileira(int x);
int desenfileira(int *pop);
int fila_cheia();
int fila_vazia();
int tamanho_fila();
void imprime_fila();

#endif