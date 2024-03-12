#pragma once
#include "College.h"
#include "ComputingCollege.h"
class MedicalCollege : public ComputingCollege
{
private: 
	string WardPosting;
	int HospitalFinalScore;
	list<string> postings;
public:
	MedicalCollege(string name, string address, string lab, string wardposting);
	void FinalExamScore();
	void PostingList(string ward);
};

