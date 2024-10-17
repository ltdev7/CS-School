#include <stdio.h>

int main(){
    
    char NomeFile1[] = {"TestFiles/testo1.txt"};
    char NomeFile2[] = {"TestFiles/testo2.txt"};
    char caratteri;

    FILE* pfile1;
    FILE* pfile2;

    pfile1 = fopen(NomeFile1, "r");
    pfile2 = fopen(NomeFile2, "r");

    if(pfile1 == 0)
        {
            while(!feof(pfile1)){
                getc(pfile1);
            }
    else{
        printf("Errore")
    }




            
        }
}