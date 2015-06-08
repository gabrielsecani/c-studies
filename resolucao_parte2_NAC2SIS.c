#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 3

struct cliente{
    int idade;
    char escolaridade[12];
    float renda;
};

/*(a)	Uma função para ler em um vetor de 10 registros as seguintes 
informações sobre cada cliente de uma empresa: idade, escolaridade 
("fundamental", "médio" ou "superior") e renda. 
*/
void lerClientes(struct cliente v[N]){
    int i;
    int escola;
    for (i=0; i<N; i++){
        fflush(stdin);
        printf("\nDigite a idade do cliente %d: \n", (i+1));
        scanf("%d", &v[i].idade);

        printf("Digite a escolaridade do cliente %d: \n (fundamental, medio, superior): \n", (i+1));        
        fflush(stdin);
        scanf("%s",v[i].escolaridade);
        //gets(v[i].escolaridade);

        printf("Digite a renda do cliente %d: \n", (i+1));
        scanf("%f", &v[i].renda);
    }
}

/*(b)	Uma função que recebe um vetor com 10 registros de clientes e 
retorne um vetor com as rendas dos clientes com idade acima de 30 anos e 
com nível superior de escolaridade, a função deve retornar também o número de 
elementos no vetor de rendas.
*/
void rendasAcima30Superior(struct cliente vetor[N], float rendas[N], int *n){
  int i, k=0;
  for (i=0; i<N; i++){
    if(vetor[i].idade > 30 && strcmp(vetor[i].escolaridade, "superior")==0){
        rendas[k] = vetor[i].renda;
        k++;
        }
    }
  *n = k;
  }

/*(c)	Uma função que recebe um vetor com no máximo 10 elementos reais e o 
número de elementos que realmente existem no vetor e escrever na tela de saída 
os elementos do vetor.
*/
void escreve(float rendas[N], int n){
    int i;
    printf("\n\nAs rendas de clientes com mais de 30 anos e escolaridade superior sao: \n\n");
    for (i=0; i<n; i++){

        printf("R$ %.2f\n", rendas[i]);
    }
    printf("\n");
}

/*O programa principal deve ser utilizado apenas para declarar variáveis e 
chamar as funções anteriores para ler o vetor de 10 registros de clientes e 
depois criar o vetor com renda dos clientes com idade acima de 30 anos e com 
nível superior e, finalmente, escrever o vetor gerado na função do item (b).
*/
int main(){

    struct cliente vclientes[N];
    float rendas[N];
    int n;
    
    lerClientes(vclientes);

    rendasAcima30Superior(vclientes, rendas, &n);

    escreve(rendas, n);

    //system("pause");
	getchar();
}
