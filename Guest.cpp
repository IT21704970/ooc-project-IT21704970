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

Guest::Guest(string gName, int cNo, string eAddress, Feedback* feedbk[SIZE1], Service* service[SIZE2], PetProduct* petpro[SIZE2])
{
	name = gName;
	contactNo = cNo;
	emailAddress = eAddress;
	for (int i = 0; i < SIZE1; i++) {
		fb[i] = feedbk[i];
	}
	for (int i = 0; i < SIZE2; i++) {
		serv[i] = service[i];
	}
	for (int i = 0; i < SIZE2; i++) {
		ppro[i] = petpro[i];
	}
}

void Guest::viewServices()
{
}

void Guest::sendInquiries()
{
}

Guest::~Guest()
{
}