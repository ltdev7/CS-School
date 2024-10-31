/**
 * @file es_b_copiaincolla_maiuscolo.c
 * 
 * Scrivi un programma che conta i caratteri, le parole e le righe presenti in un file di testo (non gli spazi, tabulazioni e a capo).
 * 
 * @author Lorenzo Tarragoni
 * @date 24/10/24
*/

#include <stdio.h>

int main()
{
    char *nomefile = "TestFiles/testo1.txt";
    int c;
    int car = 0;
    int parole = 0;
    int righe = 0;

    FILE *pfile = fopen(nomefile, "r");
    if (pfile==NULL) {perror("Errore nell'apertura del file"); return 1;}

    while((c = getc(pfile)) != EOF)
    {
        if(c >= '1' && c <= 'z') {car++;}

        if(c == ' ') {parole++;}

        if(c == '\n') {righe++;}
    }

    printf("I caratteri sono: %d\n", car);
    printf("Le parole sono: %d\n", parole);
    printf("Le righe sono: %d\n", righe);

    fclose(pfile);

    return 0;
}