#include <iostream>
#include "nail.hpp"


//enum typeNail { A , B , C , D };

// Class Nail
// Has Nail Type as data
// Has Constructor
// Has Setter and Getter

//Constructor - Inputs : Nail type
Nail::Nail(typeNail type){
    Type = type;
}

//Setter and Getter for nail type
void Nail::setType(typeNail type){
    Type = type;
}
typeNail Nail::getType(){
    return Type;
}