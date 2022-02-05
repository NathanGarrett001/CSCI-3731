//Name: Nathan Garrett
//Date: 02/04/2022

#include <cstdio>
#include "distance.h"
using namespace std;

int main(int argc, char** argv) {
	
	double angle = 0.00;

	double x;
	double y;

	printf("Angle | Max Distance | Max Height\n");
	

	while(angle <= 9.00) {

		distance(angle, &x, &y);
		printf("%.2lf    %.2lf        %.2lf\n", angle, x, y);

		angle = angle + 1;
	}
	while (angle <= 85.00) {

		distance(angle, &x, &y);
		printf("%.2lf   %.2lf        %.2lf\n", angle, x, y);

		angle = angle + 1;
	}
	while (angle <= 90.00) {

		distance(angle, &x, &y);
		printf("%.2lf   %.2lf         %.2lf\n", angle, x, y);

		angle = angle + 1;
	}
}