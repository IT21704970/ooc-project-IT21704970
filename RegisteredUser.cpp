#include "Appointment.h"
#include "Feedback.h"
#include "Guest.h"
#include "Payment.h"
#include "PetProduct.h"
#include "RegisteredUser.h"
#include "Report.h"
#include "Service.h"
#include "Staff.h"
#include "User.h""

RegisteredUser::RegisteredUser(string uName, string contact, string eAddress, string uID, string Ugender, int Uage, string user_name, string dob, string addr,Feedback* fb[SIZE1], PetProduct* petpro[SIZE2], Payment* payment[SIZE2], Appointment* appoint[SIZE2]) : User(uName, contact, eAddress, uID, Ugender, Uage, user_name)
{
	dateOfBirth = dob;
	address = addr;
	for (int i = 0; i < SIZE1; i++) {
		feedbk[i] = fb[i];
	}
	for (int i = 0; i < SIZE2; i++) {
		ppro[i] = petpro[i];
	}
	for (int i = 0; i < SIZE2; i++) {
		pay[i] = payment[i];
	}
	for (int i = 0; i < SIZE2; i++) {
		app[i] = appoint[i];
	}
}
RegisteredUser::RegisteredUser(string uName, string contact, string eAddress, string uID, string Ugender, int Uage, string user_name, int fNo1, int fNo2, string fDescr1, string fDescr2, string cusName1, string cusName2) : User(uName, contact, eAddress, uID, Ugender, Uage, user_name)
{
	feedbk[0] = new Feedback(fNo1,fDescr1,cusName1);
	feedbk[1] = new Feedback(fNo2,fDescr2,cusName2);
}
void RegisteredUser::registeredUserDetails(string dob, string addr)
{
}

void RegisteredUser::viewRegisteredUserDetails()
{
}

void RegisteredUser::updateProfile()
{
}

RegisteredUser::~RegisteredUser()
{
	for (int i = 0; i < SIZE1; i++)
	{
		delete feedbk[i];
	}
}