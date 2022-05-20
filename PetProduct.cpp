
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

PetProduct::PetProduct(string pID, string pName, double pValue)
{
	productID = pID;
	productName = pName;
	productValue = pValue;
}

void PetProduct::petProductDetails()
{
}

void PetProduct::viewPetProductDetails()
{
}

PetProduct::~PetProduct()
{
}
