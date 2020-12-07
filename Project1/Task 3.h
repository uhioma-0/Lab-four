#include <iostream> 
#include <string>
#include <cmath>
#include <math.h>
class Polyline
{
public:
	vector*arrLines;
	void add_Point(vector p);
	void print();
	float total_length();
	int get_size();
	bool is_empty();
	void delete_arr(int maxLens);
	float get_element(int index);

	Polyline()
	{
		vector pFinal;
		pFinal.aPoint.x = -1;//to indicate this is the end
		pFinal.aPoint.y = -1;
		int maxLens = 4;
		arrLines = new vector [maxLens+1];//the end is indeicated by negative cordination
		arrLines[maxLens + 1] = pFinal;
	}
};
