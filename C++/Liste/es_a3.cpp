/**
 * @file es_a3.c
 * 
 * Rimozione dei Duplicati: Scrivere una funzione che rimuova tutti gli elementi duplicati da una lista non ordinata.
 * 
 * @author Lorenzo Tarragoni
 * @date 09/05/25
 */

#include <iostream>

using namespace std;

class nodo{
    public:
        int dato;
        struct nodo* next;
        
        nodo(int dato){
            this->dato = dato;
            this->next = NULL;
        }
};

void rimuoviDuplicati(nodo* head){
    nodo* current = head;
    while(current != NULL){
        nodo* prev = current;
        nodo* run = current->next;
        while (run != NULL) {
            if(current->dato == run->dato){
                prev->next = run->next;
                delete run;
                run = prev->next;
            }else {
            prev = run;
            run = run->next;
            }
        }
        current = current->next;
    }
}

int main(){
    nodo* n1 = new nodo(1);
    nodo* n2 = new nodo(2);
    nodo* n3 = new nodo(2);
    nodo* n4 = new nodo(3);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;
    
    cout << "Lista originale: ";
    nodo* current = n1;
    while(current != NULL){
        cout << current->dato << " ";
        current = current->next;
    }
    
    rimuoviDuplicati(n1);
    
    cout << "\nLista dopo la rimozione dei duplicati: ";
    current = n1;
    while(current != NULL){
        cout << current->dato << " ";
        current = current->next;
    }
    
    return 0;
}