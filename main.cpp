#include <iostream>
#include "animal.cpp"
#include "crop.cpp"
using namespace std;

int main()
{
	cout << "Welcome to farm simulator!" << endl;
	cout << "Starting a new game:" << endl;
	cout << "In this game, you start off as a poor farmer. Expand your farm to become the richest person in the game!" << endl;
	
	animal cow1 ("Obi Wan", "Cow");
	cow1.display();
	getchar();
	
	return 0;
}
