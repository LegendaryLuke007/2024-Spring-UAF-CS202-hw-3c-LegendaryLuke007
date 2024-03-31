#pragma once

#include <iostream>

class Link {

        private:

        public:

                Link();

                Link(double value);
                
		~Link();

                double value;

                Link* next;

		std::ostream& os, const Link& link;



};
