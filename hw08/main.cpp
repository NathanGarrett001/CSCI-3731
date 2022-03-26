#include "vector.h"
#include "planet.h"
#include "satellite.h"
#include <iostream>

int main()
{
	auto x = 0.0;
	auto y = 0.0;
	auto z = 0.0;
	

	vector yPos(0.0, 400000.0, 0.0);
	vector xVel(7660.0, 0.0, 0.0);
	vector zAccel(0.0, 0.0, 0.0);
	planet earth(5972000000000000000000000.0);
	satellite iss(yPos, xVel, earth);
	bool crash = false;
	int timeInt = 1;

	while (!crash) {

		crash = earth.accel(yPos, zAccel);

		iss.update(yPos, zAccel, xVel, timeInt);




	}

}
