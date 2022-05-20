class payment
{
private:
	int paymentID;
	char paymentDate[6];
	char paymentType[10];
	double paymentAmount;

public:
	payment();
	payment(int p_ID, const char p_Type[], const char p_Date[], double p_Amnt);
	void Check_PaymentDate();
	void confirm_PaymentDate();
	void verifypayment();
	void displayPaymentDetails();
	~payment();
};
