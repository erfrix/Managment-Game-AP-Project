#include "furniture.hpp"

void Furniture::setPrice(int price){
    if(price < 0) // price negative check
        throw 100;
    else
        this->price = price;
}

int Furniture::getPrice(){
    return this->price;
}

void Furniture::setID(string id){
    this->ID = id;
}

string Furniture::getID(){
    return this->ID;
}