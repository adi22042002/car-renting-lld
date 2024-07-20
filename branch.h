//  #ifndef BASIC_HEADER_H
#define BASIC_HEADER_H
#include <string.h>
#include <vector>
#include <iostream>

using namespace std;

class CarRentalBranch
{
private:
    string name;
    Address address;
    vector<ParkingStall> stalls;

public:
    Address getLocation();
};
