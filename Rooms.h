#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Rooms
{
public:
	Rooms(double lenght, double wigdt, double height, double usefulAreaFloor, double allArea, double usefulAreaWall);
    double usableWallArea() const;
    double usableFloorArea() const;

    Rooms(double r_lenght, double r_wigdt, double r_height, double usefulAreaFloor, double allArea, double usefulAreaWall) {
        this->r_height = r_height;
        this->r_lenght = r_lenght;
        this->r_wigdt = r_wigdt;
        this->r_usefulAreaFloor = usefulAreaFloor;
        this->r_usefulAreaWall = usefulAreaWall;
        this->r_allArea = allArea;
    }

    void setUsableWallArea(double newArea);
    void setUsableFloorArea(double newArea);

    std::string Info() const;

private:
	double r_lenght, r_wigdt, r_height, r_usefulAreaWall, r_allArea, r_usefulAreaFloor;
};


