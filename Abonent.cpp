#include "Abonent.h"
#include <iostream>
using namespace std;

Abonent::Abonent() {
	this->name = nullptr;
	this->telefonNumber = 0;
	this->abonentsCount += 1;
}

Abonent::Abonent(char* name, int telefonNumber, Date date) {
	//Name
	if (name != nullptr) {
		int size = strlen(name);
		this->name = new char[size + 1];
		for (int i = 0; i < size; i++) {
			this->name[i] = name[i];
		}
		this->name[size] = '\0';
	}
	else {
		this->name = nullptr;
	}
	//Telefon number
	this->telefonNumber = telefonNumber;
	//Date
	this->date = date;
	this->abonentsCount += 1;

}

char* Abonent::getName() {
	return this->name;
}

int Abonent::getNumber() {
	return this->telefonNumber;
}

Date Abonent::getDate() {
	return this->date;
}

void Abonent::showAbonent() {
	cout << this->name << endl;
	cout << "Telefon number: " << this->telefonNumber << endl;
	cout << "Birthday date: ";
	this->date.showDate();
	cout << endl;
}

void Abonent::setName(char* name) {
	int size = strlen(name);
	if (this->name != nullptr) {
		delete[] this->name;
	}
	this->name = new char[size + 1];
	for (int i = 0; i < size; i++) {
		this->name[i] = name[i];
	}
	this->name[size] = '\0';
}

void Abonent::setName(const char* NAME) {
	int size = strlen(NAME);
	if (this->name != nullptr) {
		delete[] this->name;
	}
	this->name = new char[size + 1];
	for (int i = 0; i < size; i++) {
		this->name[i] = NAME[i];
	}
	this->name[size] = '\0';
}

void Abonent::setNumber(int telefonNumber) {
	this->telefonNumber = telefonNumber;
}

void Abonent::setDate(Date date) {
	this->date = date;
}


Abonent::~Abonent() {
	if (this->name != nullptr) {
		delete[] this->name;
	}
	this->abonentsCount -= 1;
}