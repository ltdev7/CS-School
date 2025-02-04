#include "rettangolo.h"
#include <iostream>

using namespace std;

int main()
{
    rettangolo r;

    r.SetBase(4);
    r.SetAltezza(5);
    double rettangolo :: b = r.GetBase;
    double rettangolo :: a = r.GetAltezza;

    cout << b << endl;
}