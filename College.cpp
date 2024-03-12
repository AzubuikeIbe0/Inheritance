#include "College.h"

College::College(string name, string address, int studentcount, list<string> course)
{
	name = Name;
	address = Address;
	studentcount = StudentCount;
	course = Course;
}


void College::GetInfo() {
	cout << "Name" << Name << endl;
	cout << "Address" << Address << endl;
	cout << "Population" << StudentCount << endl;
	//cout << "Course" << Course << endl;
}

void College::Register(){
	cout << "New student registered" << endl;
}

void College::GetTranscript(){
	cout << "Transcript recieved" << endl;
}

void College::CreateCourse(string title) {
	Course.push_back(title);
}

College::~College(){}