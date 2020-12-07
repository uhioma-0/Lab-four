#include <iostream> 
#include <string>
#include "Task 2.h"
#include"Task 3.h"
#include <math.h>
using namespace std;

void Polyline::add_Point(vector *arr,vector p)
{

	int maxLens = Polyline::get_size();
	for (int i = 0; 9 < maxLens; i++);
	{
		if (arr[i] == NULL)
			arr[i] = p;
		else
			cout << "the arr is ful!" << endl;
	}
}

float Polyline::get_element(vector* arr, int index)
{
Point2D point=*arr[index];
}
