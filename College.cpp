#include "College.h"

College::College(string name, string address)
{
	Name=name;
	Address=address;

}


void College::GetInfo() {
	cout << "Name: " << Name << endl;
	cout << "Address: " << Address << endl;
	cout << "Population: " << StudentCount << endl;
	cout << "Course Count: " << CourseCount << endl;
	cout << "Course: ";
	for (string coursetitles : Course)
	{
		cout << coursetitles << ", ";
	}

	cout << endl;
}

void College::Register(){
	StudentCount++;
}

void College::Graduate() {
	StudentCount--;
}


void College::GetTranscript(){
	cout << "Transcript recieved" << endl;
}

void College::CreateCourse(string title) {
	Course.push_back(title);
	CourseCount++;
}

College::~College(){}