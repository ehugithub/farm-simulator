#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H

class animal {
	private:
		int age, cost, hunger;
		std::string name; 
		std::string species;
		char gender;
	public:
		void feed (void);
		void kill (void);
		animal(std::string namev, std::string speciesv);
} ;

 
#endif