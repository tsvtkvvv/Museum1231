#pragma once
#include "VolumeExhibit.h"


class ArcheologicalExhibit: public VolumeExhibit
{
    ArcheologicalExhibit(const std::string& author, const std::string& name, const std::string& country, int year, double width,
        double length, double height, const std::string& type);
    ArcheologicalExhibit(const std::string& name, const std::string& country, int year, double width, double length, double height, const std::string& type);


    string Info() const override;

    void place(Rooms* room) override;
    void removeFromRoom(Rooms* room) override;

    ArcheologicalExhibit();

private:
    string type;
};
