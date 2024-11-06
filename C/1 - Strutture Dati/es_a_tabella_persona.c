/*
OBIETTIVO: Scrivere un programma C che definisca la struttura “persona” composta da nome, cognome, indirizzo, provincia e data di nascita. 
Si richieda all’utente di inserire tutti i dati e si stampino a video. 
*/
#include <stdio.h>
#define N 3

typedef struct{
    char nome[20];
    char cognome[20];
    char provincia[20];
} persona;

typedef struct{
    char indirizzo[20];
    int numero_indirizzo;
} indirizzo;

typedef struct{
    int giorno;
    int mese;
    int anno;
} data_nascita;

int main(){
    persona p;
    indirizzo ind;
    data_nascita dn;
    
    printf("inserisci nome:");
    scanf("%s", p.nome);
    printf("inserisci cognome:");
    scanf("%s", p.cognome);
    printf("inserisci la provincia:");
    scanf("%s", p.provincia);
    printf("inserisci l'indirizzo:");
    scanf("%s", ind.indirizzo);
    printf("inserisci numero di indirizzo:");
    scanf("%d", &ind.numero_indirizzo);
    printf("inserire giorno di nascita:");
    scanf("%d", &dn.giorno);
    printf("inserire mese:");
    scanf("%d", &dn.mese);
    printf("inserisci anno:");
    scanf("%d", &dn.anno);

    printf("\n----------\n");
    printf("Nome: %s\n", p.nome);
    printf("----------\n");
    printf("Cognome: %s\n", p.cognome);
    printf("----------\n");
    printf("Provincia: %s\n", p.provincia);
    printf("----------\n");
    printf("Indirizzo: %s %d\n", ind.indirizzo, ind.numero_indirizzo);
    printf("----------\n");
    printf("Data di nascita: %d/%d/%d\n", dn.giorno, dn.mese, dn.anno);
    printf("----------\n");

    return 0;
}