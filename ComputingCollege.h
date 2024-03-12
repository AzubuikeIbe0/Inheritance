#pragma once
#include "College.h"
class ComputingCollege : public College
{
private:
	string Lab;
public:
	ComputingCollege(string name, string address, string lab);
	void Hackaton();
};

