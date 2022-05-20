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

Service::Service(string sID, string sType, double sFee, Appointment* appoint[SIZE2])
{
	serviceID = sID;
	serviceType = sType;
	serviceFee = sFee;
	for (int i = 0; i < SIZE2; i++) {
		app[i] = appoint[i];
	}
}

void Service::serviceDetails(string sID, string sType, double sFee)
{
}

void Service::viewServiceDetails()
{
}

Service::~Service()
{
}