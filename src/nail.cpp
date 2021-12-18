#include <iostream>
#include "nail.hpp"


//enum typeNail { A , B , C , D };

// Class Nail
// Has Nail Type as data
// Has Constructor
// Has Setter and Getter

//Default Constructor
Nail::Nail(){

};
//Constructor - Inputs : Nail type
Nail::Nail(typeNail type){
    if(type >= 0 && type <= 3)
        this->Type = type;
    else
        throw 500;
}

//Setter and Getter for nail type
void Nail::setType(typeNail type){
    if(type >= 0 && type <= 3)
        this->Type = type;
    else
        throw 500;
}
typeNail Nail::getType(){
    return Type;
}