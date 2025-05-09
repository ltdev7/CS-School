#include "studente.h"
#include <iostream>
#include <string>

using namespace std;

Studente::Studente() {};

void Studente::SetNome(string n)
{
    this -> nome = n;
}

void Studente::SetEta(double e)
{
    this -> eta = e;
}

void Studente::SetVoto(float v)
{
    this -> voto = v;
}

void Studente::StampaStudente()
{
    cout << "Il nome dello studente e': " << nome << ", l'eta' e': " << eta << ", e il suo voto e': " << voto << endl;
}