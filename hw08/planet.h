
#ifndef PLANET_H
#define PLANET_H
#include "vector.h"


class planet {

private:
    const double G = 0.0000000000667408;
	double M = 5972000000000000000000000.0;
	double radius = 6378000.0;
	vector* r = nullptr;

public:
	planet();
	planet(double m, double radius);
	virtual ~planet();

	double getR() const;
	bool accel(const vector& r, vector& accel) const;

};

#endif
