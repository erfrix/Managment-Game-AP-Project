#include "chair.hpp"
#include <iostream>

//constructors
Chair::Chair(string id){
    this->ID = id;
    this->price = 20;
}

Chair::Chair(int price, string id){
    if(price < 0)
    {
        this->price = 0;
        this->ID = id;
        std::cout << "Negative Price!" << std::endl;
    }
    else
    {
        this->price = price;
        this->ID = id;
    }
}

//setter getter
void Chair::setPrice(int price){
    if(price >= 0)
        this->price = price;
    else
        return;
}

int Chair::getPrice(){
    return this->price;
}

void Chair::setID(string id){
    this->ID = id;
}

string Chair::getID(){
    return this->ID;
}