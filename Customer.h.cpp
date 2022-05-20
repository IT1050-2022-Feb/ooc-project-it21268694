//customer
#include"user.h"
#include"purchase.h"
#define SIZE 5
class customer :public user {
protected:
	char cus_name[20];
	char cus_Password[20];
	int purchase_services;

	purchase* buy_services[SIZE];

public:
	customer();
	customer(const char c_Username[], const char c_Password[], const char u_NIC[], const char u_F_Name[], const char u_L_Name[], const char u_DOB[], const char u_Mob_Num[], const char u_Addr[], const char u_Gender[], const char u_Email[],
		int purchase_services;);
	void displayCustomerDetails();
	void logout();
	void login();
	char checkLoginDetails();
	void addBuyingServices(purchase* pbuy_services);
	~customer();
};
