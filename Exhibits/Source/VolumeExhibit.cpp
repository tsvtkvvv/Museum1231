#include "../VolumeExhibit.h"
#include "../Exhibit.h"
#include <exception>
#include <sstream>
#include <iomanip>


VolumeExhibit::VolumeExhibit(const string& author, const string& name, const string& country, int year, double width, double length, double height)
    : Exhibit(author, year, country, name), width(width), length(length), height(height) {
    if (width < 0 || length < 0 || height < 0) {
        throw std::invalid_argument("You can't create a volume exhibit with these parameters!");
    }
}

VolumeExhibit::VolumeExhibit(const string& name, const string& country, int year, double width, double length, double height)
    : Exhibit("Unknown", year, country, name), width(width), length(length), height(height) {
    if (width < 0 || length < 0 || height < 0) {
        throw std::invalid_argument("You can't create a volume exhibit with these parameters!");
    }
}


double VolumeExhibit::area() const {
    return 2 * (width * length + width * height + length * height);
}

void VolumeExhibit::place(Rooms* room) {
    Exhibit::place(room);
}


void VolumeExhibit::removeFromRoom(Rooms* room) {
    Exhibit::removeFromRoom(room);
}

string VolumeExhibit::Info() const {
    ostringstream oss;
    oss << Exhibit::Info()
        << "Width: " << std::fixed << std::setprecision(2) << width << " m, "
        << "Length: " << std::fixed << std::setprecision(2) << length << " m, "
        << "Height: " << std::fixed << std::setprecision(2) << height << " m, "
        << "Surface Area: " << std::fixed << std::setprecision(2) << area() << " sq.m.";
    return oss.str();
}

VolumeExhibit::~VolumeExhibit() {

}

