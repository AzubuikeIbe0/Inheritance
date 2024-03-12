#include "ComputingCollege.h"
#include "College.h"
using namespace std;

ComputingCollege::ComputingCollege(string name, string address, string lab) : College(name,  address) {
	Lab = lab;
}

void ComputingCollege::Hackaton() {
	cout << "Hackaton is on-going!" << endl;
}