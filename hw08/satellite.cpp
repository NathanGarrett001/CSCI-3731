#include "satellite.h"
#include "planet.h"
#include "vector.h"

vector position;
vector velocity;
double earthSize = 0.0;

satellite::satellite() {

}

satellite::satellite(vector& position, vector& velocity, planet& planetSize) {

	this->position = position;
	this->velocity = velocity;
	this->earthSize = planetSize.getR();

}

satellite::~satellite() {

}

double satellite::getPosition() {
	return position.getY();
}

double satellite::getVelocity() {
	return velocity.getX();
}

bool satellite::update(int timeInterval) {

	vector acc;

	if (!earth.accel(position, acc)) {
		std::cout << "test" << std::endl;
		return false;
	}

	position = position + velocity * timeInterval;
	velocity = velocity + acc * timeInterval;

	return true;

}
