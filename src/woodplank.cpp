#include "woodplank.hpp"

// enum typeWood { Oak , Maple , Walnut , Teak , Ash };

// Class wood plank:
// Has lenght, width, thickness and wood type as data
// Has a constructor
// Has Setters and Getters
// Setters validate input data

WoodPlank::WoodPlank(){
}

// Constructor - Inputs : Length , Width , Thickness , Type of wood
WoodPlank::WoodPlank(float l, float w, float th, typeWood t, string id)
{
    if (l <= 0)
        throw 401;
    else
    {
        this->Length = l;
        if (w <= 0)
            throw 402;
        else
        {
            this->Width = w;
            if (th <= 0)
                throw 403;
            else
            {
                this->Thickness = th;
                if (t < 0 || t > 4)
                    throw 404;
                else
                {
                    this->Type = t;
                    this->ID = id;
                }
            }
        }
    }
}

// Setters and Getters
void WoodPlank::setLength(float length)
{
    if (length > 0)
        Length = length;
    else
        cout << "Wood ID : " << ID << " - Error - Can Not Accept The Length Value" << endl;
}
float WoodPlank::getLength()
{
    return Length;
}
void WoodPlank::setWidth(float width)
{
    if (width > 0)
        Width = width;
    else
        cout << "Wood ID : " << ID << " - Error - Can Not Accept The Width Value" << endl;
}
float WoodPlank::getWidth()
{
    return Width;
}

void WoodPlank::setThickness(float thickness)
{
    if (thickness > 0)
        Thickness = thickness;
    else
        cout << "Wood ID : " << ID << " - Error - Can Not Accept The Thickness Value" << endl;
}
float WoodPlank::getThickness()
{
    return Thickness;
}

void WoodPlank::setType(typeWood type)
{
    Type = type;
}
typeWood WoodPlank::getType()
{
    return Type;
}

void WoodPlank::setID(string id)
{
    ID = id;
}

string WoodPlank::getID()
{
    return ID;
}