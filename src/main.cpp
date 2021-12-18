#include <iostream>
#include <string>
#include <vector>

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

//Woodplank test

    vector<WoodPlank> W;
    WoodPlank temp(1.0 , 1.0 , 1.0 , Maple , "W1");
    W.push_back(temp);

    //Test Exeption
    try{
    WoodPlank temp2(-1.0 , 1.0 , 1.0 , Maple , "W1.5");
    }
    catch(...)
    {
        cerr << "@Error-WoodPlank-General" << endl;
    }
    //END

    temp.setLength(5.0);
    temp.setWidth(3.0);
    temp.setThickness(0.5);
    temp.setType(Ash);
    temp.setID("W2");
    W.push_back(temp);
    temp.setLength(-5.0); // Non Valid - Should not change value.
    temp.setWidth(3.0);
    temp.setThickness(0.5);
    temp.setType(Walnut);
    temp.setID("W3");
    W.push_back(temp);
    temp.setLength(25.0);
    temp.setWidth(10.0);
    temp.setThickness(1.5);
    temp.setType(Oak);
    temp.setID("W4");
    W.push_back(temp);

    cout << "-------------------------" << endl;
    cout << "Testing Wood Plank : " << endl;
    cout << endl;
    for (auto it = W.begin() ; it != W.end() ; it++)
    {
        cout << "Wood Plank ID : " << (*it).getID() << endl;
        cout << "Length : " << (*it).getLength() << endl;
        cout << "Width : " << (*it).getWidth() << endl;
        cout << "Thickness: " << (*it).getThickness() << endl;
        cout << "Type : ";
        switch ((*it).getType())
        {
        case Oak:
            cout << "Oak" << endl;
            break;
        case Maple:
            cout << "Maple" << endl;
            break;
        case Walnut:
            cout << "Walnut" << endl;
            break;
        case Teak:
            cout << "Teak" << endl;
            break;
        case Ash:
            cout << "Ash" << endl;
            break;
        default:
            cout << "[Type Error]" << endl;
            break;
        }
        cout << endl;
    }
    


    // //Constructor Test
    // WoodPlank wood1(1.0 , 1.0 , 1.0 , Maple);

    // std::cout << wood1.getLength() << std::endl;
    // std::cout << wood1.getWidth() << std::endl;
    // std::cout << wood1.getThickness() << std::endl;
    // switch (wood1.getType())//Oak , Maple , Walnut , Teak , Ash
    // {
    // case Oak:
    //     std::cout << "Oak" << std::endl;
    //     break;
    // case Maple:
    //     std::cout << "Maple" << std::endl;
    //     break;
    // case Walnut:
    //     std::cout << "Walnut" << std::endl;
    //     break;
    // case Teak:
    //     std::cout << "Teak" << std::endl;
    //     break;
    // case Ash:
    //     std::cout << "Ash" << std::endl;
    //     break;
    // default:
    //     std::cout << "Error - Wood Type Unkown" << std::endl;
    //     break;
    // }
    
    // //Setters Test
    // wood1.setLength(-5.0); // Validation Check
    // wood1.setWidth(5.0);
    // wood1.setThickness(5.0);
    // wood1.setType(Walnut);

    // std::cout << wood1.getLength() << std::endl;
    // std::cout << wood1.getWidth() << std::endl;
    // std::cout << wood1.getThickness() << std::endl;
    // switch (wood1.getType())//Oak , Maple , Walnut , Teak , Ash
    // {
    // case Oak:
    //     std::cout << "Oak" << std::endl;
    //     break;
    // case Maple:
    //     std::cout << "Maple" << std::endl;
    //     break;
    // case Walnut:
    //     std::cout << "Walnut" << std::endl;
    //     break;
    // case Teak:
    //     std::cout << "Teak" << std::endl;
    //     break;
    // case Ash:
    //     std::cout << "Ash" << std::endl;
    //     break;
    // default:
    //     std::cout << "Error - Wood Type Unkown" << std::endl;
    //     break;
    // }


}

