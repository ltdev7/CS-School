/**
 * @file es_a_scrivi_file_di_record.c
 * 
 * funzione per scrivere un file di N record con N costante posta a 10
 * 
 * @author Lorenzo Tarragoni
 * @date 04/11/24
*/

#include <stdio.h>

int main()
{
    char* nomefile = {"TestFiles/testo1.txt"};
    char c;
    int buffer[10];

    FILE* pfile = fopen(nomefile, "w");
    if (pfile == NULL) {perror("Errore nell'apertura del file"); return 1;}
}