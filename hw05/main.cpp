#include <cstdio>
#include "distance.h"
using namespace std;

int main(int argc, char** argv) {
	
	double angle;

	double x;
	double y;
	bool oob = false;

	printf("Please enter angle: ");
	scanf_s("%lf", &angle);
	if (angle < 0 || angle > 90) {
		printf("ERROR:  You entered an angle outside acceptable range.\n");
		exit(0);
	}


	int h = 40;
	int w = 115;
	char** array = new char*[h];
	array[0] = new char[w*h];
	for (int j = 1; j < h; j++) {
		array[j] = array[j-1] + w;
	}
	for(int j = 1; j < h; j++) {
		for (int i = 1; i < w; i++) {
			array[j][i] = ' ';
		}
	}
	distance(array, angle, &x, &y);
	graph(array, w, h);
	delete[] * array;
	delete[] array;
}