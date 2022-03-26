
#ifndef PLANET_H
#define PLANET_H

class vector;

class planet {

private:

	double m = 0.0;
	double r = 0.0;
	vector* p1 = nullptr;
	vector* p2 = nullptr;

public:
	planet();
	planet(double m);
	virtual ~planet();

	bool accel(vector& yPos, vector& zAccel);

};

#endif