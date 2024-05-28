#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Rooms
{
public:
	Rooms(double lenght, double wigdt, double height, double usefulAreaFloor, double allArea, double usefulAreaWall);
	double getHeight() const {
		return r_lenght;
	}
	double getUsefulWallArea() const;

	double getUsableWallArea(double newArea) {
		return r_usefulAreaWall;
	}
	double getUsableFloorArea(double newArea) {
		return r_usefulAreaFloor;
	}
	void setUsableWallArea(double newArea);
	void setUsableFloorArea(double newArea);

	string Info() const;

private:
	double r_lenght, r_wigdt, r_height, r_usefulAreaWall, r_allArea, r_usefulAreaFloor;
};


