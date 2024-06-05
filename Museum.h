#pragma once

#include "Rooms.h"
#include <vector>

class Museum {
public:
    int countOfRooms;
    double height;
    double length;

    Museum(int countOfRooms, double height, double length);

    void addRoom(const Rooms& room);
    void checkRoomExhibitArrangements() const;

private:
    std::vector<Rooms> rooms;
};

