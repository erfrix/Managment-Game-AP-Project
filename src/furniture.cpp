#include "furniture.hpp"

void Furniture::setPrice(int price){
    if(price >= 0)
        this->price = price;
    else
        return;
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