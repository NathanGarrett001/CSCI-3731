#ifndef SATELLITE_H
#define SATELLITE_H

class planet;
class vector;

class satellite {

private:

	planet* planetSize;
	vector* yPos;
	vector* zAccel;
	double inityPos = 0.0;
	double initVel = 0.0;
	double earthSize = 0.0;
	double updateVel = 0.0;
	double updatePos = 0.0;

public:
	satellite();
	satellite(vector & yPos, vector & zAccel, planet& planetSize);
	virtual ~satellite();

	void update(vector & yPos, vector & zAccel,vector& xVel, int timeInterval);




};




#endif
