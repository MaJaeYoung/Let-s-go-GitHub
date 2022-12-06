// CVector.cpp

#include "CVector.h"
#include <Math.h>

void CVector::print() const
{
	cout << "[ x : " << _x << ", y : " << _y << ", z : " << _z << " ]\n";
}

CVector CVector::operator + (CVector& v) {
	return CVector(_x + v._x, _y + v._y, _z + v._z);
}

CVector CVector::operator - (CVector& v) {
	return CVector(_x - v._x, _y - v._y, _z - v._z);
}

CVector CVector::operator + () {
	return *this;
}

CVector CVector::operator - () {
	return CVector(-_x, -_y, -_z);
}

double CVector::operator * (CVector& v) {
	return _x * v._x + _y * v._y + _z * v._z;

}

CVector CVector::operator * (double d) {
	return CVector(_x * d, _y * d, _z * d);
}

CVector CVector::operator / (double d) {
	return CVector(_x / d, _y / d, _z / d);
}

CVector CVector::operator ++ () {
	double mag = sqrt(_x * _x + _y * _y + _z * _z);
	CVector unit(_x / mag, _y / mag, _z / mag);
	*this = *this + unit;
	return *this;
}

CVector CVector::operator -- () {
	double mag = sqrt(_x * _x + _y * _y + _z * _z);
	CVector unit(_x / mag, _y / mag, _z / mag);
	*this = *this - unit;
	return *this;
}

CVector CVector::operator ++ (int d) {
	CVector result = *this;
	++* this;
	return result;
}

CVector CVector::operator -- (int d) {
	CVector result = *this;
	--* this;
	return result;
}

CVector operator * (double d, CVector& v) {
	return v * d;
}
