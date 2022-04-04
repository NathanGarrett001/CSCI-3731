#include "vector.h"
#include "planet.h"
#include "satellite.h"
#include <iostream>

int main()
{
	auto x = 0.0;
	auto y = 0.0;
	auto z = 0.0;
	

	vector position(0.0, (400000.0 + 6378000.0), 0.0);
	vector velocity(7660.0, 0.0, 0.0);
	planet earth(5972000000000000000000000.0, 6378000.0);
	satellite iss(position, velocity, earth);
	bool crash = false;
	int timeInt = 1;

	while (iss.update(timeInt)) {
		std::cout << "Position = " << iss.getPosition() << ", Velocity = " << iss.getVelocity() << "" << std::endl;
	}

	std::cout << "You crashed" << std::endl;

}
