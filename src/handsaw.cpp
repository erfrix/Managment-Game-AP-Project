#include <iostream>
#include "handsaw.hpp"
// Class Handsaw
// Has Sharpness as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data
//Constructor - Input : Sharpness

Handsaw::Handsaw(float sharpness){
    Sharpness = Sharpness;
}
//Setter and Getter for Sharpness
void Handsaw::setSharpness(float sharpness){
    if(sharpness <= 100.0 && sharpness > 0){
        Sharpness = sharpness;
    }
    else
        std::cout << "Error Creating The Handsaw" << std::endl;
}
float Handsaw::getSharpness(){
    return Sharpness;
}