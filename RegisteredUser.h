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

//Defining RegisteredUser Class
class RegisteredUser : public User
{
private:
	string dateOfBirth;
	string address;
	Feedback* feedbk[SIZE1];
	PetProduct* ppro[SIZE2];
	Payment* pay[SIZE2];
	Appointment* app[SIZE2];

public:
	RegisteredUser(string uName, string contact, string eAddress, string uID, string Ugender, int Uage, string user_name,string dob, string addr,Feedback* fb[SIZE1], PetProduct* petpro[SIZE2], Payment* payment[SIZE2], Appointment* appoint[SIZE2]);
	RegisteredUser(string uName, string contact, string eAddress, string uID, string Ugender, int Uage, string user_name, int fNo1, int fNo2, string fDescr1, string fDescr2, string cusName1, string cusName2);
	void registeredUserDetails(string dob, string addr);
	void viewRegisteredUserDetails();
	void updateProfile();
	~RegisteredUser();
};