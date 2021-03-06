// Class wood plank: 
// Has lenght, width, thickness and wood type as data
// Has a constructor
// Has Setters and Getters
// Setters validate input data

#ifndef WOODPLANK_H
#define WOODPLANK_H

enum typeWood { Oak , Maple , Walnut , Teak , Ash };

class WoodPlank{
private:
        float Length; // Tool
        float Width; // Arz
        float Thickness; // Ertefa
        typeWood Type; //Type of wood

public:
        //Constructor - Inputs : Length , Width , Thickness , Type of wood
        WoodPlank(float l , float w , float th , typeWood t );

        //Setters and Getters
        void setLength(float length);
        float getLength();
        void setWidth(float width);
        float getWidth();
        void setThickness(float thickness);
        float getThickness();
        void setType(typeWood type);
        typeWood getType();
};

#endif /* WOODPLANK_H */