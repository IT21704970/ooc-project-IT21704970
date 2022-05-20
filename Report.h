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

class Report
{
private:
	int reportNo;
	PetProduct* pPro[SIZE1];
	Appointment* app[SIZE1];
	Payment* pay[SIZE1];
	Service* serv[SIZE1];
	Feedback* fb[SIZE1];
public:
	Report(int rNo, PetProduct* petPro[SIZE1], Appointment* appoint[SIZE1], Payment* purchase[SIZE1], Service* service[SIZE1], Feedback* feedbk[SIZE1]);
	void productDetailsreport();
	void appointmentDetailsreport();
	void paymentDetailsreport();
	void serviceDetailsreport();
	void feedbackDetailsreport();
	~Report();
};