#pragma once
#include <string>
using namespace std;



class Exhibit {
public:
    Exhibit(string author, int year);
private:
    string Author;
    int Year;
};