#pragma once

class Link {

        private:

        public:

                Link();

                Link(double value);

		Link(std::ostream& os, const Link& link);

                ~Link();

                double value;

                Link* next;



};
