#pragma once
#include "Exhibit.h"
class Picture : public Exhibit
{
	Picture(const string&country, int year, const string&name, const string& author, double& width, double& length);
	Picture(const string& name, int year, const string& country, const string& author, double width, double length);

	
	double area() const;
	void place(Rooms* room) override;
	void removeFromRoom(Rooms* room) override;

	string Info() const override;

	~Picture();

private:
	double width, length;
};

