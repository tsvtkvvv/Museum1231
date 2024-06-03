#include "Rooms.h"
#include <iostream>
#include <exception>
#include <string>


using namespace std;


	Rooms::Rooms(double lenght, double wigdt, double height, double usefulAreaFloor, double allArea, double usefulAreaWall)
	{
		if (lenght <= 0 || wigdt <= 0 || height <= 0) {
			throw std::invalid_argument("Can`t create a room with this parameteres. Enter the parameters high than zero.");
		}
		if (usefulAreaFloor <= 0 || allArea <= 0 || usefulAreaWall <= 0) {
			throw std::invalid_argument("Can`t create a room with this parameteres of area");
		}
	}
	double Rooms::usableWallArea() const {
		 double usableArea = r_lenght * r_height * 2 + r_wigdt * r_height * 2;
		 return usableArea;
	}
	double Rooms::usableFloorArea() const {
		return r_wigdt * r_lenght;
	}

	void Rooms::setUsableWallArea(double newArea) {
		r_usefulAreaWall = newArea;
	}

	void Rooms::setUsableFloorArea(double newArea) {
		r_usefulAreaFloor = newArea;
	}

	string Rooms::Info() const {
		std::stringstream ss
		ss << "Room (" << r_wigdt << '*' << r_lenght << '*'
		<< r_height << ")." << "\nUsable wall area: " << usableWallArea << " m2." << "\nUsable floor area: "
		<< usableFloorArea << " m2."; 
			return ss.str(); 
	}