#include <iostream>
#include "Date.cpp"

using namespace std;

int main() 
{
	while (true)
	{
		int day, month, year;
		cout << "Input day: ";
		cin >> day;
		cout << "Input month: ";
		cin >> month;
		cout << "Input year: ";
		cin >> year;
		Date* date = new Date();
		try
		{
			date->initialize(day, month, year);
		}
		catch (InvalidDateException& exception)
		{
			cout << "ERROR: " << exception.what() << endl;
			continue;
		}
		cout << "Successfully done";
	}
	return 0;
}