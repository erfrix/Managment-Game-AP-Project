#ifndef FURNITURE_H
#define FURNITURE_H

#include <iostream>
using std::string;

class Furniture
{
    protected:
        string ID;
        int price;
    public:
        virtual void setPrice(int);
        virtual int getPrice();
        virtual void setID(string);
        virtual string getID();
};
#endif //FURNITURE_H