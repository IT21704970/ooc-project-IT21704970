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

Report::Report(int rNo, PetProduct* petPro[SIZE1], Appointment* appoint[SIZE1], Payment* purchase[SIZE1], Service* service[SIZE1], Feedback* feedbk[SIZE1])
{
	reportNo = rNo;
	for (int i = 0; i < SIZE1; i++) {
		pPro[i] = petPro[i];
	}
	for (int i = 0; i < SIZE1; i++) {
		app[i] = appoint[i];
	}
	for (int i = 0; i < SIZE1; i++) {
		pay[i] = purchase[i];
	}
	for (int i = 0; i < SIZE1; i++) {
		serv[i] = service[i];
	}
	for (int i = 0; i < SIZE1; i++) {
		fb[i] = feedbk[i];
	}
}

void Report::productDetailsreport()
{
}

void Report::appointmentDetailsreport()
{
}

void Report::paymentDetailsreport()
{
}

void Report::serviceDetailsreport()
{
}

void Report::feedbackDetailsreport()
{
}

Report::~Report()
{
}