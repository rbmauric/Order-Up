//Ryan Mauricio
//CPSC 362
#include <iostream>
#include <string>
#include <list>
#include "catalog.h"

#ifndef SERVICEMANAGER_H
#define SERVICEMANAGER_H

class serviceManager {
public:
	virtual int computeCost(std::list<int> orders) = 0;
	virtual void checkCatalog(catalog cat) = 0;
	virtual void order() = 0;
	virtual void relatedServices(catalog cat) = 0;

private:


};



#endif /*SERVICEMANAGER_H*/
