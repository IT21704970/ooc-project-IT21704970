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

class PetProduct
{
private:
	string productID;
	string productName;
	double productValue;
public:
	PetProduct(string pID, string pName, double pValue);
	void petProductDetails();
	void viewPetProductDetails();
	~PetProduct();
};