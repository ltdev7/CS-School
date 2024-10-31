/**
 * @file es_g_copiafile.c
 * 
 * Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo. 
 * Il  programma  legge  carattere per carattere il contenuto del file “file_src” e lo ricopia nel file “file_dst”. 
 * “file_src” e “file_dst” vanno passati al main come parametri. Gestire eventuali errori o utilizzi non corretti del programma.
 * 
 * @author Lorenzo Tarragoni
 * @date 31/10/24
*/

#include <stdio.h>

int main()
{
    char *nomefile1 = "TestFiles/file_src";
    char *nomefile2 = "TestFiles/file_dst";
    int c;

    FILE *pfile1 = fopen(nomefile1, "r");
    if(pfile1 == NULL) {perror("Errore nell'apertura del file"); return 1;}
    FILE *pfile2 = fopen(nomefile2, "w");
    if(pfile1 == NULL) {perror("Errore nell'apertura del file"); return 1;}

    while((c = getc(pfile1)) != EOF) {putc(c,pfile2);}

    fclose(pfile1);
    fclose(pfile2);

    return 0;
}