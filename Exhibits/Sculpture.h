#pragma once
#include "VolumeExhibit.h"
#include <string>

class Sculpture : public VolumeExhibit {
public:
    Sculpture(const string& author, const string& name, const string& country, int year, double width,
        double length, double height, const std::string& type);
    Sculpture(const string& name, const string& country, int year, double width, double length, double height, const string& type);

    string Info() const override;

    ~Sculpture();

private:
    string type;
};

