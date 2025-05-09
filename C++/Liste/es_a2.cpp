/**
 * @file es_a2.c
 * 
 * Scrivere una funzione che conti il numero di nodi in una lista concatenata senza utilizzare un contatore interno alla classe.
 * 
 * @author Lorenzo Tarragoni
 * @date 11/03/25
 */

 #include <stdio.h>
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

int contaNodi(nodo* head){
    int cont = 0;
    nodo* current = head;
    
    while(current != NULL){
        cont++;
        current = current->next;
    }
    
    return cont;
}


int main(){
    nodo* n1 = new nodo(1);
    
    cout << "Valore del nodo: " << n1->dato << endl;
    cout << "prossimo nodo: " << n1->next << endl;

    delete n1;
    return 0;
}


