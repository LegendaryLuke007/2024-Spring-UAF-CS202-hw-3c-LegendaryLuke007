// Luke A. Martin
// 3/31/24
// LinkedList.h
//
#include "Link.h"
#include <iostream>

class LinkedList {


	private:

		Link* head;

	public:
		LinkedList()
		{
			// default constructor
		}

		~LinkedList()
		{
			// default deconstructor
		}

		void LinkedList::insert(double value);

};
