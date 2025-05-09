#ifndef RETTANGOLO_H
#define RETTANGOLO_H
#include <iostream>
#include <cmath>

class Rettangolo
{
    private:
        double base;
        double altezza;
    public:
        Rettangolo();
        void SetBase(double b);
        void SetAltezza(double a);
        void GetBase();
        void GetAltezza();
        void GetArea();
};

#endif