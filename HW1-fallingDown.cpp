//author : Nathan Garrett
//date   : 01-13-2022
//I made this with the full words for the variables as to
//not confuse myself and make it really clear from the
//code itself.

#include <cstdio>

int main(int argc, char** argv) {

	int    time = 0;
	int    area = 1;
	int    mass = 80;
	double height = 1000.0;
	double velocity = 0.0;
	double gravity = 9.81;
	double drag = 1.0;
	double density = 1.2;
	double acceleration = 0.0;

	while (height >= 0) {
		height = height + velocity;

		acceleration = -gravity + ((1/2) * drag * area * density * (velocity * velocity)) / mass;

		velocity = velocity + acceleration;

		time = time + 1;
	}
	printf("Final time from 1000m :  %i seconds.\n", time);

}
//looked up the real world calculation and it should be 14.286 seconds.  I'll take it!
//The current record holder for the highest skydive is Felix Baumgartner at an altitude of
//127,852 feet!  I watched this live online when it happened and it was absolutely crazy to see
//someone jumping from SPACE!