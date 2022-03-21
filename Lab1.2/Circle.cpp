#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::setx(double value)
{
	x = value;
}
void Circle::sety(double value)
{
	y = value;
}

bool Circle::setR(double value)
{
	if(value > 0){

		R = value;
		return true;
	}
	else {
		return false;
	}

}
bool Circle::Init(double x, double y, double R)
{
	setx(x);
	sety(y);
	return setR(R);
}

void Circle::Read()
{
	double x;
	double y;
	double R;
	cout << " x =  "; cin >> x;
	cout << " y =  "; cin >> y;
	do
	{
		cout << " R = ? "; cin >> R;
	} while (!Init(x, y, R));
}
void Circle::Display() const
{
	cout << " x = " << x << endl;
	cout << " y = " << y << endl;
	cout << " R = " << R << endl;
}

double Circle::Square() const {
	return 3.14 * R * R;
}

double Circle::Length() const {
	return 2* 3.14* R;
}
