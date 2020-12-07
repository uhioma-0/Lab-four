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
	void distance(float point1, float point2)
	{
		float distance = sqrt(pow((x - point1), 2) + pow((y - point2),2));
		cout << "the distance between p1 and p2 is " << distance << endl;

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