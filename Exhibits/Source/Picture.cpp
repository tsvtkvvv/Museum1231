#include "../Picture.h"
#include <exception>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;


Picture::Picture(const string& country, int year, const string& name, const string& author, double width, double length)
    : Exhibit(author, year, country, name), width(width), length(length) {
    if (width < 0 || length < 0) {
        throw std::invalid_argument("You can't create a picture with these parameters!");
    }
}

Picture::Picture(const string& name, int year, const string& country, const string& author, double width, double length)
    : Exhibit(author, year, country, name), width(width), length(length) {
    if (width < 0 || length < 0) {
        throw std::invalid_argument("You can't create a picture with these parameters!");
    }
}

double Picture::area() const {
    return width * length;
}

void Picture::place(Rooms* room) {
    Exhibit::place(room);
}

void Picture::removeFromRoom(Rooms* room) {
    Exhibit::removeFromRoom(room);
}

string Picture::Info() const {
    ostringstream oss;
    oss << Exhibit::Info()
        << "Width: " << std::fixed << std::setprecision(2) << width << " m, "
        << "Length: " << std::fixed << std::setprecision(2) << length << " m, "
        << "Area: " << std::fixed << std::setprecision(2) << area() << " sq.m.";
    return oss.str();
}

Picture::~Picture() {
  
}