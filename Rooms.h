#pragma once
#include <iostream>
using namespace std;
class Rooms
{
public:
	Rooms(double r_lenght, double r_wigdt, double r_height, double r_usefulArea, double r_allArea);
	double getHeight() const;
	double getWidth() const;
	double getLength() const;
	double getTotalArea() const;
	double getUsefulWallArea() const;
	void setHeight(double height);
	void setWidth(double width);
	void setLength(double length);
private:
	double r_lenght, r_wigdt, r_height, r_usefulArea, r_allArea;
	void calculateTotalArea();

	void calculateUsefulWallArea();
};


