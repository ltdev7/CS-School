#include <stdio.h>
#define R 5
#define C 5

void Carica(int m[ ], [C]);   //si avvalori la matrice chiedendo i valori all'utente
void Stampa(int m[ ], [C]);   //si stampi sul monitor la matrice curando aspetto grafico
void CaricaRandom(int m[ ], [C]);   //si avvalori la matrice con funzione rand con valori compresi fra 10 e 40;
int conta(int m[ ], [C], int x);  //la funzione restituisce un intero che riporta quante volte l'intero x è presente nella matrice.
void stampaDiagonale(int m[ ], [C]); // la funzione stampa sul monitor i valori della diagonale principale
void stampaDiagonalesecondaria(int m[ ], [C]); // la funzione stampa sul monitor i valori della diagonale secondaria.
void trasposta(int m1[ ], [C], int t2[ ], [R]  ); // copia la riga i-esima della matrice m1 nella  colonna i-esima della matrice t2 (per tutte le righe) 

int main(){
    int m[R][C];
    Carica(m[][C]);
}

