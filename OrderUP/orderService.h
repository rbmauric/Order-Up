//Ryan Mauricio
//CPSC 362
#include <iostream>
#include <string>
#include "user.h"
#include "catalog.h"
#include "networkManager.h"
#include "serviceManager.h"

#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H

class orderService : public networkManager, public serviceManager {
public:
	void addTransaction();
	bool userConsent(bool consent);

	int computeCost(std::list<int> orders);
	void checkCatalog(catalog cat);
	void order();
	void relatedServices(catalog cat);

private:
	user mainUser;
	
};



#endif /*ORDERSERVICE_H*/