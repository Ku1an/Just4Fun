#pragma once
#include <string>

class Staff {


    private:
    std::string staffName;
    std::string department;
    int workHours;

    public:
    Staff();
    Staff(const std::string staffName,const std::string department,const int workHours);
    ~Staff();
    static void storeData(Staff staff); //Stores the object given into txt. Static makes it possible to run without created object.



};