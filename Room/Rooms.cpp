#include "Rooms.h"
#include <iostream>
#include <exception>
#include <string>
#include <execution>
#include <sstream>
#include <iomanip>

using namespace std;


Rooms::Rooms(double length, double width, double height, double usefulAreaFloor, double allArea, double usefulAreaWall)
{
    this->r_length = length;
    this->r_width = width;
    this->r_height = height;
    this->r_usefulAreaFloor = usefulAreaFloor;
    this->r_usefulAreaWall = usefulAreaWall;
    this->r_allArea = allArea;
try{
    if (length <= 0 || width <= 0 || height <= 0) {
        throw std::invalid_argument("Can't create a room with these parameters. Enter parameters higher than zero.");
    }
    if (usefulAreaFloor <= 0 || allArea <= 0 || usefulAreaWall <= 0) {
        throw std::invalid_argument("Can't create a room with these parameters of area.");
    }
}
    catch(const std::invalid_argument& e) {
    cerr << "Error " << e.what() << endl;
    }
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
    ostringstream oss;
    oss << "Room (" << fixed << setprecision(2) << r_width << " * "
        << r_length << " * " << r_height << ").\n"
        << "Usable wall area: " << fixed << setprecision(2) << r_usefulAreaWall << " m2.\n"
        << "Usable floor area: " << fixed << setprecision(2) << r_usefulAreaFloor << " m2.";
    return oss.str();
}