// CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>

#define preprocessorDirective1 3656
#define preprocessorDirective2 std:cout

int old()
{
	std::string str("894");
	int i;
	std::stringstream(str) >> i;
	std::cout << i << std::endl;

	int x = 20;
	int &p = x;

	std::cout << x << std::endl;
	std::cout << &p << std::endl;

	return 0;
}

int pointers()
{
	int *i = new int();
	*i = 10;

	std::cout << *i << std::endl;
	std::cout << i << std::endl;
	std::cout << &i << std::endl;

	int*p = new int();
	*p = 7;
	delete p;
	p = nullptr;

	return 0;
}

class Vehicle
{
public:
	Vehicle();
	Vehicle(int speed, int age);
	int speed;
	float age;

	static int count;
	
	void PrintFunc();

private:
	int acceleration;
};

Vehicle::Vehicle()
{
	speed = 500;
	age = 23.5;
}

Vehicle::Vehicle(int speed, int age)
{
	this->speed = speed;
	this->age = age;
}

void Vehicle::PrintFunc()
{
	std::cout << speed << ", " << age << std::endl;
}

class Car : public Vehicle
{
public:
	bool isBroken;
};

class Truck : public Car
{
public:
	char truckChar;
};

int main(int argc, const char * argv[])
{
	Vehicle bmw, toyota;
	bmw.speed = 250;
	toyota.speed = 300;

	Vehicle* bmw = &bmw;

	std::cout << bmw.speed << std::endl;
	std::cout << toyota.speed << std::endl;

	return 0;
}