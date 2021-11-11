// Class Hammer
// Has Durability as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data

#ifndef HAMMER_H
#define HAMMER_H
class Hammer{
private:
        float Durablity = 100.0;
public:
        //Constructor - Input : Durability
        Hammer(float durability);
        //Setter and Getter for Durability
        void setDurability(float durablity);
        float getDurability();
};
#endif /*HAMMER_H*/