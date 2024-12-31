#include <iostream>
#include "Abonent.h"
#include "Date.h"
using namespace std;

int Abonent::abonentsCount(0);

void creatNewAbonent(Abonent*& arr, int& size) {
	char* name = new char[51];
	name[50] = '\0';
	int telefonNumber;
	short day;
	short month;
	int year;
	cout << "Your name: ";
	cin >> name;
	cout << "Your Telefon number: ";
	cin >> telefonNumber;
	cout << "Day, month, year separated by a space: ";
	cin >> day;
	cin >> month;
	cin >> year;
	Abonent* new_arr = new Abonent[size + 1];
	for (int i = 0; i < size; i++) {
		new_arr[i].setName(arr[i].getName());
		new_arr[i].setNumber(arr[i].getNumber());
		new_arr[i].setDate(arr[i].getDate());
	}
	size+=1;
	new_arr[size-1].setName(name);
	new_arr[size - 1].setNumber(telefonNumber);
	new_arr[size - 1].setDate({ day,month,year });
	delete[] arr;
	delete[] name;
	arr = new_arr;

}

void showAllAbonents(Abonent* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i].showAbonent();
	}
}

void deleteAbonent(Abonent*& arr, int& size, int delnumer) {
	size -= 1;
	int cell = 0;
	Abonent* new_arr = new Abonent[size];
	for (int i = 0; i < size + 1; i++) {
		if (i != delnumer - 1) {
			new_arr[i-cell].setName(arr[i].getName());
			new_arr[i-cell].setNumber(arr[i].getNumber());
			new_arr[i-cell].setDate(arr[i].getDate());
		}
		else {
			cell += 1;
		}
	}
	delete[] arr;
	arr = new_arr;
}

void findForName(Abonent*& arr, int& size, char* name) {
	for (int i = 0; i < size; i++) {
		int score = 0;
		char* old_name = arr[i].getName();
		if (int(*old_name) == int(*name)) {
			for (int i = 0; i < strlen(name); i++) {
				if (old_name[i] == name[i]) {
					score++;
				}
				else {
					break;
				}
			}
		}
		if (score == strlen(name)) {
			arr[i].showAbonent();
			break;
		}
	}
}

int main()
{
	int size = 0;
	Abonent* arr = nullptr;
	creatNewAbonent(arr, size);
	char* name = new char[5];
	cin >> name;
	findForName(arr, size, name);
}