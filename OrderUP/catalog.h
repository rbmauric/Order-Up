//Ryan Mauricio
//CPSC 362
#include <iostream>
#include <string>
#include <map>
#include "services.h"

#ifndef CATALOG_H
#define CATALOG_H

class catalog {
public:
	void setCatalogEntry(services serv, int key);
	std::map<services, int> getCatalog();

private:
	std::map<services, int> catalog;
};






#endif /*CATALOG_H*/
