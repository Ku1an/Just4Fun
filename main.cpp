#include "./source/modules.cpp"

int main() {
    std::string fileName = "./data/staffdata.txt";
    Staff staff("Sofia","Stjärnan",40);

    //Staff::storeData(staff);
    Datahandler::vectorEmployesData(fileName);



    return 0;
}