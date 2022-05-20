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

class Appointment
{
private:
	int appointmentNo;
	string appointmentDate;
	string appointmentTime;
	string appointmentType;
	string customerName;
	string contactNo;
	RegisteredUser* regUser;
	Service* serv[SIZE2];
	Payment* pay;
public:
	Appointment(int aNo, string aDate, string aTime, string aType, string aCusName, string cNo, RegisteredUser* reg, Service* service[SIZE2],Payment* payment);
	Appointment(int pID1,string pMethod1,double amt1);
	void appointmentDetails(int aNo, string aDate, string aTime, string aType, string aCusName, string cNo);
	void viewAppointmentDetails();
	string getDate();
	string getTime();
	string getType();
	string getCusName();
	int getContactNo();
	~Appointment();
};