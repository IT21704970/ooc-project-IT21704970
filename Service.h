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

class Service
{
private:
	string serviceID;
	string serviceType;
	double serviceFee;
	Appointment* app[SIZE2];
public:
	Service(string sID, string sType, double sFee, Appointment* appoint[SIZE2]);
	void serviceDetails(string sID, string sType, double sFee);
	void viewServiceDetails();
	~Service();
};