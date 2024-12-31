#pragma once
#include "Date.h"
class Abonent
{
private:
	char* name;
	int telefonNumber;
	Date date;
	static int abonentsCount;
public:
	Abonent();
	Abonent(char* name, int telefonNumber, Date date);
	char* getName();
	int getNumber();
	Date getDate();
	void showAbonent();
	void setName(char* name);
	void setName(const char* NAME);
	void setNumber(int telefonNumber);
	void setDate(Date date);
	~Abonent();

};

