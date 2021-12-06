#ifndef CHAIR_H
#define CHAIR_H

#include "furniture.hpp"

class Chair : public Furniture
{
    public:
        //constructors
        Chair(string);
        Chair(int , string);

        //setter getter
        void setPrice(int);
        int getPrice();
        void setID(string);
        string getID();
};
#endif //CHAIR_H