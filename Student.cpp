#include "Date.h"
#include "Student.h"
#include <string>

using namespace std;

Student::~Student()
{
	delete _birth_date;
}

Student::Student(string first_name, string last_name, string faculty_name)
{
	_id_number = ++Student::_student_count;
	_first_name = first_name;
	_last_name = last_name;
	_faculty_name = faculty_name;
	_birth_date = new Date();
}

Student::Student(const Student& student)
{
	_id_number = ++Student::_student_count;
	_faculty_name = student._faculty_name;
	_birth_date = new Date();
}

void Student::set_birth_date(int day, int month, int year)
{
	_birth_date->initialize(day, month, year);
}

void Student::set_name(string first_name, string last_name)
{
	_first_name = first_name;
	_last_name = last_name;
}
	
string Student::get_birth_date()
{
	return _birth_date->get_formatted_date();
}
	
string Student::get_first_name()
{
	return _first_name;
}
	
string Student::get_last_name()
{
	return _last_name;
}
	
string Student::get_name()
{
	return _first_name + " " + _last_name;
}
	
string Student::get_id()
{
	return "AUA_" + _faculty_name + "_" + to_string(_id_number);
}

int Student::_student_count = 0;