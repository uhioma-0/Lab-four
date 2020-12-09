#include <iostream> 
#include <string>
#include"Task 2.h"
class Polyline
{
public:
	Point2D* arrLines;
	int nPoints;
	int arraySize;
	void add_Point(Point2D p);
	void print();
	float total_length();
	int get_size();
	bool has_point();
	void delete_arr();
	Point2D get_element(int index);

	Polyline(int size)
	{
		arrLines = new Point2D[size];
		nPoints = 0;
		arraySize = size;
	}
	~Polyline()
	{}
};