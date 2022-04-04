#ifndef SATELLITE_H
#define SATELLITE_H
#include "planet.h"

class satellite {

private:

	planet earth;
	vector position;
	vector velocity;
	double earthSize = 0.0;

public:
	satellite();
	satellite(vector & position, vector & velocity, planet& planetSize);
	virtual ~satellite();
	double getPosition();
	double getVelocity();

	bool update(int timeInterval);
};

#endif
