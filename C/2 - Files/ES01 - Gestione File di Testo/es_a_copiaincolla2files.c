
/**
 * @file a_copiaincolla2files.c
 * 
 * Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.  Il  programma  legge 
 * car per car il contenuto del file in.txt e lo ricopia nel file out.txt. 
 * 
 * @author Lorenzo Tarragoni
 * @date 21/10/24
 */
#include <stdio.h>

int main() {
    
    char NomeFile1[] = {"TestFiles/testo1.txt"};
    char *NomeFile2 = "TestFiles/testo2.txt"; // via alternativa per dichiarare un array
    int car;
    
    FILE* pfile1 = fopen(NomeFile1, "r");
    if (pfile1==NULL) {perror("Errore nell'apertura del file"); return 1;}
    FILE* pfile2 = fopen(NomeFile2, "w");
    if (pfile2==NULL) {perror("Errore nell'apertura del file"); return 1;}

    /*
    do {
        car = getc(pfile1);
        if (car!=EOF) 
            putc(car, pfile2);
    } while(!feof(pfile1));
    */

    while ( (car = getc(pfile1)) != EOF) { // via alternativa per fare il ciclo do while
        putc(car, pfile2);
    }
   
    fclose(pfile1);
    fclose(pfile2);

    return 0; 
}