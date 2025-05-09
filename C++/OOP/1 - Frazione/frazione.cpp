#include <iostream>
#include <frazione.h>

using namespace std;

class Frazione
{
    private:
        double numeratore;
        double denominatore;
    public:
        Frazione(double numeratore = 1, double denominatore = 1)
        {
            this -> numeratore = numeratore;
            this -> denominatore = denominatore;
        }

        SetNumeratore(double x) 
        {
            numeratore = x;
        }
}