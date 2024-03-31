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
	std::cerr << "LinkedList(" << head << ") is being constructed." << std::endl;

}

LinkedList::~LinkedList()
{

	std::cerr << "LinkedList(" << head << ") is being deconstructed." << std::endl;

	delete head;

	std::cerr << "LinkedList(" << head << ") has been deoncstructed." <<std::endl;

}

void LinkedList::push_back(double value) 
{
	
	Link* newLink = new Link(value);

	if (head == nullptr) {
		
		head == newLink;
	
	}
	else 
	{
		LinkedList* current = head;
		while (current->next != nullptr)
		{
			current = current ->next;
		}
	}

	std::cerr << "Inserted a new linke with value " << value << " at the end of teh list." << std::endl;	

}
