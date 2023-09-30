#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int dia, mes,ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
    
}No;


Pessoa ler_pessoa() {
    Pessoa p;
    
    printf("\n Digite o nome, data de nascimento dd mm aaaa: \n");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

void imprimir_pessoa(Pessoa p) {
    printf("\n Nome : %s\n Data: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);

}

No *empilhar (No *topo ){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
        
    }else{
        printf("\nErro ao alocar memoria\n");
        return NULL;
    
    }
}
No *desempilhar(No **topo){
    if(*topo!= NULL){
        No *remover;
        remover = *topo;
        *topo = remover->proximo;
        return remover;
        
    }else{
        printf("\nPilha vazia...\n");
         return NULL;
    }
  
 }
 
 void imprimir_pilha(No *topo){
     printf("\n------------ PILHA --------------\n");
     //executa enquanto while for diferente de NULL
     while(topo){
         imprimir_pessoa(topo->p);
         topo = topo->proximo;
         
         
     }
      printf("\n------------ FIM PILHA -----------\n");
 }

int main (void){
    No *topo = NULL;
    No *remover;
    int opcao;

    do {
        printf("\n0 - sair \n1 = empilhar, \n2 = desempilhar, \n3 = imprimir\n");
        scanf("%d", &opcao);
        getchar();
        printf("\n opcao = %d", opcao);
  
        switch (opcao)
        {
        case 1:
            topo = empilhar(topo);
            break;
        case 2:
            remover = desempilhar(&topo);
            if (remover){
                printf("\nElemento removido\n");
                imprimir_pessoa(remover->p);
            }
            break;
        case 3:
            imprimir_pilha(topo);
            break;
        default:
            if(opcao != 0){
                printf("\n opcao invalida\n");
            }
        
        }
    } while (opcao != 0);

    return 0;

}
    
    
    
    

#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int dia, mes,ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
    
}No;


Pessoa ler_pessoa() {
    Pessoa p;
    
    printf("\n Digite o nome, data de nascimento dd mm aaaa: \n");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

void imprimir_pessoa(Pessoa p) {
    printf("\n Nome : %s\n Data: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);

}

No *empilhar (No *topo ){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
        
    }else{
        printf("\nErro ao alocar memoria\n");
        return NULL;
    
    }
}
No *desempilhar(No **topo){
    if(*topo!= NULL){
        No *remover;
        remover = *topo;
        *topo = remover->proximo;
        return remover;
        
    }else{
        printf("\nPilha vazia...\n");
         return NULL;
    }
  
 }
 
 void imprimir_pilha(No *topo){
     printf("\n------------ PILHA --------------\n");
     //executa enquanto while for diferente de NULL
     while(topo){
         imprimir_pessoa(topo->p);
         topo = topo->proximo;
         
         
     }
      printf("\n------------ FIM PILHA -----------\n");
 }

int main (void){
    No *topo = NULL;
    No *remover;
    int opcao;

    do {
        printf("\n0 - sair \n1 = empilhar, \n2 = desempilhar, \n3 = imprimir\n");
        scanf("%d", &opcao);
        getchar();
        printf("\n opcao = %d", opcao);
  
        switch (opcao)
        {
        case 1:
            topo = empilhar(topo);
            break;
        case 2:
            remover = desempilhar(&topo);
            if (remover){
                printf("\nElemento removido\n");
                imprimir_pessoa(remover->p);
            }
            break;
        case 3:
            imprimir_pilha(topo);
            break;
        default:
            if(opcao != 0){
                printf("\n opcao invalida\n");
            }
        
        }
    } while (opcao != 0);

    return 0;

}
    
    
    
    


