#include <iostream> 
#include <string>
#include "Task1.h"
using namespace std;

void MotorVehicle::print()
{
	cout << "the size of the engine in litter is " <<engine.sizeInLitter << endl;
	cout << "the number of the cylinder of the engine is " << engine.numberOfCylinders << endl;
	cout << "the color of the body is " << body.color << endl;
	cout << "the witdrh of the body is " << body.width << endl;
	cout << "the height of the body is " << body.height << endl;
	cout << "the name of the ower is" << owner.name << endl;
	cout << "the adress of the ower is" << owner.adress << endl;
	cout << "Is the ower ALLOWER to drive: " << boolalpha << owner.allowedToDrive << endl;
	cout << "the number of the tires is " << numberOfTires << endl;
	for (int i = 0; i < numberOfTires; i++)
	{
		cout << "the diameter of" << i << "th tire is" << tireDiameter[i] << endl;
	}
	cout << "the model of the car is" << model << endl;
}

/*
int main()
{

	MotorVehicle Car1;
	int numberOfCylinders, numberOfTires;
	string color,name,adress, model;
	float width,height,sizeInLitter;
	bool allowedToDrive;


	


	cout << "enter the size of the engine in litter"<<endl;
	cin >> sizeInLitter;
	Car1.engine.sizeInLitter = sizeInLitter;

	cout << "enter the number of the cylinder of the engine" << endl;
	cin >> numberOfCylinders;
	Car1.engine.numberOfCylinders = numberOfCylinders;

	cout << "enter the color of the body" << endl;
	cin >> color;
	Car1.body.color = color;

	cout << "enter the witdrh of the body" << endl;
	cin >> width;
	Car1.body.width = width;

	cout << "enter the height of the body" << endl;
	cin >> height;
	Car1.body.height = height;

	cout << "enter the name of the ower" << endl;
	cin >> name;
	Car1.owner.name = name;

	cout << "enter the adress of the ower" << endl;
	cin >> adress;
	Car1.owner.adress = adress;

	cout << "Is the ower ALLOWER to drive?if true (press 1) Else (0)" << endl;
	cin >> allowedToDrive;
	Car1.owner.allowedToDrive = allowedToDrive;
	cout << "Enter the number of the tires" << endl;
	cin >> numberOfTires;
	Car1.numberOfTires = numberOfTires;
	Car1.tireDiameter = new float[numberOfTires];
	for (int i = 0; i < numberOfTires; ++i)
	{
		cout << "enter the diameter of " << i << "th tire" << endl;
		cin >> Car1.tireDiameter[i];
	}
	cout << "enter the model of the car" << endl;
	cin >> model;
	Car1.model = model;
	Car1.print();

	MotorVehicle Car2;
	cout << "Now enter information of the second car" << endl;
	cout << "enter the size of the engine in litter" << endl;
	cin >> sizeInLitter;
	Car2.engine.sizeInLitter = sizeInLitter;

	cout << "enter the number of the cylinder of the engine" << endl;
	cin >> numberOfCylinders;
	Car2.engine.numberOfCylinders = numberOfCylinders;

	cout << "enter the color of the body" << endl;
	cin >> color;
	Car2.body.color = color;

	cout << "enter the witdrh of the body" << endl;
	cin >> width;
	Car2.body.width = width;

	cout << "enter the height of the body" << endl;
	cin >> height;
	Car2.body.height = height;

	cout << "enter the name of the ower" << endl;
	cin >> name;
	Car2.owner.name = name;

	cout << "enter the adress of the ower" << endl;
	cin >> adress;
	Car2.owner.adress = adress;

	cout << "Is the ower ALLOWER to drive? true/false" << endl;
	cin >> allowedToDrive;
	Car2.owner.allowedToDrive = allowedToDrive;

	cout << "Enter the number of the tires" << endl;
	cin >> numberOfTires;
	Car2.numberOfTires = numberOfTires;
	for (int i = 0; i < numberOfTires; i++)
	{
		cout << "enter the diameter of" << i << "th tire" << endl;
		cin >> Car2.tireDiameter[i];
	}
	cout << "enter the model of the car" << endl;
	cin >> model;
	Car2.model = model;
	Car2.print();
}
*/