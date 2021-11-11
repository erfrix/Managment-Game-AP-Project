// Class Nail
// Has Nail Type as data
// Has Constructor
// Has Setter and Getter

#ifndef NAIL_H
#define NAIL_H

enum typeNail { A , B , C , D };

class Nail{
private:
        typeNail Type;
public:
        //Constructor - Inputs : Nail type
        Nail(typeNail type);
        //Setter and Getter for nail type
        void setType(typeNail type);
        typeNail getType();
};
#endif /* NAIL_H */

