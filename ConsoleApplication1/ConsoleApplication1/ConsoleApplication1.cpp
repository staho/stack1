// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct stos
{
	int * stose;
	int n = 0, rozmiar;
	void alokuj();
	bool isEmpty();
	bool isFull();
	void push();
	void pop();
};

int main()
{
	stos stosik;
	cout << "Podaj rozmiar stosu" << endl;
	cin >> stosik.rozmiar;
	int ster = 0, push;

	stosik.alokuj();

	while (ster != 10)
	{
		system("CLS");
		cout << "Co chcesz zrobiæ ze stosem?" << endl
			<< "1. Wyswietlic czubek stosu" << endl
			<< "2. Wrzucic liczbe" << endl
			<< "3. Sciagnac liczbe (i wyswietlic)" << endl
			<< "5. Wyjsc" << endl;
		cin >> ster;
		switch (ster)
		{
		case 1:
			if (!stosik.isEmpty())
				cout << "Na czubku znajduje sie " << stosik.stose[stosik.n - 1] << endl;
			else
				cout << "Stos jest pusty" << endl;
			system("Pause");
			break;
		case 2:
			stosik.push();
			break;
		case 3:
			stosik.pop();
			break;
		case 5:
			ster = 10;
			break;
		}
	}
	return 0;
}

void stos::alokuj()
{
	stose = new int[rozmiar];
}
bool stos::isEmpty()
{
	if (n == 0) return 1;
	else return 0;
}
bool stos::isFull()
{
	if (n == rozmiar) return 1;
	else return 0;
}
void stos::push()
{
	if (!isFull())
	{
		cout << "Podaj liczbe do wrzucenia" << endl;
		cin >> stose[n];
		n++;
	}
	else
	{
		cout << "Stos jest pelny!" << endl;
		system("Pause");
	}
}
void stos::pop()
{
	if (!isEmpty())
	{
		n--;
		cout << "Liczba to: " << stose[n];
	}
	else
		cout << "Stos jest pusty!" << endl;
	cout << endl;
	system("PAUSE");
}