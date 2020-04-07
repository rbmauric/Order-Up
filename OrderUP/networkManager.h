#include <iostream>
#include <string>

#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

class networkManager {
public:
	virtual void addTransaction() = 0;
	virtual bool userConsent(bool consent) = 0;
	void setConsent();
	bool getConsent();

private:
	bool consent;
};



#endif /*NETWORKMANAGER_H*/
