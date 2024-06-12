#include "../Exhibit.h"
#include "../../Museum.h"
#include <iostream>
#include <sstream>
using namespace std;


Exhibit::Exhibit(const string& author, int year, const string& country, const string& name) :
	author(author), year(year), country(country), room(nullptr), name(name)
{
	if (year == 0) {
		throw std::invalid_argument("Year of exhibit cannot equal to 0");
	}
}
Exhibit::Exhibit(string& author, int year, string& country) {
	if (year == 0) {
		throw std::invalid_argument("Can`t create an exhibit!");
	}
}
string Exhibit::Info() const {
	stringstream s;
	if (room != nullptr) {
		s << "Exhibit: " << name << '.'
			<< "\nAuthor: " << author << ". " << "Country: " << country << '.'
			<< "\nYear: " << to_string(year) << '.' << "\nIt placed in: " << room->Info();
	}
	else {
		s << "Exhibit: " << name << '.'
			<< "\nAuthor: " << author << ". " << "Country: " << country << '.'
			<< "\nYear: " << to_string(year) << '.' << "\nIt is not placed in the room.";
	}
	return s.str();
}

void Exhibit::place(Rooms* rooms) {
	if (room != rooms) {
		room = rooms;
	}
	else
		throw std::invalid_argument("Exhibit already in this room. Choose another one.");
}

void Exhibit::removeFromRoom(Rooms* rooms)
{
	if (room == nullptr) {
		throw std::invalid_argument("Change the location of exhibit.");
	}
	else if (room = rooms) {
		room = nullptr;
	}
}

Exhibit::~Exhibit()
{
	delete room;
}



