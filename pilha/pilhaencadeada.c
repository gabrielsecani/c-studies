#include<stdio.h>
#include<stdlib.h>
#include "tipopilha.h"

int main(){
    tipopilha topo;
    init(&topo);
    push(&topo, 2);
    push(&topo, 5);

    int itop = -1;

    printf("\n%d",topA(topo, &itop));
    printf("\ntop: %d", itop);
    printf("\npop: %d", pop(&topo, &itop));
    printf("\ntop: %d", itop);
    printf("\n%d",top(&topo, &itop));
    printf("\ntop: %d", itop);
    printf("\nFIM.");
    getchar();
}
