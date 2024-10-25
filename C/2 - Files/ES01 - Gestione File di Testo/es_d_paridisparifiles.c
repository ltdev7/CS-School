/**
 * @file es_d_paridisparifiles.c
 * 
 * Scrivi un programma che legge il file numeri.txt (cifre numeriche ascii)
 * composto da una sequenza di numeri di una cifra separati da uno spazio bianco 
 * e successivamente scrive 2 file, pari.txt e dispari.txt, nei quali dovrai inserire i numeri che hai letto a seconda del loro valore pari o dispari
 * 
 * @author Lorenzo Tarragoni
 * @date 25/10/24
 */

#include <stdio.h>

int main()
{
    char *filepari = "TestFiles/pari.txt";
    char *filedispari = "TestFiles/dispari.txt";
    char *filenumeri = "TestFiles/numeri.txt";
    int c;

    FILE *pfile1 = fopen(filepari, "w");
    if (pfile1==NULL) {perror("Errore nell'apertura del file"); return 1;}
    FILE *pfile2 = fopen(filedispari, "w");
    if (pfile2==NULL) {perror("Errore nell'apertura del file"); return 1;}
    FILE *pfile3 = fopen(filenumeri, "r");
    if (pfile3 == NULL) {perror("Errore nell'apertura del file"); return 1;}

    while(c = (getc(pfile3)) != EOF) 
    {
        if(c >= '0' && c <= '9') 
        {
            int num = c - '0';
            if(c % 2 == 0) {putc(c, pfile1);}
            else {putc(c, pfile2);}
        }
    }

    fclose(pfile1);
    fclose(pfile2);
    fclose(pfile3);

    return 0;
}