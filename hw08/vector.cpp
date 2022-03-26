#include "vector.h"
#include <iostream>

vector::vector() {

}

vector::vector(double x, double y, double z) {

	this->x = x;
	this->y = y;
	this->z = z;

}

vector::~vector() {

}

double vector::getX() const {

	return x;

}

double vector::getY() const {

	return y;
}

double vector::getZ() const {

	return z;

}

void vector::setPoints(double x, double y, double z) {

	this->x = x;
	this->y = y;
	this->z = z;

}
void vector::setAccel(double z) {
	this->z = z;
}

std::ostream& operator<<(std::ostream& out, vector& vect) {
	out << "(" << vect.getX() << ", " << vect.getY() << ")";
	return out;
}

vector vector::operator+(const vector vect) {

	return vector(x + vect.x, y + vect.y, z + vect.z);

}

vector vector::operator-(const vector vect) {

	return vector(x - vect.x, y - vect.y, z - vect.z);

}

vector& vector::operator+=(const vector vect) {

	x += vect.getX();
	y += vect.getY();
	z += vect.getZ();

	return *this;

}

vector vector::operator*(const vector vect) {

	return vector(x * vect.x, y * vect.y, z * vect.z);

}

double vector::multVects(vector v1, vector v2) {

	double dotProd = 0.0;
	double x = 0.0, y = 0.0, z = 0.0;

	x = v1.getX() * v2.getX();
	y = v1.getY() * v2.getY();
	z = v1.getZ() * v2.getZ();

	dotProd = x + y + z;

	return dotProd;

}
