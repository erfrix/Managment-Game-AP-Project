// Class Hammer
// Has Durability as data
// Has Constructor
// Has Setter and Getter
// Setter validates input data

#ifndef HAMMER_H
#define HAMMER_H

#include "tool.hpp"

class Hammer : public Tool
{
	public:
		Hammer(float, string);
        Hammer(string);

		void setID(string);
        string getID();
        void setDurability(float);
        float getDurability();

        void use();
};
#endif /*HAMMER_H*/