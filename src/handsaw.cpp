#include <iostream>
#include "handsaw.hpp"

// Class Handsaw
// Has Sharpness as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data
//Constructor - Input : Sharpness

Handsaw::Handsaw(float durability, string id){
    if(durability >= 100)
        this->durability = 100;
    else
        this->durability = durability;
    this->ID = id;
}

Handsaw::Handsaw(string id)
{
    this->durability = 100.0;
    this->ID = id;
}

void Handsaw::use(){
    if(this->durability-10.0 <= 0)
    {
        this->durability = 0;
        std::cout << "Handsaw broke!" << std::endl;
    }
    else
        this->durability -= 10.0;
}

//Setter and Getter for Sharpness
void Handsaw::setDurability(float durability){
    if(durability <= 100 && durability > 0){
        this->durability = durability;
    }
    else
        std::cout << "Error Setting Durability!" << std::endl;
}
float Handsaw::getDurability(){
    return this->durability;
}

void Handsaw::setID(string ID)
{
    //ID is checked in another function.
    this->ID = ID;
}

string Handsaw::getID()
{
    return this->ID;
}