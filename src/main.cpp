#include <iostream>
#include "woodplank.hpp"
#include "handsaw.hpp"
#include "hammer.hpp"
#include "nail.hpp"
#include "app.hpp"

//using namespace std;

//enum typeWood { Oak , Maple , Walnut , Teak , Ash };

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

    return 0;
}