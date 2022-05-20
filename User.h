#pragma once
#include <string>
using namespace std;

//Defining User Class
class User
{
protected:
	string name;
	string contactNo;
	string emailAddress;
	string userID;
	string gender;
	int age;
	string username;
public:
	User(string uName, string contact, string eAddress, string uID, string Ugender, int Uage, string user_name);
	void displayDetails();
	~User();
};