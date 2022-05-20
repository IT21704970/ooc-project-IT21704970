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

class Staff : public User
{
private:
	string jobRole;
	string city;
	Feedback* feedback[SIZE1];
	Payment* pay[SIZE2];
public:
	Staff(string uName, string contact, string eAddress, string uID, string Ugender, int Uage, string user_name,string jRole, string S_city,Feedback* feedbck[SIZE1] ,Payment* payment[SIZE2]);
	void setJobRole(string jRole);
	void staffDetails(string jRole, string S_city);
	void viewStaffDetails();
	void confirmAppointment();
	void validatePayment();
	void manageServices();
	void validateFeedback();
	~Staff();
};