#include <iostream>
#include "hammer.hpp"
// Class Hammer
// Has Durability as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data

//Constructor - Input : Durability
Hammer::Hammer(float durability, string id){
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
Hammer::Hammer(string id){
    this->durability = 100.0;
    this->ID = id;
}

void Hammer::use(){
    if(this->durability == 0)
        throw 300;
    else if(this->durability-10.0 <= 0)
    {
        this->durability = 0;
        std::cout << "Hammer is broken!" << std::endl;
    }
    else
        this->durability -= 10.0;
}

//Setter and Getter for Durability
void Hammer::setDurability(float durability){
    if(durability <= 100.0 && durability > 0){
        this->durability = durability;
    }
    else
        throw 200;
}
float Hammer::getDurability(){
    return this->durability;
}

//Setter Getter for ID
void Hammer::setID(string id)
{
    //ID is checked in another function
    this->ID = id;
}

string Hammer::getID()
{
    return this->ID;
}