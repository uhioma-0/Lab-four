#include <iostream> 
#include <string>
using namespace std;
class MotorVehicle
{
public:
	string engine;
	string body;
	string owner;
	float* tireDiameter;
	int numberOfTires;
	string model;
	MotorVehicle()
	{
		engine = "defaultEngine";
		body = "defaultBody";
		owner = "defaultOwer";
		numberOfTires = 4;
		model = "defaultModel";

		
	}

};

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
			allowedToDrive= false;
		}

};