#pragma once
#include "Exhibit.h"
class VolumeExhibit : public Exhibit
{
    VolumeExhibit(const string& author, const string& name, const string& country, int year, double width, double length, double height);
    VolumeExhibit(const string& name, const string& country, int year, double width, double length, double height);

    double area() const;

    void place(Rooms* room) override;
    void removeFromRoom(Rooms* room) override;

    string Info() const override;

    ~VolumeExhibit();

private:
	double width,height,length;
};

