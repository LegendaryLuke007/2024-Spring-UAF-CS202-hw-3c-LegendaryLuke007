// Name: Luke
// Date: 3/31/24
// Link.cpp

#include <iostream>
#include "Link.h"


Link::Link()
        : value{0.0}, next{nullptr}
{

                std::cerr << "Link("<< value <<") is being constructed" << std::endl;


}

Link::Link(double value)
{

	std::cerr << "Link(" << value <<") is being constructed" << std::endl;


}
// Related to Link(operator) in Link.h
std::ostream& operator<<(std::ostream& os, cosnt Link& link)


Link::~Link()
{
	std::cerr << "Link(" << value << ") object is being destructed using ~Link() destructor" << std::endl;

        delete next;

        std::cerr << "Link(" << value << ") object has been destructed using ~Link() destructor" << std::endl;
       
}

