#include<stdio.h>
#include<stdlib.h>

#define S_LISTAVAZIA "Pilha está vazia.\n"

typedef struct no{
    int dado;
    struct no *prox;
    } *tipopilha;

//struct no{
//    int dado;
//    struct no *prox;
//    };
//typedef struct no*tipopilha;


void init(tipopilha *topo){
    *topo = NULL;
}

void push(tipopilha *topo, int elem){
    tipopilha novo;
    novo = (tipopilha) malloc (sizeof(struct no));
    if(novo != NULL ){
        novo->dado = elem;
        novo->prox = *topo;
        *topo = novo;
    }else{
        printf(S_LISTAVAZIA);
    }
}

/* recebe o endereço de memoria do ponteiro e testa o endereço*/
int isEmpty(tipopilha topo){
    // NULL é equivalente ao ponteiro do endereço zero da memória.
    return (topo==NULL);
    //0 = false
    //1 = true
}

int pop(tipopilha *topo, int *elem){
    tipopilha aux;
    if(!isEmpty(*topo)){
        aux = *topo;
        *elem = aux->dado;
        *topo = aux->prox;
        free(aux);
        return 1;
    }else{
        printf(S_LISTAVAZIA);
        return 0;
    }
}

int top(tipopilha *topo, int *elem){
    if(!isEmpty(*topo)){
        *elem = (*topo)->dado;
        return 1;
    }else{
        printf(S_LISTAVAZIA);
        return 0;
    }
}
int topA(tipopilha topo, int *elem){
    if(!isEmpty(topo)){
        *elem = topo->dado;
        return 1;
    }else{
        printf(S_LISTAVAZIA);
        return 0;
    }
}
