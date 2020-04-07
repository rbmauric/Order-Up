//Ryan Mauricio
//CPSC 362
#include <iostream>
#include <string>

#ifndef PRODUCT_H
#define PRODUCT_H

class product {
public:
	void setName(std::string name);
	void setCost(double cost);
	
	std::string getName();
	double getCost();

private:
	std::string name;
	double cost;
};






#endif /*PRODUCT_H*/
