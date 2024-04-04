// Luke A. Martin
// 3/31/24
// LinkedList.cpp
//
//
#include <iostream>
#include "LinkedList.h"
#include "Link.h"

LinkedList::LinkedList() 
	: head{nullptr}
{
	std::cerr << "LinkedList object constructed using LinkedList() default constructor." << std::endl;

}

LinkedList::~LinkedList()
{

	std::cerr << "LinkedList() is being deconstructed using ~LinkedList() destructor" << std::endl;

	delete head;

	std::cerr << "LinkedList() has been deconstructed." <<std::endl;

}

void LinkedList::insert(double value) 
{

	if (head == nullptr) {
		
		head = new Link(value);
	
	}
	
	else 
	{
		Link* current = head;
		Link* previous = nullptr;
		
		while (current != nullptr)
		{
			previous = current;

			current = current->next; // "next" is from Link.h
		}
	
		previous->next = new Link(value);
	}

	std::cerr << "Inserted a new link with value " << value << " at the end of the list." << std::endl;	

}
