#include <stdio.h>
#include <stdlib.h>
typedef struct lista{
    int valor;
    struct lista *prox;

}TLSE;

void adiciona_no_inicio(TLSE **lista, int num){
    TLSE *novo = malloc(sizeof(TLSE));
    novo->valor = num;
    novo->prox = *lista;
    *lista = novo;
}

void adiciona_no_final(TLSE **lista, int num){
    TLSE *novo = malloc(sizeof(TLSE));
    novo->valor = num;
    novo->prox = NULL;
    if (*lista == NULL)
        *lista = novo;
    else{
        TLSE *atual = *lista;
        while (atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox = novo;
    }
}



void imprime_lista(TLSE *lista){
    TLSE *atual = lista;
    int i = 1;
    while(atual != NULL){
        printf("Valor do elemento %d : %d\n", i , atual->valor);
        atual = atual -> prox;
        i++;
    }


}
int quantas_vezes_aparece(TLSE *lista, int num){
    int cont = 0;
    TLSE *atual = lista;
    while(atual != NULL){
        if (atual->valor == num)
            cont++;
        atual = atual->prox;
    }

    return cont;
}

int len(TLSE *lista){
    int cont = 0;
    TLSE *atual = lista;
    while (atual != NULL){
        cont++;
        atual = atual->prox;
    }
    return cont;
}

TLSE *divide_em_dois(TLSE *lista){
    int i = 0;
    TLSE *atual = lista;
    TLSE *lista_return = NULL;
    int tamanho = len(lista);
    int metade = tamanho/2;
    while(atual != NULL){
        if (i  >= metade ){
            adiciona_no_final(&lista_return,atual->valor);
        }
        atual = atual->prox;
        i++;
    }
return lista_return;
}

void antes_depois(TLSE **lista, int elemento_inserir, int elemento_ad){
    TLSE *atual = *lista;
    while (atual != NULL){
        if (atual->valor == elemento_ad){
            TLSE *novo_antes = malloc(sizeof(TLSE));
            novo_antes->valor = elemento_inserir;
            novo_antes->prox = atual;
            *lista = novo_antes;
            TLSE *novo_depois = malloc(sizeof(TLSE));
            novo_depois->valor = elemento_inserir;
            novo_depois->prox = atual->prox;
            atual->prox = novo_depois;

        }
        else(atual->prox->valor == elemento_ad){
            TLSE *novo1 = malloc(sizeof(TLSE));
            novo1->valor = elemento_inserir;
            novo1->prox = atual->prox;
            atual->prox = novo1;
            TLSE *novo2 = malloc(sizeof(TLSE));
            novo2->valor = elemento_inserir;
            novo2->prox = atual->prox->prox;
            atual->prox->prox = novo2;
        }
        atual = atual->prox;
    }




}

void funcao(TLSE *lista,int num){
    TLSE *atual = lista;
    if (atual->valor == num && num % 2 == 0)
        adiciona_no_inicio(lista,num-1);
    if (atual->valor == num && (num%2) != 0){
        TLSE *novo = malloc(sizeof(TLSE);
        novo->valor = num+1;
        novo->prox = atual->prox;
        atual->prox = novo;
    }
    while(atual != NULL){
        if (atual->prox->valor == num && num % 2 == 0){
            TLSE *novo = malloc(sizeof(TLSE));
            novo->prox = atual->prox;
            novo->valor = num-1;
            atual->prox = novo;
        }
        if (atual->prox->valor == num && num % 2 != 0){
            TLSE *novo = malloc(sizeof(TLSE));
            novo->prox = atual->prox->prox;
            novo->valor = num+1;
            atual->prox->prox = novo;
        }
        else
            atual = atual->prox;

    }

}



int main(){
    TLSE *minha_lista = NULL;
    adiciona_no_final(&minha_lista, 22);
    adiciona_no_final(&minha_lista, 14);
    adiciona_no_final(&minha_lista, 43);
    adiciona_no_final(&minha_lista, 61);
    adiciona_no_final(&minha_lista, 39);
    TLSE *lista_div = divide_em_dois(minha_lista);
    imprime_lista(lista_div);

}
