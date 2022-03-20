#include "vector.h"

vector::vector() {

}

vector::vector(double* x, double* y, double* z) {

	this->x = *x;
	this->y = *y;
	this->z = *z;

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

void vector::addVect(vector v1, vector v2, double* x_ptr, double* y_ptr, double* z_ptr) {

	*x_ptr = v1.getX() + v2.getX();
	*y_ptr = v1.getY() + v2.getY();
	*z_ptr = v1.getZ() + v2.getZ();

	this->x = *x_ptr;
	this->y = *y_ptr;
	this->z = *z_ptr;

}

void vector::subVect(vector v1, vector v2, double* x_ptr, double* y_ptr, double* z_ptr) {

	*x_ptr = v1.getX() - v2.getX();
	*y_ptr = v1.getY() - v2.getY();
	*z_ptr = v1.getZ() - v2.getZ();

	this->x = *x_ptr;
	this->y = *y_ptr;
	this->z = *z_ptr;
}

vector& vector::operator+=(const vector vect) {

	x += vect.getX();
	y += vect.getY();
	z += vect.getZ();

	return *this;

}

void vector::times2Vect(vector vect, double* x_ptr, double* y_ptr, double* z_ptr) {

	double twice = 2.0;
	*x_ptr = vect.getX() * twice;
	*y_ptr = vect.getY() * twice;
	*z_ptr = vect.getZ() * twice;

	this->x = *x_ptr;
	this->y = *y_ptr;
	this->z = *z_ptr;
}

double vector::multVects(vector v1, vector v2, double* x_ptr, double* y_ptr, double* z_ptr) {

	double dotProd = 0.0;

	*x_ptr = v1.getX() * v2.getX();
	*y_ptr = v1.getY() * v2.getY();
	*z_ptr = v1.getZ() * v2.getZ();

	dotProd = *x_ptr + *y_ptr + *z_ptr;

	return dotProd;

}
