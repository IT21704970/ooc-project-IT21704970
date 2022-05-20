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

Staff::Staff(string uName, string contact, string eAddress, string uID, string Ugender, int Uage, string user_name, string jRole, string S_city, Feedback* feedbck[SIZE1],Payment* payment[SIZE2]) : User(uName, contact, eAddress, uID, Ugender, Uage, user_name)
{
	jobRole = jRole;
	city = S_city;
	for (int i = 0; i < SIZE1; i++) {
		feedback[i] = feedbck[i];
	}
	for (int i = 0; i < SIZE2; i++) {
		pay[i] = payment[i];
	}
}

void Staff::setJobRole(string jRole)
{
}


void Staff::staffDetails(string jRole, string S_city)
{
}

void Staff::viewStaffDetails()
{
}

void Staff::confirmAppointment()
{
}

void Staff::validatePayment()
{
}

void Staff::manageServices()
{
}

void Staff::validateFeedback()
{
}

Staff::~Staff()
{
}
