#ifndef STUDENTE_H
#define STUDENTE_H

#include <iostream>
#include <string>

using namespace std;

class Studente
{
    private:
        string nome;
        double eta;
        float voto;
    public:
        Studente();
        void SetNome(string n);
        void SetEta(double e);
        void SetVoto(float v);
        void StampaStudente();
};

#endif