
#ifndef PLANET_H
#define PLANET_H

class vector;
class satellite;

class planet {

private:

	double m = 0.0;
	double r = 0.0;
	vector* yPos = nullptr;
	vector* zAccel = nullptr;

public:
	planet();
	planet(double m);
	virtual ~planet();

	double getR() const;
	bool accel(vector& yPos, vector& zAccel);

};

#endif
