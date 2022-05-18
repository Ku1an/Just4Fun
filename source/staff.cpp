#include "../include/staff.hpp"
#include <iostream>
#include <fstream>

Staff::Staff() {
    this->staffName = "Not set";
    this->department = "Not set";
    this->workHours = 0;
};


Staff::Staff(std::string staffName,std::string department,int workHours) {
    this->staffName = staffName;
    this->department = department;
    this->workHours = workHours;
};


Staff::~Staff() {

};


void Staff::storeData(Staff staff) {
    std::string fileName = "data/staffdata.txt";
    std::fstream file;
    std::string line;
    file.open(fileName);
    getline(file,line);
    file.close();
    file.open(fileName, std::ios_base::out | std::ios_base::app);

    

    if(file.is_open()) { 

        if(line != "ALL STAFF DATA :") {
            file << "ALL STAFF DATA :\n";
        }

        file << "\nStaff name : " << staff.staffName << "\nDepartment : " << staff.department;
        file << "\nWorkhours : " << staff.workHours;
        file << "\n";
    }
    file.close();
};