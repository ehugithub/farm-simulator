#include "animal.h"
#include <time.h>
#include <stdio.h>
#include <iostream>
using namespace std;
// all function code


animal::animal (std::string namev, std::string speciesv) {
	srand (time(NULL));
	this->hunger = 100;
	this->age = 0;
	this->name = "Frank";
	this->species = "birb";
	this->gender = rand() % 1 ? 'M': 'F';
}

void animal::display() {
	//printf("Name: %s\nSpecies: %s\nHunger: %d\nAge: %d\nGender: %c\n", this->namae, this->species, this->hunger, this->age, this->gender);
	cout << "Name: " << this->name << endl << "Species: "<< this->species << endl << "Hunger: " << this->hunger << endl;
	cout << "Age: " << this->age << endl << "Gender: " << this->gender << endl;
}