#include "tool.hpp"

void Tool::use() {
    if (this->durability - 10.0 <= 0)
    {
        this->durability = 0;
        std::cout << "Tool broke!" << std::endl;
    }
    else
        this->durability -= 10.0;
}

void Tool::printInfo() {
    std::cout << "Printing Info: Tool" << std::endl;
    std::cout << "ID: " << this->ID << std::endl;
    std::cout << "Durability: " << this->durability << std::endl;
}

//Setter and Getter for Durability
void Tool::setDurability(float durablity) {
    if (durablity <= 100.0 && durablity > 0) {
        this->durability = durablity;
    }
    else
        std::cout << "Error Setting Durability!" << std::endl;
}
float Tool::getDurability() {
    return this->durability;
}

//Setter Getter for ID
void Tool::setID(string id){
    //ID is checked in another function
    this->ID = id;
}

string Tool::getID(){
    return this->ID;
}