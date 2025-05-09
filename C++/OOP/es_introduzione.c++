/**
 * @file es_introduzione.c++
 * 
 * definire una classe, visibilità (private e public), attributi e metodi inline (cioè all'interno della classe)
 * 
 * @author Lorenzo Tarragoni
 * @date 04/11/24
*/

frazione.cpp // frazione.cpp per spiegare il 1 programma (unico file)

#include <iostream>

using namespace std; //per funzioni cout e cin
/* using namespace std; perchè stiamo usando la nuova libreria iostream (quella senza il .h) 
che richiede l'uso di uno spazio dei nomi per identificare univocamente le classi.*/

// definizione della classe
class frazione {
    private:    // definizione attributi di classe
        int numeratore;
        int denominatore;
    public:
        frazione(){};   
        /* frazione(){}; è il costruttore di default. Se non si dichiarano altri costruttori viene utilizzato quello di default che non è necessario dichiarare
        perchè viene implementato automaticamente. 
        Se si usano altri costruttori (con parametri!), se si vorrà utilizzare anche il costruttore di default sarà necessario dichiararlo*/
        
        //metodi setters
        void setNumeratore(int n) {
            numeratore = n;
        }

        void setDenominatore(int d) {
            denominatore = d;
        }
}

// DA COMPLETARE    