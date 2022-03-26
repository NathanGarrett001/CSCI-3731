#include "satellite.h"
#include "planet.h"
#include "vector.h"

double inityPos = 0.0;
double initVel = 0.0;
double earthSize = 0.0;
double updatePos = 0.0;
double updateVel = 0.0;

satellite::satellite() {

}

satellite::satellite(vector& yPos, vector& xVel, planet& planetSize) {

	this->inityPos = yPos.getY();
	this->initVel = xVel.getX();
	this->earthSize = planetSize.getR();

}

satellite::~satellite() {

}

void satellite::update(vector& yPos, vector& zAccel,vector& xVel, int timeInterval) {

	this->updateVel = xVel.getX() + zAccel.getZ() * timeInterval;
	this->updatePos = yPos.getY() + xVel.getX() * timeInterval;

	xVel.setxVel(updateVel);
	yPos.setyPos(updatePos);

}
