// Name: Luke
// Date: 3/31/24
// Link.cpp

#include <iostream>
#include "Link.h"


Link::Link()
        : value{0.0}, next{nullptr}
{

                std::cerr << "Link(" << value << ") is being constructed" << std::endl;


}

Link::Link(double v) 
	: value{v}
      	,next{nullptr}

{

	std::cerr << "Link object cosntructed using Link(" << value << ") constructor" << std::endl;


}

Link::~Link()
{
	std::cerr << "Link(" << value << ") object is being destructed using ~Link() destructor" << std::endl;

        delete next;

        std::cerr << "Link(" << value << ") object has been destructed using ~Link() destructor" << std::endl;
       
}



std::ostream& operator<<(std::ostream& os, const Link& link)
{
        os << "Link(" << link.value << ")";
        if (link.next != nullptr)
        {

                os << " -> " << *(link.next);
        }

        return os;
}
