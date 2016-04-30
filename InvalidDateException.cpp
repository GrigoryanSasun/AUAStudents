#include "InvalidDateException.h"
#include <string>

using namespace std;

const char* InvalidDateException::what() const throw() 
{
	return _invalid_date_message.c_str();
}

InvalidDateException::InvalidDateException(const string& message)
{
	_invalid_date_message = message;
}
