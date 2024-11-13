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

void scrivifile(char* nomefile);
void leggifile(FILE* pfile);



int main()
{
    char* nomefile = {"TestFiles/testo1.dat"}; // char nomefile[] = {ciao}

    scrivifile(nomefile);

    return 0;
}



void scrivifile(char* nomefile)
{
    persona buffer[N];

    FILE* pfile = fopen(nomefile, "wb");

    for(int i = 0; i < N; i++)
    {
        printf("Inserisci Nome: ");
        scanf("%s", buffer[i].nome);
        printf("Inserisci cognome: ");
        scanf("%s", buffer[i].cognome);

        fwrite(&buffer, sizeof(persona), 1, pfile);
    }
}