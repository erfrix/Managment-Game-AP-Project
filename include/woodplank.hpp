// Class wood plank: 
// Has lenght, width, thickness and wood type as data
// Has a constructor
// Has Setters and Getters
// Setters validate input data

#ifndef WOODPLANK_H
#define WOODPLANK_H

#include <iostream>
#include <string>

using namespace std;

enum typeWood { Oak , Maple , Walnut , Teak , Ash };

class WoodPlank{
private:
        string ID = "";
        float Length = 0; // Tool
        float Width = 0; // Arz
        float Thickness = 0; // Ertefa
        typeWood Type = Oak; //Type of wood

public:
        WoodPlank();
        //Constructor - Inputs : Length , Width , Thickness , Type of wood
        WoodPlank(float l , float w , float th , typeWood t , string id);

        //Setters and Getters
        void setLength(float length);
        float getLength();
        void setWidth(float width);
        float getWidth();
        void setThickness(float thickness);
        float getThickness();
        void setType(typeWood type);
        typeWood getType();
        void setID(string id);
        string getID();
};

#endif /* WOODPLANK_H */