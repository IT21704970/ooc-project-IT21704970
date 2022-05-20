#include "Payment.h"
#include "PetProduct.h"
#include "RegisteredUser.h"
#include "Report.h"
#include "Service.h"
#include "Staff.h"
#include "User.h"
#pragma once
#include <string>
#define SIZE1 20
#define SIZE2 10
using namespace std;

class Payment
{
private:
	int paymentID;
	string paymentMethod;
	double amount;
public:
	Payment(int pID, string pMethod, double amt);
	void paymentDetails();
	double calcPayment();
	~Payment();
};