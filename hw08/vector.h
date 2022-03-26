#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class planet;
class satellite;

class vector {

private:
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;

public:
	vector();
	vector(double x, double y, double z);
	virtual ~vector();

	double getX() const;
	double getY() const;
	double getZ() const;

	void setPoints(double x, double y, double z);
	void setAccel(double z);
	void setxVel(double x);
	void setyPos(double y);

	vector operator+(const vector vect);
	vector operator-(const vector vect);
	vector & operator+=(const vector vect);
	vector operator*(const vector v1);
	double multVects(vector v1, vector v2);

	friend std::ostream& operator<<(std::ostream& out, const vector& vect);

};

#endif