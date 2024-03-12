#include <iostream>
#include "College.h"
#include "ComputingCollege.h"
#include "MedicalCollege.h"
using namespace std;


int main()
{
	ComputingCollege C1("TU Dublin", "Belgard Road Tallaght", "Computer lab 2");
	MedicalCollege M1("TU Dublin", "Belgard Road Tallaght", "Computer lab 2", "Male surgical ward");

	C1.CreateCourse("Software Dev1");
	C1.CreateCourse("Oracle DB");
	C1.CreateCourse("Networking");

	C1.Register();
	C1.Register();
	C1.Register();
	C1.Register();
	C1.Register();

	C1.Graduate();
	C1.Graduate();

	C1.GetInfo();
	C1.GetTranscript();
	C1.Hackaton();

	M1.CreateCourse("Anatomy & Physiology");
	M1.CreateCourse("Pharmacology");
	M1.Register();
	M1.Register();
	M1.Graduate();
	M1.GetInfo();
	M1.GetTranscript();
	M1.Hackaton();
	M1.PostingList("OBS & Gynae");
	M1.PostingList("Pediatric ward");
	M1.PostingList("ICU");
	M1.PostingList("Male Surgical");

	return 0;
}