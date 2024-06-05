#pragma once

#include "Rooms.h"
#include <vector>

class Museum {
public:
    Museum(int countOfRooms, double height, double length);
    void addRoom(const Rooms& room);
    void checkRoomExhibitArrangements() const;

private:
    std::vector<Rooms> rooms;
    int countOfRooms;
    double height;
    double length;
};

