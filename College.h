#pragma once
#include <iostream>
#include <list>
using namespace std;

class College
{
private:
	string Name;
	string Address;
	int StudentCount;
	list<string>Course;
public:
	~College();
	void GetInfo();
	void Register();
	void GetTranscript();
	void CreateCourse(string title);

	College(string name, string address, int studentcount, list<string> course);

};

