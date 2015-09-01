#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct no{
    int dado;
    struct no *prox;
    };

typedef struct no *tipopilha;

void init(tipopilha topo){
    topo = NULL;
}

void push(tipopilha *topo, int elem){
    tipopilha novo;
    novo = (tipopilha)malloc(sizeof(struct no));
    if(novo != NULL ){
        novo->dado = elem;
        novo->prox = *topo;
        *topo = novo;
    }else{
        printf("Pilha está vazia.\n");
    }
}

int isEmpty(tipopilha topo){
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
        printf("Pilha está vazia.\n");
        return 0;
    }
}

int top(tipopilha *topo, int *elem){
    if(!isEmpty(*topo)){
        *elem = (*topo)->dado;
        return 1;
    }else{
        printf("Pilha está vazia.\n");
        return 0;
    }
}

int main(){
    tipopilha topo;
    init(topo);
    printf("%d", isEmpty(NULL));
    getchar();
}
