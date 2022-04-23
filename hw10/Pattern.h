#ifndef PATTERN_H
#define PATTERN_H
#include <string>

class Pattern {

private:

	std::string patn;
	int noTimes;
	double prob;

public:
	Pattern();
	Pattern(std::string patn, int noTimes);
	void setProb(double prob);
	double getProb();
	int getCount();
	virtual ~Pattern();
};

#endif // !PATTERN_H
