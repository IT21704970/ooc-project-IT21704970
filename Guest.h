#include "Appointment.h"
#include "Feedback.h"
#include "Guest.h"
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

class Guest
{
private:
	string name;
	int contactNo;
	string emailAddress;
	Feedback* fb[SIZE1];
	Service* serv[SIZE2];
	PetProduct* ppro[SIZE2];
public:
	Guest(string gName, int cNo, string eAddress, Feedback* feedbk[SIZE1], Service* service[SIZE2], PetProduct* petpro[SIZE2]);
	void viewServices();
	void sendInquiries();
	~Guest();
};
