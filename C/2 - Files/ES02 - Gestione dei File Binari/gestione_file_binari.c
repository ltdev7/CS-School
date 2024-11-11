/**
 * @file gestione_file_binari.c
 * 
 * 1. funzione per scrivere un file di N record con N costante posta a 10
 * 
 * @author Lorenzo Tarragoni
 * @date 04/11/24
*/

#include <stdio.h>
#include <stdlib.h>

#define N 3

typedef struct
{
    char nome[20];
    char cognome[20];
} persona;

void scrivifile(char* nomefile, persona utente[], int n)
void leggifile(char* nomefile)

int main()
{
    char* nomefile = {"TestFiles/testo1.dat"};
    char c;
    persona utenti[N];

    for(int i = 0; i < N; i++)
    {
        printf("Inserisci il nome della persona numero %d", i);
        scanf("%s", utenti[i].nome);
        printf("Inserisci il cognome della persona numero %d", i);
        scanf("%s", utenti[i].cognome);
    }   

    scrivifile(nomefile, utenti, N);   

    return 0;
}

void scrivifile(char nomefile[], persona utente[], int n)
{
    FILE* pfile = fopen(nomefile, "wb");
    if (pfile == NULL) {perror("Errore nell'apertura del file"); return;}

    fwrite(utente, sizeof(persona), n, pfile);

    fclose(pfile);
}

void leggifile(char* nomefile)
{
    int buffer = 1;

    fread()
}
