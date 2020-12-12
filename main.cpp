#include <iostream>
#include "animal.cpp"
#include "crop.cpp"
using namespace std;

int main()
{
	cout << "Welcome to farm simulator!" << endl;
	animal cow1 ("Obi Wan", "Cow");
	cow1.display();
	getchar();
	
	return 0;
}
