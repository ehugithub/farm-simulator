#include "animal.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// all function code


animal::animal (std::string namev, std::string speciesv) {
	srand (time(NULL));
	this->hunger = 100;
	this->age = 0;
	this->name = namev;
	this->species = speciesv;
	this->gender = rand() % 1 ? 'M': 'F';
}

void animal::display() {
	printf("Name: %s\nSpecies: %s\nHunger: %d\nAge: %d\nGender: %c\n", this->name, this->species, this->hunger, this->age, this->gender);
}