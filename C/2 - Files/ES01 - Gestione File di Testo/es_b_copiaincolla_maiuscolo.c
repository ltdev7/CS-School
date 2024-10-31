/**
 * @file es_b_copiaincolla_maiuscolo.c
 * 
 * Scrivi  un  programma  che  legge  il  file  nomi.txt e  scrive  un  file  NOMI2.TXT,  dove  tutti  i  nomi  sono stati trasformati in caratteri maiuscoli.
 * 
 * @author Lorenzo Tarragoni
 * @date 24/10/24
*/

#include <stdio.h>

int main()
{
    char NomeFile1[] = {"TestFiles/nomi.txt"};
    char NomeFile2[] = {"TestFiles/NOMI2.TXT"};
    int c;

    FILE* pfile1 = fopen(NomeFile1, "r");
    FILE* pfile2 = fopen(NomeFile2, "w");
    if (pfile1==NULL) {perror("Errore nell'apertura del file"); return 1;}

   
    while((c = getc(pfile1)) != EOF)
    {
        if(c >= 'a' && c <= 'z'){
            c = c - ('a' - 'A');
        }
        putc(c, pfile2);
    }
    
    fclose(pfile1);
    fclose(pfile2);

    return 0;
}