#include <stdio.h>

int main(){
    char c;
    char NomeFile[] = {"Files/ciao.txt"};
    int err;

    FILE *pfile;
    pfile = fopen(NomeFile, "r");

    if(err == 0){
        while(!feof(pfile)){
            c = fgetc(pfile);
            printf("%c", c);
        }
        err = fclose(pfile);
    }
    else
        printf("Impossibile aprire il file!");

    return 0;
}