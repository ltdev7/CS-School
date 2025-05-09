#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include <iostream>
#include <cmath>

using namespace std;

class quadrilatero
{
    private:
        int lato1;
        int lato2;
        int lato3;
        int lato4;
    public:
        quadrilatero();
        void setlato1(int a);
        void setlato2(int b);
        void setlato3(int c);
        void setlato4(int d);
        void getlato1();
        void getlato2();
        void getlato3();
        void getlato4();
};
#endif