//User
#include"purchase.h"
class user
{
protected:
	char userNIC[12];
	char usFirstName[20];
	char userLastName[20];
	char userDOB[20];
	char userMobileNumber[10];
	char userAddress[50];
	char userGender[15];
	char userEmail[50];

public:
	user();
	user(const char u_NIC[], const char u_F_Name[], const char u_L_Name[], const char u_DOB[], const char u_Mob_Num[], const char u_Addr[], const char u_Gender[], const char u_Email[]);
	void makePurchase(purchase* mPurch);
	void registerUser();
	virtual void displayDetails();
	~user();

};
