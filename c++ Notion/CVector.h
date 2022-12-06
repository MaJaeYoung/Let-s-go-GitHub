// CVector.h

#ifndef CVECTOR_H
#define CVECTOR_H
#include<iostream>
using namespace std;

class CVector {
    double _x, _y, _z;
public:
    CVector(double x, double y, double z) : _x(x), _y(y), _z(z) {};
    void print() const;

    CVector operator + (CVector& v);
    CVector operator - (CVector& v);
    CVector operator + ();
    CVector operator - ();
    double operator * (CVector& v);

    CVector operator * (double d);
    friend CVector operator * (double d, CVector& v);
    CVector operator / (double d);

    CVector operator ++ ();
    CVector operator -- ();
    CVector operator ++ (int d);
    CVector operator -- (int d);
    //CVector operator % (CVector& v);
};


#endif

