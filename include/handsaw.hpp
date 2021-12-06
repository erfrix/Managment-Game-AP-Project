// Class Handsaw
// Has Sharpness as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data

#ifndef HANDSAW_H
#define HANDSAW_H

#include "tool.hpp"

class Handsaw : public Tool
{
	public:
		Handsaw(float , string);
        Handsaw(string);
        
		void setID(string);
        string getID();
        void setDurability(float);
        float getDurability();

        void use();
};
#endif /* HANDSAW_H */