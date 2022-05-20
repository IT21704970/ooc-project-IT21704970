#include "User.h"

User::User(string uName, string contact, string eAddress, string uID, string Ugender, int Uage, string user_name)
{
	name = uName;
	contactNo = contact;
	emailAddress = eAddress;
	userID = uID;
	gender = Ugender;
	age = Uage;
	username = user_name;
}

void User::displayDetails()
{
}

User::~User()
{
}