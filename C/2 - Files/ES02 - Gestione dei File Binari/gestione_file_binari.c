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

#define N 10

typedef struct
{
    char nome[20];
    char cognome[20];
} persona;

void scrivifile(char nomefile[], persona utente[], int n);

int main()
{
    char* nomefile = {"TestFiles/testo1.dat"};
    char c;
    persona utenti[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%s", utenti[i].nome);
        scanf("%s", utenti[i].cognome);
    }   

    scrivifile(nomefile, utenti, N);   

    return 0;
}

void scrivifile(char nomefile[], persona utente[], int n)
{
    FILE* pfile = fopen(nomefile, "w");
    if (pfile == NULL) {perror("Errore nell'apertura del file"); return;}

    fwrite(utente, sizeof(persona), n, pfile);

    fclose(pfile);
}



    