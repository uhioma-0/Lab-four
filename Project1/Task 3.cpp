#include <iostream> 
#include <string>
#include "Task 2.h"
#include"Task 3.h"
#include <math.h>
#include <typeinfo>
using namespace std;

void Polyline::add_Point(vector p)
{

	int maxLens = Polyline::get_size();
	for (int i = 0; i < maxLens; i++)
	{
		if (((arrLines[i])).aPoint.x != -1)
			(arrLines[i]) = p;
		else
			cout << "the arr is ful!" << endl;
	}
}

void Polyline::print()
{
	int index = 0;
	while (((arrLines[index])).aPoint.x != -1)
	{
		float xo = ((arrLines[index])).aPoint.x;
		float yo = ((arrLines[index])).aPoint.y;
		Point2D p(xo, yo);
		cout << p.toString() << " ";
	}
	cout << endl;

}

float Polyline::total_length()
{
	float totalDistance = 0;
	int index = 0;
	while (((arrLines[index])).aPoint.x != -1)
	{
		float xo = ((arrLines[index])).aPoint.x;
		float yo = ((arrLines[index])).aPoint.y;
		Point2D p(xo,yo);
		float xAxis = ((arrLines[index+1])).aPoint.x;
		float yAxis = ((arrLines[index+1])).aPoint.y;
		totalDistance +=p.distance(xAxis, yAxis);
		index += 1;
	}
	return totalDistance;
}

int Polyline::get_size()
{
	int total = 0;
	int index = 0;
	while (((arrLines[index+1])).aPoint.x != -1)
	{
		total += 1;
		index += 1;
	}
	return total;
}

bool Polyline::is_empty()
{
	bool contain = false;
	int maxLens = Polyline::get_size();
	for (int i = 0; i < maxLens; i++)
	{
		if (typeid(((arrLines[i])).aPoint.x).name()== "float")
			contain = contain || true;
		return contain;
	}		
}

void Polyline::delete_arr(int maxLens)
{
	//delete arrLines[maxLens - 1];

}

float Polyline::get_element(int index)
{
return (((arrLines[index])).aPoint.x, ((arrLines[index])).aPoint.y);
}
/*int main()
{
	vector p1;
	p1.aPoint.x = 5;
	p1.aPoint.y= 3;
	vector p2;
	p2.aPoint.x = 10;
	p2.aPoint.y = 1;
	vector newPoint = p2;
	vector newPoint2;
	newPoint2.aPoint.x = p1.aPoint.x + p2.aPoint.x;
	newPoint2.aPoint.y = p1.aPoint.y + p2.aPoint.y;
	Polyline array;
	array.add_Point(p1);
	array.add_Point(p2);
	array.add_Point(newPoint);
	array.add_Point(newPoint2);
	array.print();



}*/