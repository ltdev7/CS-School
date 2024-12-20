#include <stdio.h>
#include <math.h>

int main(){
    int cateto1 = 3, cateto2 = 4;
    pid_t pid;

    pid = fork();

    if(pid == 1){
        perror("Errore nell'utilizzo del fork");
        return 1;
    }

    if(pid > 0){
        double area = cateto1 * 0.5 * cateto2;
        printf("Padre: L'area del triangolo è: %d", area);
    }

    if (pid < 0){
        double ipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
        double perimetro = cateto1 + cateto2 + ipotenusa;
        printf("Figlio: Il perimetro del rettangolo è: %d", perimetro);
    }
}