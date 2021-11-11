#include <iostream>
#include "woodplank.hpp"

//enum typeWood { Oak , Maple , Walnut , Teak , Ash };

// Class wood plank: 
// Has lenght, width, thickness and wood type as data
// Has a constructor
// Has Setters and Getters
// Setters validate input data

        //Constructor - Inputs : Length , Width , Thickness , Type of wood
        WoodPlank::WoodPlank(float l , float w , float th , typeWood t ){
            Length = l;
            Width = w;
            Thickness = th;
            Type = t;
        }

        //Setters and Getters
        void WoodPlank::setLength(float length){
            if(length > 0)
                Length = length;
            else
                std::cout << "Error - Can Not Accept The Length Value" << std::endl;
        }
        float WoodPlank::getLength() const{
            return Length;
        }
        void WoodPlank::setWidth(float width){
            if(width > 0)
                Width = width;
            else
                std::cout << "Error - Can Not Accept The Width Value" << std::endl;
        }
        float WoodPlank::getWidth() const{
            return Width;
        }
        
        void WoodPlank::setThickness(float thickness){
            if(thickness > 0)
                Thickness = thickness;
            else
                std::cout << "Error - Can Not Accept The Thickness Value" << std::endl;
        }
        float WoodPlank::getThickness() const{
            return Thickness;
        }

        void WoodPlank::setType(typeWood type){
            Type = type;
        }
        typeWood WoodPlank::getType() const{
            return Type;
        }