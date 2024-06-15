#pragma once
#include "VolumeExhibit.h"
class ScientificInstrument : public VolumeExhibit
{
    ScientificInstrument(const std::string& author, const std::string& name, const std::string& country, int year, double width,
        double length, double height, int material);
    ScientificInstrument(const std::string& name, const std::string& country, int year, double width, double length, double height, int material);

    std::string Info() const override;

    void place(Rooms* room) override;
    void removeFromRoom(Rooms* room) override;

    ~ScientificInstrument();

private:
    string material;
};


