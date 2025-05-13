/**
 * @file es_a2.c
 * 
 * Scrivere una funzione che conti il numero di nodi in una lista concatenata senza utilizzare un contatore interno alla classe.
 * 
 * @author Lorenzo Tarragoni
 * @date 11/03/25
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
    nodo* n2 = new nodo(2);
    nodo* n3 = new nodo(3);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    
    cout << "Numero di nodi nella lista: " << contaNodi(n1) << endl;

    delete n1;
    delete n2;
    delete n3;
    return 0;
}


