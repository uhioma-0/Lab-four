#include <iostream> 
#include <string>
#include"Task3_revised.h"
using namespace std;

void Polyline::add_Point(Point2D Point)
{
	if (nPoints == arraySize)
		cout << "array is full" << endl;
	else {
		arrLines[nPoints] = Point;
		nPoints += 1;
	}
}

void Polyline::print()
{
	for (int i = 0;i < nPoints;i++)
		cout << arrLines[i].toString() << "\n";
	cout << endl;
}

float Polyline::total_length()
{
	float length=0;
	if (nPoints < 2)
	{
		cout << "Unable to calculate length for a point, need two point to create a path" << endl;
		return 0;
	}
	else
	{
		for (int i = 0;i < nPoints-1;i++)
			{
				length +=  (arrLines[i].distance((arrLines[i + 1].x), (arrLines[i + 1].y)));
			}
		return length;
	}
	
}

int Polyline::get_size()
{
	return nPoints;
}

bool Polyline::has_point()
{
	if (nPoints == 0)
		return false;
	else
		return true;
}

void Polyline::delete_arr()
{
	if (this->has_point() == true)
	{
		arrLines[nPoints].remove();
		nPoints += -1;
	}
	else
		cout << "the array doesnt have any point to delete" << endl;
}
	


Point2D Polyline::get_element(int index)
{
	if (index > arraySize)
		cout << "Wrong index!" << endl;
	else
		return arrLines[index];
}
int main()
{
	Polyline GoteborgAppotek(7);
	Point2D firstLocation(11.5, 31.21);
	Point2D secondLocation(31.21, 12.17);
	Point2D threedLocation(23.12, 14.5);

	GoteborgAppotek.add_Point(firstLocation);
	GoteborgAppotek.add_Point(secondLocation);
	GoteborgAppotek.add_Point(threedLocation);
	cout<<boolalpha << GoteborgAppotek.has_point() << endl;
	cout<< GoteborgAppotek.get_size() << endl;
	cout << GoteborgAppotek.total_length() << endl;
	GoteborgAppotek.print();
	GoteborgAppotek.delete_arr();
	GoteborgAppotek.delete_arr();
	GoteborgAppotek.print();
	GoteborgAppotek.delete_arr();
	GoteborgAppotek.delete_arr();
	GoteborgAppotek.print();


}
