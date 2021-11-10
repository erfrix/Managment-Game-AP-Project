#include <iostream>

//using namespace std;

enum typeWood { Oak , Maple , Walnut , Teak , Ash };
enum typeNail { A , B , C , D };

// Class Handsaw
// Has Sharpness as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data
class Handsaw{
private:
        float Sharpness = 100.0;
public:
        //Constructor - Input : Sharpness
        Handsaw(float sharpness){
            Sharpness = Sharpness;
        }
        //Setter and Getter for Sharpness
        void setSharpness(float sharpness){
            if(sharpness <= 100.0 && sharpness > 0){
                Sharpness = sharpness;
            }
            else
                std::cout << "Error Creating The Handsaw" << std::endl;
        }
        float getSharpness(){
            return Sharpness;
        }
};

// Class Hammer
// Has Durability as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data
class Hammer{
private:
        float Durablity = 100.0;
public:
        //Constructor - Input : Durability
        Hammer(int durability){
            Durablity = durability;
        }
        //Setter and Getter for Durability
        void setDurability(float durablity){
            if(durablity <= 100.0 && durablity > 0){
                Durablity = durablity;
            }
            else
                std::cout << "Error Creating The Hammer" << std::endl;
        }
        float getDurability(){
            return Durablity;
        }
};

// Class Nail
// Has Nail Type as data
// Has Constructor
// Has Setter and Getter
class Nail{
private:
        typeNail Type;
public:
        //Constructor - Inputs : Nail type
        Nail(typeNail type){
            Type = type;
        }
        //Setter and Getter for nail type
        void setType(typeNail type){
            Type = type;
        }
        typeNail getType(){
            return Type;
        }
};

// Class wood plank: 
// Has lenght, width, thickness and wood type as data
// Has a constructor
// Has Setters and Getters
// Setters validate input data
class WoodPlank{
private:
        float Length; // Tool
        float Width; // Arz
        float Thickness; // Ertefa
        typeWood Type; //Type of wood

public:
        //Constructor - Inputs : Length , Width , Thickness , Type of wood
        WoodPlank(float l , float w , float th , typeWood t ){
            Length = l;
            Width = w;
            Thickness = th;
            Type = t;
        }

        //Setters and Getters
        void setLength(float length){
            if(length > 0)
                Length = length;
            else
                std::cout << "Error - Can Not Accept The Length Value" << std::endl;
        }
        float getLength() const{
            return Length;
        }
        void setWidth(float width){
            if(width > 0)
                Width = width;
            else
                std::cout << "Error - Can Not Accept The Width Value" << std::endl;
        }
        float getWidth() const{
            return Width;
        }
        
        void setThickness(float thickness){
            if(thickness > 0)
                Thickness = thickness;
            else
                std::cout << "Error - Can Not Accept The Thickness Value" << std::endl;
        }
        float getThickness() const{
            return Thickness;
        }

        void setType(typeWood type){
            Type = type;
        }
        typeWood getType() const{
            return Type;
        }
};


int main(){

//TEST CODE -- NOT FINAL


//Woodplank test

    //Constructor Test
    WoodPlank wood1(1.0 , 1.0 , 1.0 , Maple);

    std::cout << wood1.getLength() << std::endl;
    std::cout << wood1.getWidth() << std::endl;
    std::cout << wood1.getThickness() << std::endl;
    switch (wood1.getType())//Oak , Maple , Walnut , Teak , Ash
    {
    case Oak:
        std::cout << "Oak" << std::endl;
        break;
    case Maple:
        std::cout << "Maple" << std::endl;
        break;
    case Walnut:
        std::cout << "Walnut" << std::endl;
        break;
    case Teak:
        std::cout << "Teak" << std::endl;
        break;
    case Ash:
        std::cout << "Ash" << std::endl;
        break;
    default:
        std::cout << "Error - Wood Type Unkown" << std::endl;
        break;
    }
    
    //Setters Test
    wood1.setLength(-5.0); // Validation Check
    wood1.setWidth(5.0);
    wood1.setThickness(5.0);
    wood1.setType(Walnut);

    std::cout << wood1.getLength() << std::endl;
    std::cout << wood1.getWidth() << std::endl;
    std::cout << wood1.getThickness() << std::endl;
    switch (wood1.getType())//Oak , Maple , Walnut , Teak , Ash
    {
    case Oak:
        std::cout << "Oak" << std::endl;
        break;
    case Maple:
        std::cout << "Maple" << std::endl;
        break;
    case Walnut:
        std::cout << "Walnut" << std::endl;
        break;
    case Teak:
        std::cout << "Teak" << std::endl;
        break;
    case Ash:
        std::cout << "Ash" << std::endl;
        break;
    default:
        std::cout << "Error - Wood Type Unkown" << std::endl;
        break;
    }

//Handsaw test
    Handsaw handsaw1(100.0);
    std::cout << 

    return 0;
}