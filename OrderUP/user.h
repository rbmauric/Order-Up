//Ryan Mauricio
//CPSC 362
#include <iostream>
#include <string>
#include <list>

#ifndef USER_H
#define USER_H

class user {
public:
	void setName(std::string name);
	void setPassword(std::string password);
	void setWallet(double wallet);
	void setPreferences(std::list<std::string> preferences);
	void setPastOrders(std::list<std::string> pastOrders);

	std::string getName();
	std::string getPassword();
	double getWallet();
	std::list<std::string> getPrefrerences();
	std::list<std::string> getPastOrders();
	

private:
	std::string name;
	std::string password;
	double wallet;
	std::list<std::string> preferences;
	std::list<std::string> pastOrders;
};




#endif /*USER_H*/