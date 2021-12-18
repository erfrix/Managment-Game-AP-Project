#ifndef TOOL_H
#define TOOL_H

#include<iostream>
using namespace std;

class Tool
{
    protected:
        float durability = 0;
        string ID = "";
    public:
        virtual void use();
        virtual void printInfo();
        virtual void setID(string);
        virtual string getID();
        virtual void setDurability(float);
        virtual float getDurability();
};
#endif //TOOL_H