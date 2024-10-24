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

void caricaTab(Studente t[]); //Carica la tabella chiedendo dati all'utente o generandoli casualmente.
void StampaTab(Studente t[]); //Stampa la tabella allineando correttamente i dati.
int ricercaCogn(Studente t[], char cogn[]); //Cerca uno studente per cognome, restituendo l'indice (o -1 se non trovato).
int stampaMedia(Studente t[]); //Stampa la media voti per ogni studente e conta quante medie sono ≥ 6.
void formattaCogn(Studente t[]); //Scrivi in maiuscolo la prima lettera del campo cognome e minuscole tutte le altre per tutti i record della tabella
int studenti10(Studente t[]); //Conta gli studenti con almeno un voto pari a 10.

int main()
{
    Studente Tab[NUM_STUD];
    int ricerca, stamp;
    char cogn[20];

    ricerca = ricercaCogn(Tab, cogn);
    caricaTab(Tab);
    StampaTab(Tab);
    stamp = stampaMedia(Tab);

    return 0;
}

void caricaTab(Studente t[])
{
    for(int i = 0; i < NUM_STUD; i++)
    {
        printf("Inserisci il cognome dello studente numero %d:\t", i +  1);
        scanf("%s", t[i].cognome);
        printf("Inserisci il giorno di nascita dello studente numero %d:\t", i + 1);
        scanf("%d", &t[i].data_nascita.giorno);
        printf("Inserisci il mese di nascita dello studente numero %d:\t", i + 1);
        scanf("%d", &t[i].data_nascita.mese);
        printf("Inserisci l'anno di nascita dello studente numero %d:\t", i + 1);
        scanf("%d", &t[i].data_nascita.anno);
        for(int j = 0; j < NUM_VOTI; j++)
        {
          printf("Inserisci il %d voto:\t", j + 1);
          scanf("%d", &t[i].voti[j]);
        }
    }
}

void StampaTab(Studente t[])
{
  for(int i = 0; i < NUM_STUD; i++)
  {
    printf("%s\t", t[i].cognome);
    printf("%d/%d/%d\t", t[i].data_nascita.giorno, t[i].data_nascita.mese , t[i].data_nascita.anno);
    for(int j = 0; j < NUM_VOTI; j++)
    {
      printf("%d ", t[i].voti[j]);
    }
    printf("\n");
  }
}

int ricercaCogn(Studente t[], char cogn[])
{
  scanf("%s", cogn);
  for(int i = 0; i < NUM_STUD; i++)
  {
    if(strcmp(t[i].cognome, cogn) == 0)
    {
      return 1;
    }
      else
      {
        return 0;
      }
  }
}

int stampaMedia(Studente t[])
{
  for(int i = 0; i < NUM_STUD; i++)
  {
    
  }
}