//Phase 3 - done
void testHandsaw(){
    vector<Handsaw> H;
    
    //Hammer 1
    Handsaw temp(100,"H1"); // Ctor 1
    H.push_back(temp);
    
    //Hammer 2
    //Exeptoion Test
    try{
    temp.setDurability(101);
    temp.setID("H2");
    }
    catch(int codeExeption){
        if(codeExeption == 200)
        {
            cerr << "@ Error-Handsaw-setDurability : Negative Number or More Than 100" << endl;
        }
        else
            H.push_back(temp);
    }
    //END

    //Hammer 3
    Handsaw temp2("H3"); // Ctor 2
    H.push_back(temp2);

    //Hammer 4
    temp.setDurability(9);
    temp.setID("H4");
    H.push_back(temp);

    cout << "-------------------------" << endl;
    cout << "Testing Handsaw : " << endl;
    cout << endl;
    for (auto it = H.begin() ; it != H.end() ; it++)
    {
        cout << "Handsaw ID :" << (*it).getID() << endl;
        cout << "Durability :" <<  (*it).getDurability() << endl;
        
        //Exeption
        try{
            (*it).use();
        }
        catch(int codeExeption){
            if(codeExeption == 300)
                cerr << "@ Error-Handsaw-Use : Cannot use anymore!" << endl;
        }

        try{
            (*it).use();
        }
        catch(int codeExeption){
            if(codeExeption == 300)
                cerr << "@ Error-Handsaw-Use : Cannot use anymore!" << endl;
        }
        //END

        cout << "--Used Handsaw Twice..." << endl;
        cout << "Durability :" << (*it).getDurability() << endl;
        cout << endl;
    }
    // Handsaw temp(100,"H1"); // Ctor 1
    // H.push_back(temp);
    // temp.setDurability(101); // Non valid test - should set to 100.
    // temp.setID("H2");
    // H.push_back(temp);
    // Handsaw temp2("H3"); // Ctor 2
    // H.push_back(temp2);
    // temp.setDurability(9);
    // temp.setID("H4");
    // H.push_back(temp);

    // cout << "-------------------------" << endl;
    // cout << "Testing Handsaw : " << endl;
    // cout << endl;
    // for (auto it = H.begin() ; it != H.end() ; it++)
    // {
    //     cout << "Handsaw ID :" << (*it).getID() << endl;
    //     cout << "Durability :" <<  (*it).getDurability() << endl;
    //     (*it).use();
    //     cout << "--Used Hansaw Once..." << endl;
    //     cout << "Durability :" << (*it).getDurability() << endl;
    //     cout << endl;
    // }
    // Handsaw H1(100,"H1");
    // Handsaw H2(101,"H2");
    // Handsaw H3("H3");
    // Handsaw H4(9,"H4");

    // cout << "-------------------------" << endl;
    // cout << "Testing Handsaw : " << endl;
    // cout << endl;
    // cout << "Handsaw ID :" << H1.getID() << endl;
    // cout << "Durability :" <<  H1.getDurability() << endl;
    // H1.use();
    // cout << "Durability :" << H2.getDurability() << endl;
    // cout << endl;
    // cout << "Handsaw ID :" << H2.getID() << endl;
    // cout << "Durability :" <<  H2.getDurability() << endl;
    // H2.use();
    // cout << "Durability :" << H2.getDurability() << endl;
    // cout << endl;
    // cout << "Handsaw ID :" << H3.getID() << endl;
    // cout << "Durability :" <<  H3.getDurability() << endl;
    // H3.use();
    // cout << "Durability :" << H3.getDurability() << endl;
    // cout << endl;
    // cout << "Handsaw ID :" << H4.getID() << endl;
    // cout << "Durability :" <<  H4.getDurability() << endl;
    // H4.use();
    // cout << "Durability :" << H4.getDurability() << endl;
}

//Phase 3 - done
void testHammer(){
    vector<Hammer> H;
    
    //Hammer 1
    Hammer temp(100,"H1"); // Ctor 1
    H.push_back(temp);
    
    //Hammer 2
    //Exeptoion Test
    try{
    temp.setDurability(101);
    temp.setID("H2");
    }
    catch(int codeExeption){
        if(codeExeption == 200)
        {
            cerr << "@ Error-Hammer-setDurability : Negative Number or More Than 100" << endl;
        }
        else
            H.push_back(temp);
    }
    //END

    //Hammer 3
    Hammer temp2("H3"); // Ctor 2
    H.push_back(temp2);

    //Hammer 4
    temp.setDurability(9);
    temp.setID("H4");
    H.push_back(temp);

    cout << "-------------------------" << endl;
    cout << "Testing Hammer : " << endl;
    cout << endl;
    for (auto it = H.begin() ; it != H.end() ; it++)
    {
        cout << "Hammer ID :" << (*it).getID() << endl;
        cout << "Durability :" <<  (*it).getDurability() << endl;
        
        //Exeption
        try{
            (*it).use();
        }
        catch(int codeExeption){
            if(codeExeption == 300)
                cerr << "@ Error-Hammer-Use : Cannot use anymore!" << endl;
        }

        try{
            (*it).use();
        }
        catch(int codeExeption){
            if(codeExeption == 300)
                cerr << "@ Error-Hammer-Use : Cannot use anymore!" << endl;
        }
        //END

        cout << "--Used Hammer Twice..." << endl;
        cout << "Durability :" << (*it).getDurability() << endl;
        cout << endl;
    }
    
    // Hammer H1(100,"H1");
    // Hammer H2(101,"H2");
    // Hammer H3("H3");
    // Hammer H4(9,"H4");

    // cout << "-------------------------" << endl;
    // cout << "Testing Hammer : " << endl;
    // cout << endl;
    // cout << "Hammer ID :" << H1.getID() << endl;
    // cout << "Durability :" <<  H1.getDurability() << endl;
    // H1.use();
    // cout << "Durability :" << H2.getDurability() << endl;
    // cout << endl;
    // cout << "Hammer ID :" << H2.getID() << endl;
    // cout << "Durability :" <<  H2.getDurability() << endl;
    // H2.use();
    // cout << "Durability :" << H2.getDurability() << endl;
    // cout << endl;
    // cout << "Hammer ID :" << H3.getID() << endl;
    // cout << "Durability :" <<  H3.getDurability() << endl;
    // H3.use();
    // cout << "Durability :" << H3.getDurability() << endl;
    // cout << endl;
    // cout << "Hammer ID :" << H4.getID() << endl;
    // cout << "Durability :" <<  H4.getDurability() << endl;
    // H4.use();
    // cout << "Durability :" << H4.getDurability() << endl;

}

