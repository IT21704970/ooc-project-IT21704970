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

Appointment::Appointment(int aNo, string aDate, string aTime, string aType, string aCusName, string cNo, RegisteredUser* reg, Service* service[SIZE2], Payment* payment)
{
	appointmentNo = aNo;
	appointmentDate = aDate;
	appointmentTime = aTime;
	customerName = aCusName;
	contactNo = cNo;
	regUser = reg;
	pay = payment;

	for (int i = 0; i < SIZE2; i++) {
		serv[i] = service[i];
	}
}
Appointment::Appointment(int pID1, string pMethod1, double amt1)
{
	pay = new Payment(pID1,pMethod1,amt1);
}

void Appointment::appointmentDetails(int aNo, string aDate, string aTime, string aType, string aCusName, string cNo)
{
}

void Appointment::viewAppointmentDetails()
{
}

string Appointment::getDate()
{
	return string();
}

string Appointment::getTime()
{
	return string();
}

string Appointment::getType()
{
	return string();
}

string Appointment::getCusName()
{
	return string();
}

int Appointment::getContactNo()
{
	return 0;
}

Appointment::~Appointment()
{
}