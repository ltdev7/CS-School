#include "studente.h"

#include <iostream>
#include <string>

int main()
{
    Studente studente1;

    studente1.SetNome("Lorenzo");

    studente1.SetEta(17);

    studente1.SetVoto(10);
    
    studente1.StampaStudente();
}