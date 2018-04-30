#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "calculator.h"
#include "calculator.cpp"
#include "Origine.h"

using namespace std;

int main() {

	Parabole parabola();
	Elisse elisse();
	Iperbole iperbole();

	double a, b, c;

	string temp;
	//Coniche *Parabole;
	//Parabole ->
	cout << "Questo è un software di Calcolo di un tipo di retta." << endl;
	cout << "In base ai dati inseriti, e alla scelta effettuata, verranno calcolati i suoi attributi." << endl;
	cout << "Dunque, di che tipo di retta si tratta? Risposta: ";
	//cin >> temp; //da overloadare
				 /*if (temp == "Iperbole")
				 {
				 Iperbole A; //override?
				 cout << endl;
				 cout << "Inserire A: ";
				 cin >> temp;
				 cout << endl;
				 cout << "Inserire B: ";
				 cin >> temp;
				 cout << endl;
				 cout << "Inserire C: ";
				 cin >> temp;

				 //cin >> ;
				 }*/
	int choice;
	
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "hai scelto un iperbole" << endl;// possiamo inserire le funzioni qui dentro
		cout << "inserire i dati a,b,c" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		
		break;
	case 2:
		cout << "hai scelto un iperbole" << endl;
		cout << "inserire i dati a,b,c" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		
		break;
	case 3:
		cout << "hai scelto un Elisse" << endl;
		cout << "inserire i dati a,b,c" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		break;
	case 4:
		cout << "hai scelto una Circonferenza" << endl;
		cout << "inserire i dati a,b,c" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		break;

	}

	getch();
}