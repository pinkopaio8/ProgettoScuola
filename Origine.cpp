#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "calculator.h"
#include <vector>

using namespace std;

int main() {

	Parabole parabola();
	Elisse elisse();
	Iperbole iperbole();
	Circonferenza circonferenza();

	int a, b, c, x, y;
	
	cout << "Questo � un software di Calcolo di un tipo di retta." << endl;
	cout << "In base ai dati inseriti, e alla scelta effettuata, verranno calcolati i suoi attributi." << endl;
	cout << "Dunque, di che tipo di retta si tratta? Risposta: ";

	string choice;

	switch (choice)
	{
	case 1:
		cout << "hai scelto un iperbole" << endl;// possiamo inserire le funzioni qui dentro
		cout << "inserire i dati a,b,c" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> x;
		cout << "L'intersezione dell'asse X �: " << iperbole().interAssX(a, b, c) << endl;
		cout << "L'intersezione dell'asse Y �: " << iperbole().interAssY(a, b, c) << endl;
		iperbole().vertice(a, b, c);
		iperbole().asintoti(a, b, c, x);
		cout << "L'equazione cartesiana � uguale a: " << iperbole().equazioneCart(a, b, c);

		break;
	case 2:
		cout << "hai scelto una Parabola" << endl;
		cout << "inserire i dati a,b,c" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> x;
		cin >> y;
		cout << "L'equazione cartesiana X �: " << parabola().equazioneCartX(a, b, c, x) << endl;
		cout << "L'equazione cartesiana Y �: " << parabola().equazioneCartY(a, b, c, y) << endl;
		cout << "L'intersezione dell'asse X �: " << parabola().interAssX(a, b, c) << endl;
		cout << "L'intersezione dell'asse Y � : " << parabola().interAssY(a, b, c) << endl;
		parabola().vertice(a, b, c);
		cout << "La direttrice �: " << parabola().direttrice(a, b, c);

		break;
	case 3:
		cout << "hai scelto un Elisse" << endl;
		cout << "inserire i dati a,b,c" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		elisse().vertice(a, b, c);
		cout << "L'asse maggiore � uguale a: " << elisse().asseMaggiore(a);
		cout << "L'asse minore � uguale a: " << elisse().asseMinore(b);
		cout << "L'equazione cartesiana � uguale a: " << elisse().equazioneCart(a, b, c, x, y);
		break;
	case 4:
		cout << "hai scelto una Circonferenza" << endl;
		cout << "inserire i dati a,b,c" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		break;

	}

	_getch();
}