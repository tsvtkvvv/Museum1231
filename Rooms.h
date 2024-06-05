#pragma once
#include <string>

class Rooms
{
public:
   
    Rooms(double lenght, double wigdt, double height, double usefulAreaFloor, double allArea, double usefulAreaWall);

    void setUsableWallArea(double newArea);
    void setUsableFloorArea(double newArea);

    double floorArea() const;
    double wallArea() const;

    std::string Info() const;

private:
   
    double r_length;
    double r_width;
    double r_height;
    double r_usefulAreaWall;
    double r_allArea;
    double r_usefulAreaFloor;
};



