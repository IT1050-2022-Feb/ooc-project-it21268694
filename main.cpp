#include"appointment.h"
#include"stocks.h"
#include"supplier.h"
#include"customer.h"
#include"staff.h"
#include"purchase.h"
#include"user.h"
#include"payment.h"
#include"report.h"
#include<iostream>


using namespace std;
int main()
{
	//Object creation
	RegUser* user = new user();
	user* supplier = new supplier();
	user* customer = new customer();
	purchase* purch = new purchase();
	stocks* stock = new stocks();
	appointment* appoint = new appointment();
	Staff* staff = new Staff();
	Report* report = new Report();
	user->login();
	user->displayDetails();
	supplier->login();
	supplier->displaySupplyDetails();
	customer->login();
	customer->displayCustomerDetails();
	purch->updatePurchase_Details();
	purch->DisplayPurchase_Details();
	stock->addStocks();
	stock->displayStockDetails();
	appoint->addAppointmentDetails();
	appoint->DiasplayApoointmentPayment();
	report->appointmentDetailsReport();
	report->purchasesDetailsReport();
	report->paymentDetailsReport();
	delete user;
	delete supplier;
	delete customer;
	delete purchase;
	delete stocks;
	delete appointment;
	delete report;
	return 0;
}