//Phase 3 - done
void testChair(){
    
    vector<Chair> C;
    Chair temp(40, "C1");
    C.push_back(temp);
    temp.setPrice(20);
    temp.setID("C2");
    C.push_back(temp);
    try{Chair temp2(-12 , "C3");}
    catch(int codeExeption){
        if(codeExeption == 100)
        {
            cerr << "@ Error-Chair-Constructor: Negative Number" << endl;
        }
    }

    cout << "-------------------------" << endl;
    cout << "Testing Chair : " << endl;
    cout << endl;
    for (auto it = C.begin() ; it != C.end() ; it++)
    {
        cout << "Chair ID :" << (*it).getID() << endl;
        cout << "Price :" <<  (*it).getPrice() <<  endl;
        cout << endl;
    }
    
    // Chair C1("C1");
    // Chair C2(40 , "C2");

    // cout << "-------------------------" << endl;
    // cout << "Testing Chair : " << endl;
    // cout << endl;
    // cout << "Chair ID :" << C1.getID() << endl;
    // cout << "Price :" <<  C1.getPrice() <<  endl;
    // cout << endl;
    // cout << "Chair ID :" << C2.getID() << endl;
    // cout << "Price :" <<  C2.getPrice() << endl;
}

//Phase 3 - done
void testNail(){
    
    vector<Nail> N;
    Nail temp(A);
    N.push_back(temp);
    temp.setType(B);
    N.push_back(temp);
    temp.setType(C);
    N.push_back(temp);
    temp.setType(D);
    N.push_back(temp);
    

    cout << "-------------------------" << endl;
    cout << "Testing Nails : " << endl;
    cout << endl;
    for (auto it = N.begin() ; it != N.end(); it++)
    {
        char nailType = '0';
        switch ((*it).getType())
        {
        case 0:
            nailType = 'A';
            break;
        case 1:
            nailType = 'B';
            break;
        case 2:
            nailType = 'C';
            break;
        case 3:
            nailType = 'D';
            break;
        default:
            nailType = 'X';
            break;
        }
        cout << "Nail Type :" << nailType << endl;
        cout << endl;
    }
    
    // Nail N1(A);
    // Nail N2(B);
    // Nail N3(C);
    // Nail N4(D);

    // cout << "-------------------------" << endl;
    // cout << "Testing Nails : " << endl;
    // cout << endl;
    // cout << "Nail Type :" << N1.getType() << endl;
    // cout << endl;
    // cout << "Nail Type :" << N2.getType() << endl;
    // cout << endl;
    // cout << "Nail Type :" << N3.getType() << endl;
    // cout << endl;
    // cout << "Nail Type :" << N4.getType() << endl;
    // N1.setType(D);
    // N2.setType(C);
    // N3.setType(B);
    // N4.setType(A);
    // cout << "-------------------------" << endl;
    // cout << "Testing Nails : " << endl;
    // cout << endl;
    // cout << "Nail Type :" << N1.getType() << endl;
    // cout << endl;
    // cout << "Nail Type :" << N2.getType() << endl;
    // cout << endl;
    // cout << "Nail Type :" << N3.getType() << endl;
    // cout << endl;
    // cout << "Nail Type :" << N4.getType() << endl;


}


int main(){

    testWood();
    testHandsaw();
    testHammer();
    testChair();
    testNail();

    return 0;
}