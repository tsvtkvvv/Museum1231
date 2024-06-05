#include "Rooms.h"
#include <iostream>
#include <exception>
#include <string>


using namespace std;


Rooms::Rooms(double lenght, double width, double height, double usefulAreaFloor, double allArea, double usefulAreaWall)
{
    if (lenght <= 0 || width <= 0 || height <= 0) {
        throw std::invalid_argument("Can't create a room with these parameters. Enter parameters higher than zero.");
    }
    if (usefulAreaFloor <= 0 || allArea <= 0 || usefulAreaWall <= 0) {
        throw std::invalid_argument("Can't create a room with these parameters of area.");
    }

    r_length = lenght;
    r_width = width;
    r_height = height;
    r_usefulAreaFloor = usefulAreaFloor;
    r_usefulAreaWall = usefulAreaWall;
    r_allArea = allArea;
}
double Rooms::wallArea() const {
    double singleWallArea = r_length * r_height;
    double totalWallArea = 2 * singleWallArea + 2 * r_width * r_height;
    return totalWallArea;
}

double Rooms::floorArea() const {
    return r_length * r_width;
}

void Rooms::setUsableWallArea(double newArea) {
    r_usefulAreaWall = newArea;
}

void Rooms::setUsableFloorArea(double newArea) {
    r_usefulAreaFloor = newArea;
}

	string Rooms::Info() const {
		std::string result = "Room (" + std::to_string(r_width) + '*'
			+ std::to_string(r_length) + '*'
			+ std::to_string(r_height) + ").\n"
			+ "Usable wall area: " + to_string(r_usefulAreaWall) + " m2.\n"
			+ "Usable floor area: " + to_string(r_usefulAreaFloor) + " m2.";
		return result;
	}