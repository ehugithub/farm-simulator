#include "crop.h"

crop::crop (std::string typev) {
	this->maturity = 0;
	this->thirst = 0;
	this->planted = false;
	this->type = typev;
}