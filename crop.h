#include <string>
#ifndef CROP_H
#define CROP_H

class crop {
	private:
		int maturity, cost, thirst;	
		std::string type;
		bool planted;
	public:
		crop(std::string typev);
};


#endif