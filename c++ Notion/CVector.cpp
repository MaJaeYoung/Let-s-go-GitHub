// main.cpp

#include "CVector.h"
using namespace std;



int main()
{
    CVector v0{ 0, 1, 2 };
    CVector v1{ 1, 2, 3 };

    cout << "v0 :\t\t";      v0.print();
    cout << "v1 :\t\t";      v1.print();

    const CVector v2 = -v0;   // CVector v2 = v0.operator+(v1);
    cout << "-v0 :\t\t";      v2.print();

    const CVector v3 = +v1;       // CVector v3 = v1.operator-();
    cout << "+v1 :\t\t";      v3.print();

    CVector v4 = v0 + v1;             // CVector v4 = v0.operator+();
    cout << "v0 + v1 :\t";      v4.print();

    CVector v5 = v0 - v1;             // CVector v5 = v0.operator-();
    cout << "v0 - v1 :\t";      v5.print();

    double re6 = v0 * v1;         // CVector v6 = v0.operator+(v1);
    cout << "v0 * v1 :\t" << re6 << endl;

    CVector v7 = v0 * 3;         // CVector v7 = v0.operator-(v1);
    cout << "v0 * 3 :\t";      v7.print();

    CVector v8 = 3 * v1;         // res = v0.operator*(v1);
    cout << "3 * v1 :\t";      v8.print();

    CVector v9 = v1 / 3;          // CVector v9 = v0.operator*(3.0);
    cout << "v1 / 3 : ";      v9.print();

    CVector v10 = ++v1;         // CVector v10 = v0.operator/(3.0);
    cout << "++v1 :\t\t";      v10.print();

    CVector v11 = --v1;
    cout << "--v1 :\t\t";      v11.print();

    CVector v12 = v0++;
    cout << "v0++ :\t\t";      v12.print();

    CVector v13 = v0--;
    cout << "v0-- :\t\t";      v13.print();

    return 0;
}
