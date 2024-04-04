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
		LinkedList();

		~LinkedList();

		void insert(double value);
};


