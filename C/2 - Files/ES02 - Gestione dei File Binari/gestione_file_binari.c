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
void stampafile(char* nomefile);



int main()
{
    char* nomefile = {"TestFiles/testo1.dat"}; 

    scrivifile(nomefile);
    stampafile(nomefile);

    return 0;
}



void scrivifile(char* nomefile)
{
    persona buffer;

    FILE* pfile = fopen(nomefile, "wb");

    for(int i = 0; i < N; i++)
    {
        printf("Inserisci Nome: ");
        scanf("%s", buffer.nome);
        printf("Inserisci cognome: ");
        scanf("%s", buffer.cognome);

        fwrite(&buffer, sizeof(persona), 1, pfile);
    }

    fclose(pfile);
}



void stampafile(char* nomefile)
{
    persona buffer;

    FILE* pfile = fopen(nomefile, "rb");

    while(fread(&buffer, sizeof(persona), N, pfile))
    {
        printf("%s", buffer.nome);
        printf("%s", buffer.cognome);
    }

    fclose(pfile);
}