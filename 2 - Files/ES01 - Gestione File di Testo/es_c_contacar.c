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
    int c, cont = 0;

    FILE* pfile = fopen(pfile, "r");
    if (pfile==NULL) {perror("Errore nell'apertura del file"); return 1;}

    while((c = getc(pfile)) != EOF)
    {
        if(c >= 'a' && c <= 'z')
        {
            cont++;
        }
    }
}