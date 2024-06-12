#pragma once
#include <string>
#include "../Room/Rooms.h"
#include "../Museum.h"
using namespace std;



class Exhibit {
public:
    
    Exhibit(const string& author, int year, const string& country, const string& name);

    Exhibit(string& author, int year, string& country);

    Rooms* getRoom() const {
        return room;
    }

    virtual string Info() const;
    virtual void place(Rooms* room);
    virtual void removeFromRoom(Rooms* room);

    virtual ~Exhibit();

private:
    string author = "Unknown";
    int year;
    string country;
    Rooms* room;
    string name;
};