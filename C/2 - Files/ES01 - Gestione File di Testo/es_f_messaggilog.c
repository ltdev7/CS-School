/**
 * @file es_f_messaggilog.c
 * 
 * L'obiettivo di questo esercizio è creare un programma in linguaggio C che permetta di scrivere messaggi di log su un file di log. 
 * Questi messaggi di log possono contenere informazioni importanti sul funzionamento di un'applicazione o di un sistema
 * e sono spesso utilizzati per scopi di debugging, tracciatura, monitoraggio o registrazione di eventi rilevanti.
 * (L'ESERCIZIO E' UN COPIA INCOLLA DI QUELLO DEL PROF MA CON MODIFICHE APPORTATE)
 * 
 * @author Lorenzo Tarragoni
 * @date 28/10/24
*/

#include <stdio.h>
#include <time.h>

void writeLog(FILE *logFile, const char *message);

int main()
{
    char *nfile = "TestFiles/log.txt";
   
    FILE *logFile = fopen(nfile, "a");
    if(logFile == NULL){perror("Impossibile aprire il file"); return 1;}

    writeLog(logFile, "Messaggio di log 1");
    writeLog(logFile, "Messaggio di log 2");
}

void writeLog(FILE *logFile, const char *message) 
{
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

    fprintf(logFile, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
            localTime->tm_hour, localTime->tm_min, localTime->tm_sec, message);
}

