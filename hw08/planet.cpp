#include "planet.h"
#include "vector.h"
#include "satellite.h"
#include <math.h>

static const double G = 0.0000000000667408;
const double radius = 6378000.0;
const double M = 5972000000000000000000000.0;

planet::planet() {

}

planet::planet(double M, double radius) {

	this->M = M;
	this->radius = radius;
}

double planet::getR() const {
	return radius;
}

planet::~planet() {

}

bool planet::accel(const vector& r, vector& accel) const {


	if (r * r < (radius * radius)) {
		return false;
	}
	accel = r * (-(G * M) / (r * r * sqrt(r * r)));
	return true;
}
