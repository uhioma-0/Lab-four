#include <iostream> 
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

class Point2D
{
public:
	float x;
	float y;

	Point2D()
	{
		x = 0;
		y = 0;
	}
	Point2D(float a, float b)
	{
		x = a;
		y = b;
	}
	Point2D(const Point2D& p) {
		x = p.x;
		y = p.y;

	}
	float distance(float point1, float point2)
	{
		float distance = sqrt(pow((x - point1), 2) + pow((y - point2),2));
		
		return distance;

	}
	string toString()
	{
		string strPoints = "[";
		strPoints += to_string(x);
		strPoints += " ,";
		strPoints += to_string(y);
		strPoints += "]";
		return strPoints;

	}
};
class vector
{
public:
	Point2D aPoint;
};