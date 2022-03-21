#pragma once
class Circle
{
private:
	double x;
	double y;
	double R;
public:
	double getx() const { return x; }
	double gety() const { return y; }
	double getR() const { return R; }

	void setx(double);
	void sety(double);
	bool setR(double);


	bool Init(double x, double y, double R);
	void Read();
	void Display() const;

	double Square() const;
	double Length() const;
	
};

