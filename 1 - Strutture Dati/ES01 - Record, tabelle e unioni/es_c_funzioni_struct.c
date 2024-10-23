/**
 * @file es_c_funzioni_struct.c
 * 
 * Nel main, dichiara un array di dimensione NUM_STUD (costante, ad esempio 5) del tipo Studente.
 * 
 * @author Lorenzo Tarragoni
 * @date 23/10/24
 */
#include <stdio.h>
#define DIM_COGN 50
#define NUM_VOTI 5
#define NUM_STUD 5

void caricaTab(Studente t[]); //Carica la tabella chiedendo dati all'utente o generandoli casualmente.
void stampaTab(Studente t[]); //Stampa la tabella allineando correttamente i dati.
int ricercaCogn(Studente t[], char cogn[]); //Cerca uno studente per cognome, restituendo l'indice (o -1 se non trovato).
int stampaMedia(Studente t[]); //Stampa la media voti per ogni studente e conta quante medie sono ≥ 6.
void formattaCogn(Studente t[]); //Scrivi in maiuscolo la prima lettera del campo cognome e minuscole tutte le altre per tutti i record della tabella
int studenti10(Studente t[]); //Conta gli studenti con almeno un voto pari a 10.

// Struttura per la data
typedef struct Data {
  int giorno;
  int mese;
  int anno;
} Data;

// Struttura per lo studente
typedef struct {
  char cognome[DIM_COGN];
  Data data_nascita;
  int voti[NUM_VOTI];
} Studente;

int main(){
    Studente Tab[NUM_STUD];
    caricaTab(Tab);
    stampaTab(Tab);

    return 0;
}

void caricaTab(Studente t[]){
    for(int i = 0; i<NUM_STUD; i++){
        printf("Inserisci il cognome del %d studente", i);
        scanf("%s", t[i].cognome);
    }
}

void stampatab(Studente t[]){
  for(int i = 0; i < NUM_STUD; i++){
    printf("%s\t", t[i].cognome);
    printf("%d/%d/%d", t[i].data_nascita.giorno, t[i].data_nascita.mese , t[i].data_nascita.anno);
  }
}