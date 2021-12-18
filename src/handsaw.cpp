#include <iostream>
#include "handsaw.hpp"

// Class Handsaw
// Has Sharpness as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data
//Constructor - Input : Sharpness

Handsaw::Handsaw(float durability, string id){
    if(durability <= 100  && durability > 0)
    {
        this->durability = durability;
        this->ID = id;
    }
    else
    {
        throw 200;
    }
}

Handsaw::Handsaw(string id)
{
    this->durability = 100.0;
    this->ID = id;
}

void Handsaw::use(){
    if(this->durability == 0)
        throw 300;
    else if(this->durability-10.0 <= 0)
    {
        this->durability = 0;
        std::cout << "Handsaw is broken!" << std::endl;
    }
    else
        this->durability -= 10.0;
}

//Setter and Getter for Sharpness
void Handsaw::setDurability(float durability){
    if(durability <= 100.0 && durability > 0){
        this->durability = durability;
    }
    else
        throw 200;
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