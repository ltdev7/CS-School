/**
 * @file es_a1.c
 * 
 * Implementare una lista concatenata semplice con le operazioni di base: inserimento in testa, in coda, eliminazione, ricerca e visualizzazione.
 * 
 * @author Lorenzo Tarragoni
 * @date 11/03/25
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int dato;
    struct nodo* next;
} nodo;

// Creazione di un nuovo nodo

nodo* creaNodo(int valore) {
    nodo* nuovonodo = (nodo*)malloc(sizeof(nodo));

    if(nuovonodo == NULL) {
        printf("Errore: Allocazione di memoria fallita");
        exit(1);
    }
    
    nuovonodo -> dato = valore;
    nuovonodo -> next = NULL;

    return nuovonodo;
}

// Inserimento in testa

nodo* inserisciInTesta(nodo* testa, int valore) {
    nodo* nuovonodo = creaNodo(valore);

    nuovonodo -> next = testa; 

    return nuovonodo;
}

// Inserimento in coda

nodo* inserisciInCoda(nodo* testa, int valore) {
    nodo* nuovoNodo = creaNodo(valore);

    if(testa == NULL) {
        return nuovoNodo;
    }

    nodo* corrente = testa;

    while(corrente -> next != NULL) {
        corrente = corrente -> next;
    }

    corrente -> next = nuovoNodo;

    return testa;
}

// Ricerca

nodo* ricercaElemento(nodo* testa, int valore) {
    nodo* corrente = testa;

    while(corrente != NULL) {
        if(corrente -> dato == valore) {
            return corrente;
        }

        corrente = corrente -> next;
    }

    return NULL;
}

// Eliminazione di un nodo

nodo* eliminaNodo(nodo* testa, int valore) {
    if(testa == NULL) {
        return NULL;
    }

    if(testa -> dato == valore) {
        nodo* nuovaTesta = testa -> next;
        free(testa);
        return nuovaTesta;
    }

    nodo* corrente = testa;
    while (corrente -> next != NULL && corrente -> next -> dato != valore) {
        corrente = corrente -> next;
    }
    
    if (corrente -> next != NULL) {
        Nodo* nodoDaEliminare = corrente -> next;
        corrente -> next = nodoDaEliminare -> next;
        free(nodoDaEliminare);
    }
    
    return testa;
}

// Visualizzazione lista

void visualizzaLista(Nodo* testa) {
    Nodo* corrente = testa;
    
    printf("Lista: ");

    while (corrente != NULL) {
        printf("%d -> ", corrente -> dato);
        corrente = corrente -> next;
    }
    
    printf("NULL\n");
}