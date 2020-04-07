//Ryan Mauricio
//CPSC 362
#include <iostream>
#include <string>
#include <list>
#include "product.h"

#ifndef SERVICES_H
#define SERVICES_H

class services {
public:
	void setProducts(product prod);
	std::list<product> getProducts();

private:
	std::list<product> services;
};






#endif /*SERVICES_H*/
