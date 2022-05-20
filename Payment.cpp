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

Payment::Payment(int pID, string pMethod, double amt)
{
	paymentID = pID;
	paymentMethod = pMethod;
	amount = amt;
}

void Payment::paymentDetails()
{
}

double Payment::calcPayment()
{
}

Payment::~Payment()
{
}