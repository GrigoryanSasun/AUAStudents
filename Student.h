#pragma once

#include "Date.h"
#include <string>

using namespace std;

class Student
{
private:
	static int _student_count;
	int _id_number;
	string _first_name;
	string _last_name;
	Date* _birth_date;
	string _faculty_name;
public:
	~Student();

	Student(string first_name, string last_name, string faculty_name);

	Student(const Student& student);

	void set_birth_date(int day, int month, int year);

	void set_name(string first_name, string last_name);

	string get_birth_date();

	string get_first_name();

	string get_last_name();

	string get_name();

	string get_id();
};