#pragma once
#include <iostream>
#include "Student.h"

using namespace std;

int main() 
{
	Student s("Aram", "Grigoryan", "CS"); //constructor
	s.set_birth_date(12, 7, 1995);

	Student d(s); //copy constructor
	d.set_name("Anna", "Sargsyan");
	d.set_birth_date(1, 5, 1995);

	std::cout << "Below is the information about the registered students"
		<< std::endl;
	std::cout << s.get_name() << " " << s.get_id() << std::endl;
	std::cout << s.get_birth_date() << std::endl;

	std::cout << d.get_name() << " " << d.get_id() << std::endl;
	std::cout << d.get_birth_date() << std::endl;
	cin.get();
	return 0;
}