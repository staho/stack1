//// ConsoleApplication13.cpp : Defines the entry point for the console application.
////
//
//#include "stdafx.h"
//#include <iostream>
//
//using namespace std;
//
//struct queue {
//	int * kolejka;
//	int p = 0, k = -1, rozmiar = 0, x;
//	void alokuj();
//	bool isFull();
//	bool isEmpty();
//	void enqueue();
//	void dequeue(int &);
//};
//
//void wyswietl(queue &);
//void wyswietltab(queue &);
//
//int main()
//{
//	queue kol;
//	cout << "Podaj rozmiar kolejki" << endl;
//	cin >> kol.rozmiar;
//	kol.alokuj();
//	int ster = 0, a;
//	while (ster != 5)
//	{
//		cout << "Co chcesz zrobic z kolejka?" << endl
//			<< "1. Odczytac" << endl << "2. Odczytac (tablice)" << endl
//			<< "3. Wrzucic liczbe" << endl << "4. Sciagnac liczbe" << endl
//			<< "5. Zakonczyc program" << endl;
//		cout << "Ostatni element to: " << kol.kolejka[kol.k] << endl;
//		cin >> ster;
//		switch (ster)
//		{
//		case 1:
//			wyswietl(kol);
//			break;
//		case 2:
//			wyswietltab(kol);
//			break;
//		case 3:
//			kol.enqueue();
//			break;
//		case 4:
//			kol.dequeue(a);
//			break;
//		case 5:
//			ster = 5;
//			break;
//
//		default:
//			break;
//		}
//		system("CLS");
//	}
//	delete[] kol.kolejka;
//	return 0;
//}
////czas na funkcje
//void queue::alokuj()
//{
//	kolejka = new int[rozmiar];
//}
//bool queue::isFull()
//{
//	if ((p == k + 1) && (p != 0) && (k != -1)) return 1;
//	if (p == 0 && k == (rozmiar - 1)) return 1;
//	else return 0;
//}
//bool queue::isEmpty()
//{
//	if ((p == 0) && (k == -1)) return 1;
//	else return 0;
//}
//void queue::enqueue()
//{
//	int liczba;
//	if (!isFull())
//	{
//		cout << "Podaj liczbe" << endl;
//		cin >> liczba;
//		k++;
//		if (k == rozmiar) k = 0;
//		kolejka[k] = liczba;
//	}
//	else
//	{
//		cout << "Blad, kolejka jest pelna" << endl;
//		system("PAUSE");
//	}
//}
//void queue::dequeue(int &a)
//{
//	if (p == k) k = -1;
//	if (!isEmpty())
//	{
//		a = kolejka[p];
//		p++;
//		if (p == rozmiar) p = 0;
//		cout << "Liczba to " << a << endl;
//		system("PAUSE");
//	}
//	else
//	{
//		cout << "Blad, kolejka jest pusta" << endl;
//		system("PAUSE");
//	}
//}
//
//void wyswietl(queue &pom)
//{
//	if (!pom.isEmpty())
//	{
//		int p = pom.p, k = pom.k;
//		do
//		{
//			cout << pom.kolejka[p] << " ";
//			p++;
//			if (p == pom.rozmiar) p = 0;
//		} while (p != k);
//		cout << pom.kolejka[p];
//		cout << endl;
//		system("PAUSE");
//	}
//}
//void wyswietltab(queue &pom)
//{
//	for (int i = 0; i < pom.rozmiar; i++)
//		cout << pom.kolejka[i] << " ";
//	cout << "p = " << pom.p << " k = " << pom.k;
//	system("PAUSE");
//}