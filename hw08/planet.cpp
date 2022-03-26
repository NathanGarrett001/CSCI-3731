#include "planet.h"
#include "vector.h"
#include "satellite.h"
#include <math.h>

const double g = .0000000000667408;
const double r = 6378000;

planet::planet() {

}

planet::planet(double m) {

	this->m = m;
}

double planet::getR() const {
	return r;
}

planet::~planet() {

}

bool planet::accel(vector& yPos, vector& zAccel) {

	double alt = yPos.getY();
	double acceleration = 0.0;
	bool crash = false;

	double altSquared = alt * alt;

	if (altSquared < (r * r)) {
		return true;
	}
	acceleration = -((g * m) / (altSquared * sqrt(altSquared))) * alt;
	zAccel.setAccel(acceleration);
	return false;
}


