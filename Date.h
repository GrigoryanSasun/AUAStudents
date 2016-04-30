#pragma once
#include <string>

using namespace std;

class Date
{
private:
	int _day;
	int _month;
	int _year;
public:
	Date();
	string get_formatted_date();
	void initialize(int day, int month, int year);
};