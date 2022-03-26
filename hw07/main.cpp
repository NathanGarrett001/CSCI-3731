#include "vector.h"
#include <iostream>

int main()
{
	auto x = 0.0;
	auto y = 0.0;
	auto z = 0.0;
	vector v3;

        std::cout << "Welcome to the Vectornator 9000!"<<std::endl;
	std::cout << "Please enter your first vector points"<<std::endl;
	std::cin >> x >> y >> z;

	vector v1(x, y, z);

	std::cout << "Please enter your second vector points" << std::endl;
        std::cin >> x >> y >> z;

	vector v2(x, y, z);

	std::cout << "First I will add the two vectors." << std::endl;
	v3 = v1.operator+(v2);
	std::cout << "You have a new vector now and its coordinates are : x = " << v3.getX() << ", y = " << v3.getY() << ", z = " << v3.getZ() << std::endl;
	
	std::cout << "Now I will subtract the two original vectors." << std::endl;
	v3 = v1.operator-(v2);
	std::cout << "Your subtracted vector coordinates are : x = " << v3.getX() << ", y = " << v3.getY() << ", z = " << v3.getZ() << std::endl;

	std::cout << "Next is to use the += operator to increase the values of a vector by one." << std::endl;
	v1.operator+=(v1);
	std::cout << "The new points for your first vector are : x = " << v1.getX() << ", y =  " << v1.getY() << ", z = " << v1.getZ() << "." << std::endl;

	std::cout << "Next we will multiply a vector by a double, 2.0" << std::endl;
	v3 = v3.operator*(v1);
	std::cout << "The new points for your first vector are : x = " << v3.getX() << ", y = " << v3.getY() << ", z = " << v3.getZ() << "." << std::endl;

	std::cout << "Finally, we will now multiply the two vectors with each other!" << std::endl;
	std::cout << "REMINDER, current values for first vector: x=" << v1.getX() << ", y=" << v1.getY() << ", z=" << v1.getZ() << "." << std::endl;
	std::cout << "REMINDER, current values for second vector: x=" << v2.getX() << ", y=" << v2.getY() << ", z=" << v2.getZ() << "." << std::endl;
	std::cout << "The dot Product of your two points is " << v3.multVects(v1, v2) << ". " << std::endl;

}

