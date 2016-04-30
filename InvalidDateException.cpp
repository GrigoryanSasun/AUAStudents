#include <string>

using namespace std;

class InvalidDateException : public exception
{
private:
	string _invalid_date_message;
public:
	virtual const char* what() const throw()
	{
		return _invalid_date_message.c_str();
	}

	InvalidDateException(const string& message) {
		_invalid_date_message = message;
	}
};
