#include "Rooms.h"



using namespace std;

class Rooms{
public:
	Rooms(double lenght, double wigdt, double height, double usefulArea, double allArea);

double getHeight() const
{
	return r_height;
}

double getUsefulWallArea() const
{
	return r_usefulArea;
}

string Info() const;

private:
	double r_lenght, r_wigdt, r_height, r_usefulArea, r_allArea;
};