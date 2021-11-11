# ManagmentGame - AP Project - 4 Phases

- [x] Phase 1 - Classes
- [ ] Phase 2
- [ ] Phase 3
- [ ] Phase 4

## Phase 1  
Classes are implemented - code in `/src` and `/include`  
Executible in `/bin`
##Classes  
Classes are :  
**Woodplank** - **Handsaw** - **Hammer** - **Nail**  
### Class : WoodPlank  
Properties : Length, Width, Thickness, Type
``` 
float Length; // Tool
float Width; // Arz
float Thickness; // Ertefa
typeWood Type; // Enum typeWood -> { Oak , Maple , Walnut , Teak , Ash }
```  
Has a constructor than inputs length, width, thickness and wood :  
in `/include/woodplank.hpp` -> 
```
WoodPlank(float l , float w , float th , typeWood t);
```  
in `/src/woodplank.cpp` ->  
```
WoodPlank::WoodPlank(float l , float w , float th , typeWood t )
{
            Length = l;
            Width = w;
            Thickness = th;
            Type = t;
}
```  
Has setters and getters for each variable.  
