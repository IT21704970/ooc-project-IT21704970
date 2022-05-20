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
#pragma once
#include <string>
#define SIZE1 20
#define SIZE2 10
using namespace std;

//CREATING OBJECTS AND CALLING NECESSARY CONSTRUCTORS
int main()
{
	User *user;
	RegisteredUser *registereduser;
	Staff *staff;
	Guest *guest;
	Feedback *feedback;
	Appointment *appointment;
	Payment *payment;
	Service *service;
	PetProduct *petproduct;
	Report *report;

	//ALLOCATING MEMORY 
	user = new User("Shenaya","0778457765","shenayaJ@gmail.com","US001","Female",22,"shenayaj2022");

	registereduser = new RegisteredUser("Jude", "0768457765", "JudeM@gmail.com", "US002", "Male", 28, "Judemel123","1994-11-04","98/4,Malabe",feedback,petproduct,payment,appointment);

	staff = new Staff("Jagath", "0718457765", "Jagaths@gmail.com", "ST001", "Male", 48, "jagathS","Groomer","Matara",feedback,payment);

	guest = new Guest("Anonymous1","",feedback,service,petproduct);

	feedback = new Feedback(01,"Excellent service", "Shenaya");

	appointment = new Appointment(01,"2022-5-19","18:00","Dog Grooming","Shenaya","0768455667",registereduser,service,payment);

	payment = new Payment(001,"Visa",9500);

	service = new Service("SR001","Grooming",9500,appointment);

	petproduct = new PetProduct("PR001","Zooloyal Dog Food",12900);

	report = new Report(01,petproduct,appointment,payment,service,feedback);


	//RELEASING USED MEMORY
	delete user;
	delete registereduser;
	delete staff;
	delete guest;
	delete feedback;
	delete appointment;
	delete payment;
	delete service;
	delete petproduct;
	delete report;


	return 0;
}