#include "MedicalCollege.h"

MedicalCollege::MedicalCollege(string name, string address, string lab, string wardposting) : ComputingCollege(name, address, lab) {
	WardPosting = wardposting;
}

void MedicalCollege::FinalExamScore() {

	

}

void MedicalCollege::PostingList(string ward) {
	int postingcount=0;

	postings.push_back(ward);
	postingcount++;
	

	cout << "Postings: ";
	for (string wardname : postings)
	{
		cout << wardname << ": " << postingcount << ", ";
	}
	cout << endl;
}
