#ifndef VECTOR_H
#define VECTOR_H

class vector {

private:
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;

public:
	vector();
	vector(double* x, double* y, double* z);
	virtual ~vector();

	double getX() const;
	double getY() const;
	double getZ() const;

	void setPoints(double x, double y, double z);

	void addVect(vector v1, vector v2, double* x_ptr, double* y_ptr, double* z_ptr);
	void subVect(vector v1, vector v2, double* x_ptr, double* y_ptr, double* z_ptr);
	vector & operator+=(const vector vect);
	void times2Vect(vector vect, double* x_ptr, double* y_ptr, double* z_ptr);
	double multVects(vector v1, vector v2, double* x_ptr, double* y_ptr, double* z_ptr);

};

#endif
