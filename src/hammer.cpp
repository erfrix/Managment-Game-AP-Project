#include <iostream>
#include "hammer.hpp"
// Class Hammer
// Has Durability as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data

//Constructor - Input : Durability
Hammer::Hammer(float durability){
    Durablity = durability;
}

//Setter and Getter for Durability
void Hammer::setDurability(float durablity){
    if(durablity <= 100.0 && durablity > 0){
        Durablity = durablity;
    }
    else
        std::cout << "Error Creating The Hammer" << std::endl;
}
float Hammer::getDurability(){
    return Durablity;
}