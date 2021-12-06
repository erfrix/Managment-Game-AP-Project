#include <iostream>
#include "woodplank.hpp"
#include "tool.hpp"
#include "handsaw.hpp"
#include "hammer.hpp"
#include "nail.hpp"
#include "app.hpp"
#include "furniture.hpp"
#include "chair.hpp"

using namespace std;

//enum typeWood { Oak , Maple , Walnut , Teak , Ash };

void testWood(){

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


}

void testHandsaw(){
    Handsaw H1(100,"H1");
    Handsaw H2(101,"H2");
    Handsaw H3("H3");
    Handsaw H4(9,"H4");

    cout << "-------------------------" << endl;
    cout << "Testing Handsaw : " << endl;
    cout << endl;
    cout << "Handsaw ID :" << H1.getID() << endl;
    cout << "Durability :" <<  H1.getDurability() << endl;
    H1.use();
    cout << "Durability :" << H2.getDurability() << endl;
    cout << endl;
    cout << "Handsaw ID :" << H2.getID() << endl;
    cout << "Durability :" <<  H2.getDurability() << endl;
    H2.use();
    cout << "Durability :" << H2.getDurability() << endl;
    cout << endl;
    cout << "Handsaw ID :" << H3.getID() << endl;
    cout << "Durability :" <<  H3.getDurability() << endl;
    H3.use();
    cout << "Durability :" << H3.getDurability() << endl;
    cout << endl;
    cout << "Handsaw ID :" << H4.getID() << endl;
    cout << "Durability :" <<  H4.getDurability() << endl;
    H4.use();
    cout << "Durability :" << H4.getDurability() << endl;


}

void testHammer(){
    Hammer H1(100,"H1");
    Hammer H2(101,"H2");
    Hammer H3("H3");
    Hammer H4(9,"H4");

    cout << "-------------------------" << endl;
    cout << "Testing Hammer : " << endl;
    cout << endl;
    cout << "Hammer ID :" << H1.getID() << endl;
    cout << "Durability :" <<  H1.getDurability() << endl;
    H1.use();
    cout << "Durability :" << H2.getDurability() << endl;
    cout << endl;
    cout << "Hammer ID :" << H2.getID() << endl;
    cout << "Durability :" <<  H2.getDurability() << endl;
    H2.use();
    cout << "Durability :" << H2.getDurability() << endl;
    cout << endl;
    cout << "Hammer ID :" << H3.getID() << endl;
    cout << "Durability :" <<  H3.getDurability() << endl;
    H3.use();
    cout << "Durability :" << H3.getDurability() << endl;
    cout << endl;
    cout << "Hammer ID :" << H4.getID() << endl;
    cout << "Durability :" <<  H4.getDurability() << endl;
    H4.use();
    cout << "Durability :" << H4.getDurability() << endl;


}

void testChair(){
    Chair C1("C1");
    Chair C2(40 , "C2");

    cout << "-------------------------" << endl;
    cout << "Testing Chair : " << endl;
    cout << endl;
    cout << "Chair ID :" << C1.getID() << endl;
    cout << "Price :" <<  C1.getPrice() <<  endl;
    cout << endl;
    cout << "Chair ID :" << C2.getID() << endl;
    cout << "Price :" <<  C2.getPrice() << endl;
}

void testNail(){
    Nail N1(A);
    Nail N2(B);
    Nail N3(C);
    Nail N4(D);

    cout << "-------------------------" << endl;
    cout << "Testing Nails : " << endl;
    cout << endl;
    cout << "Nail Type :" << N1.getType() << endl;
    cout << endl;
    cout << "Nail Type :" << N2.getType() << endl;
    cout << endl;
    cout << "Nail Type :" << N3.getType() << endl;
    cout << endl;
    cout << "Nail Type :" << N4.getType() << endl;
    N1.setType(D);
    N2.setType(C);
    N3.setType(B);
    N4.setType(A);
    cout << "-------------------------" << endl;
    cout << "Testing Nails : " << endl;
    cout << endl;
    cout << "Nail Type :" << N1.getType() << endl;
    cout << endl;
    cout << "Nail Type :" << N2.getType() << endl;
    cout << endl;
    cout << "Nail Type :" << N3.getType() << endl;
    cout << endl;
    cout << "Nail Type :" << N4.getType() << endl;


}


int main(){

    testWood();
    testHandsaw();
    testHammer();
    testChair();
    testNail();

    return 0;
}