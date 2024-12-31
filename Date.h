#pragma once
class Date
{
private:
	short day;
	short month;
	int year;
public:
	Date();
	Date(short day, short month, int year);
	void setDay(short new_day);
	void setMonth(short month);
	void setYear(int new_year);
	short getDay();
	short getMonth();
	int getYear();
	void showDate();
};

