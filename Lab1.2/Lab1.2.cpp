#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
	Circle g;
	g.Read();
	g.Display();
	cout << g.Square() << endl;
	cout << g.Length() << endl;
	return 0;
}