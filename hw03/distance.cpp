//Name: Nathan Garrett
//Date: 02/04/2022

#include "distance.h"
#include <cstdio>
#include <math.h>
#define _USE_MATH_DEFINES
#include <cmath>

void distance(double angle, double* x_ptr, double* y_ptr) {

	angle = angle * (M_PI / 180.0);

	double x = 0.00;
	double y = 0.00;
	double max_height = 0.00;
	double vx = 250.0 * cos(angle);
	double vy = 250.0 * sin(angle);
	double velocity = 250.0;
	double drag = 0.0;
	double ax = 0.00;
	double ay = 0.00;
	int time = 0;

	while (y >= 0) {

		x = x + vx;
		y = y + vy;

		velocity = sqrt((vx * vx) + (vy * vy));

		drag = ((1.0 / 2.0) * 0.45 * 0.03 * 1.2 * (velocity * velocity) / 30.0);

		ax = (-drag * vx) / velocity;
		ay = (-9.81 - (drag * vy)) / velocity;


		vx = vx + ax * 1;
		vy = vy + ay * 1;

		if (max_height <= y) {
			max_height = y;
		}

		time++;
	}
	
	*x_ptr = x;
	*y_ptr = max_height;


}