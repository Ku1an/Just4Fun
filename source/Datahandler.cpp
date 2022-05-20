#include "../include/Datahandler.hpp"

Datahandler::Datahandler() {

};


Datahandler::~Datahandler(){

};


std::vector<Staff> Datahandler::vectorEmployesData(std::string fileName) {
    std::vector<Staff> vectorEmployesData; //Vector containg staff obj
    std::fstream file;
    file.open(fileName, std::ios_base::in);
    std::string line;

    std::string staffName;
    std::string department;
    int workhours;

    if(file.is_open()){
        while(getline(file,line)) {

            if(line.substr(0,12) == "Staff name :") {
                

            }
            else if(line.substr(0,12) == "Department :"){
                
            }
            else if(line.substr(0,11) == "Workhours :") {
                //creat the staff object then delete it and sett data to 0;
            }
        }
    }

    return vectorEmployesData;


}