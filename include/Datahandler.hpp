#pragma once
#include <vector>
#include <string>
#include <fstream>
#include "Staff.hpp"

class Datahandler {

    private:

    public:
    Datahandler();
    ~Datahandler();
    static std::vector<Staff> vectorEmployesData(std::string fileName);
    
};
