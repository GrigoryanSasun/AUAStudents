#include "InvalidDateException.h"
#include "Date.h"
#include <string>

using namespace std;

Date::Date()
{
	_day = 1;
	_month = 1;
	_year = 1900;
}

string Date::get_formatted_date()
{
	string monthNames[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	string currentMonthName = monthNames[_month - 1];
	return to_string(_year) + ", " + currentMonthName + " - " + to_string(_day);
}

void Date::initialize(int day, int month, int year)
{
	if (year <= 0)
	{
		throw InvalidDateException("The year should be positive!");
	}
	if ((month < 1) || (month > 12))
	{
		throw InvalidDateException("The month should be in range from 1 to 12!");
	}
	int maximumAllowedDay = 0;
	if (month == 2)
	{
		//If it is february, check for leap year
		bool isLeapYear = (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
		if (isLeapYear)
		{
			maximumAllowedDay = 29;
		}
		else
		{
			maximumAllowedDay = 28;
		}
	}
	else if (month < 8)
	{
		maximumAllowedDay = 30 + month % 2;
	}
	else {
		maximumAllowedDay = 31 - month % 2;
	}
	if ((day < 1) || (day > maximumAllowedDay))
	{
		throw InvalidDateException("The day should be in range from 1 to " + to_string(maximumAllowedDay) + "!");
	}
	_day = day;
	_month = month;
	_year = year;
}

