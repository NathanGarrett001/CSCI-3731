#include "Pattern.h"
#include <string>
#include <vector>
#include <iostream>


Pattern::Pattern() {

}
Pattern::Pattern(std::string patn, int noTimes) {
	
	this->patn = patn;
	this->noTimes = noTimes;
	
}
Pattern::~Pattern() {

}
void Pattern::setProb(double prob) {
	this->prob = prob;
}
double Pattern::getProb() {
	return prob;
}
int Pattern::getCount() {
	return noTimes;
}
std::string Pattern::getString() {
	return patn;
}