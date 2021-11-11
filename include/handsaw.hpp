// Class Handsaw
// Has Sharpness as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data

#ifndef HANDSAW_H
#define HANDSAW_H

class Handsaw{
private:
        float Sharpness = 100.0;
public:
        //Constructor - Input : Sharpness
        Handsaw(float sharpness);
        //Setter and Getter for Sharpness
        void setSharpness(float sharpness);
        float getSharpness();
};
#endif /* HANDSAW_H */