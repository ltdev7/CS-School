/*
OBETTIVO: chiedere all'utente 2 orari diversi e fare la sottrazione fra essi dando il risultato finale utilizzando lo struct
NOTA: in questo caso ho utilizzato 2 variabili con lo struct ossia orario1 e orario2, era meglio se avessi utilizzato un vettore orario[N] e includere tutto il codice in un ciclo for
*/

#include <stdio.h>

typedef struct {
    int seconds;
    int minutes;
    int hours;
} tempo;

int main(){
    tempo orario1;
    tempo orario2;

    printf("Inserisci i secondi del primo orario:\t");
    scanf("%d", &orario1.seconds);
    printf("Inserisci i secondi del secondo orario:\t");
    scanf("%d", &orario2.seconds);
    printf("Inserisci i minuti del primo orario:\t");
    scanf("%d", &orario1.minutes);
    printf("Inserisci i minuti del secondo orario:\t");
    scanf("%d", &orario2.minutes);
    printf("Inserisci le ore del primo orario:\t");
    scanf("%d", &orario1.hours);
    printf("Inserisci le ore del secondo orario:\t");
    scanf("%d", &orario2.hours);

    if(orario1.seconds < orario2.seconds){
        orario1.minutes = orario1.minutes - 1;
        orario1.seconds = orario1.seconds + 60;
        orario1.seconds = orario1.seconds - orario2.seconds;
        }
        else
            orario1.seconds = orario1.seconds - orario2.seconds;

    if(orario1.minutes < orario2.minutes){
        orario1.hours = orario1.hours - 1;
        orario1.minutes = orario1.minutes + 60;
        orario1.minutes = orario1.minutes - orario2.minutes;
        }
        else
            orario1.minutes = orario1.minutes - orario2.minutes;
    
    if(orario1.hours > orario2.hours){
        orario1.hours = orario1.hours - orario2.hours;
    }

    printf("Orario finale: %d:%d:%d", orario1.seconds, orario1.minutes, orario1.hours);

    return 0;
}