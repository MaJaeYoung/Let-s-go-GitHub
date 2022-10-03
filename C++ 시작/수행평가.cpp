 // 9.29(목)2교시 C++수행평가 복소수 사칙연산 
//#include <iostream>       
//
//using namespace std;
//
//class Complex209 
//{
//	double real;
//	double imag;
//public:
//
//	Complex209();
//	Complex209(double real, double imag);
//
//	void showme();
//
//	Complex209 operator + (Complex209& c);
//	Complex209 operator - (Complex209& c);
//	Complex209 operator * (Complex209& c);
//	Complex209 operator * (double d);
//	Complex209 operator / (Complex209& c);
//};
//
//Complex209 Complex209::operator + (Complex209& c)
//{
//	return Complex209(real + c.real, imag + c.imag);
//}
//
//Complex209 Complex209::operator - (Complex209& c) 
//{
//	return Complex209(real - c.real, imag - c.imag);
//}
//
//Complex209 Complex209::operator * (Complex209& c)
//{
//	return Complex209(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
//}
//
//Complex209 Complex209::operator * (double d) 
//{
//	return Complex209(real * d, imag * d);
//}
//
//Complex209 Complex209::operator / (Complex209& c)
//{
//	Complex209 conju(c.real, -c.imag);
//	double d = 1 / (c.real * c.real + c.imag * c.imag);
//
//	Complex209 tmp(real, imag);
//
//	tmp = tmp.operator * (conju);
//
//	return tmp.operator * (d);
//}
//
//Complex209::Complex209() 
//{
//	real = imag = 0.;
//}
//
//Complex209::Complex209(double re, double im) 
//{
//	real = re;
//	imag = im;
//}
//
//void Complex209::showme() 
//{
//	cout << "(" << real << ", " << imag << "i) \n";
//}
//
//int main() {
//	Complex209 result;
//	Complex209 c1(-2, -6);
//	Complex209 c2(3, 4);
//
//	result = c1 + c2; result.showme();
//	result = c1 - c2; result.showme();
//	result = c1 * c2; result.showme();
//	result = c1 / c2; result.showme();
//}