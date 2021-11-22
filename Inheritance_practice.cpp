//payment.cpp
//
//This program introduces inheritance through a problem of
// creating two types of Payments, Cash and Credit. The
// PaymentDetails method outputs in English a sentence that describes
// the payment.
#include <iostream>
#include <string>
using namespace std;
// Base class to store a payment amount and get a description
class Payment
{
public:
	Payment();
	Payment(float amount);
	void setPayment(float amount);
	float getPayment();
	void paymentDetails();
private:
	float amount;
};
// ======================
// Payment
// Constructor to initialize amount to 0
// ======================
Payment::Payment() : amount(0)
{
}
// ======================
// Payment
// Constructor to initialize default amount
// ======================
Payment::Payment(float amt) : amount(amt)
{
}
// ======================
// payment accessor/mutator methods
// ======================
void Payment::setPayment(float amt)
{
	amount = amt;
}
float Payment::getPayment()
{
	return amount;
}
// ======================
// paymentDetails
// Outputs the payment information in English
// ======================
void Payment::paymentDetails()
{
	cout << "The payment amount is " << amount << endl;;
}
// --------------------------------
// ----- ENTER YOUR CODE HERE -----
// --------------------------------
// First define and implement class for CashPayment, derive from Payment
class CashPayment :public Payment
{
public:
	CashPayment();
	CashPayment(float amt);
	void paymentDetails();
};
CashPayment::CashPayment() : Payment() {}
CashPayment::CashPayment(float amt) : Payment(amt) {}
void CashPayment::paymentDetails()
{
	cout << "The cash payment amount is " << getPayment() << endl;
}
// Next define and implement class for CreditCardPayment, derive from Payment.
// This could be made more flexible with mutator and accessor
// methods for the name, expiration, and creditcard variables.
class CreditCardPayment:public Payment
{
public:
	CreditCardPayment();
	CreditCardPayment(float amt, string name, string date, string number);
	void paymentDetails();
private:
	string cardName;
	string expDate;
	string cardNumber;
};
CreditCardPayment::CreditCardPayment() :Payment() {}
CreditCardPayment::CreditCardPayment(float amt, string name, string date, string number)
	: cardName(name), expDate(date), cardNumber(number)
{
	setPayment(amt);
}
void CreditCardPayment::paymentDetails()
{
	cout << "The credit card payment amount is " << getPayment() << endl;
	cout << "The name on the card is: " << cardName << endl;
	cout << "The expiration date is: " << expDate << endl;
	cout << "The credit card number is: " << cardNumber << endl;
}
// --------------------------------
// --------- END USER CODE --------
// --------------------------------

// ======================
// main function
// ======================
int main()
{
	// Create several test classes and invoke the paymentDetails method
	CashPayment cash1(200.14), cash2(30.125);
	CreditCardPayment credit1(90.5, "Canyon", "8/3/1997", "89032313");
	CreditCardPayment credit2(80, "Showmaker","7 / 25 / 1998", "99100036");
	cout << "Cash 1 details:" << endl;
	cash1.paymentDetails();
	cout << endl;
	cout << "Cash 2 details:" << endl;
	cash2.paymentDetails();
	cout << endl;
	cout << "Credit 1 details:" << endl;
	credit1.paymentDetails();
	cout << endl;
	cout << "Credit 2 details:" << endl;
	credit2.paymentDetails();
	cout << endl;
	return 0;
}