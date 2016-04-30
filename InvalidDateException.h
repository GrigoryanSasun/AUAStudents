#pragma once

#include <string>
#include <exception>

using namespace std;

class InvalidDateException : public exception
{
private:
	string _invalid_date_message;

public:
	virtual const char* what() const throw();
	InvalidDateException(const string& message);
};
