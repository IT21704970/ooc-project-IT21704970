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

Feedback::Feedback(int fNo, string fDescr, string cName)
{
	feedbackNo = fNo;
	feedbackDescr = fDescr;
	cusName = cName;
}

void Feedback::feedbackDetails()
{
}

void Feedback::viewFeedbackDetails()
{
}

Feedback::~Feedback()
{
}