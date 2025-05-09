#include "rettangolo.h"
#include <iostream>
#include <cmath>

using namespace std;

Rettangolo::Rettangolo() {}; 

void Rettangolo::SetBase(double b)
{
    this -> base = b;
}

void Rettangolo::SetAltezza(double a)
{
    this -> altezza = a;
}

void Rettangolo::GetBase()
{
    cout << "La base e': " << base << endl;
}

void Rettangolo::GetAltezza()
{
    cout << "L' altezza e': " << altezza << endl;
}

void Rettangolo::GetArea()
{
    double area = base * altezza;

    cout << "L'area e': " << area << endl;
}