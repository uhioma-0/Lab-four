#include <iostream> 
#include <string>
using namespace std;

class Engine
{
public:
	float sizeInLitter;
	int numberOfCylinders;
	Engine()
	{
		sizeInLitter = 25.0;
		numberOfCylinders = 8;
	}
};

class Body
{
public:
	string color;
	float width;
	float height;
	Body()
	{
		color = "black";
		width = 4.0;
		height = 2.0;
	}

};

class Person
{
public:
	string name;
	string adress;
	bool allowedToDrive;
	Person() {
		name = "trump";
		adress = "halloffame";
		allowedToDrive = false;
	}

};
class MotorVehicle
{
public:
	Engine engine;
	Body body;
	Person owner;
	float* tireDiameter;
	int numberOfTires;
	string model;
	MotorVehicle()
	{
		model = "defaultModel";
		numberOfTires=4;
		float* tireDiameter;
	}
	~MotorVehicle()

	{
		delete[] tireDiameter;
	}
	void print();
};
