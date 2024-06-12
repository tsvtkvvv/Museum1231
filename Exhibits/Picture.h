#pragma once
#include "Exhibit.h"
class Picture : public Exhibit
{
	Picture(const string&country, int year, const string&name, const string& author, double& width, double& lenght);
	Picture(const string& name, int year, const string& country, const string& author, double width, double lenght);

	string Info() const override;
	double area() const;
	void place(Rooms* room) override;
	void removeFromRoom(Rooms* room) override;

	~Picture();

private:
	double width, lenght;
};

