#pragma once
#include <math.h>
#include <iostream>
using namespace std;



class Coniche {
public:
	int a, b, c, x, y;

	//virtual double asseSimm() = 0; -----> ma perch�
	virtual double equazioneCartX(int a, int b, int c, int x) = 0;
	virtual double equazioneCartY(int a, int b, int c, int y) = 0;
	virtual double interAssX(int a, int b, int c) = 0;
	virtual double interAssY(int a, int b, int c) = 0;
	virtual void vertice(int a, int b, int c); //non capisco perch� dice che non � stata trovata quando c'�
	//virtual double asse();  -----> non la utilizziamo
	//virtual double direttrice(); -----> mi sta sul cazzo


	//Coniche() {}; ma seriamente


};


class Parabole : public Coniche
{
public:
	double asseSimm() {};
	double equazioneCartX(int a, int b, int c, int x) {
		return (a * (x ^ 2)) + (b * x) + c;
	};
	double equazioneCartY(int a, int b, int c, int y)
	{
		return (a * (y ^ 2)) + (b * y) + c;
	};
	double interAssX(int a, int b, int c)
	{
		y = (a * (x ^ 2)) + (b * x) + c;
		x = 0;
		return x;
	};
	double interAssY(int a, int b, int c)
	{
		x = (a * (y ^ 2)) + (b * y) + c;
		y = 0;
		return y;
	};

	virtual void vertice(int a, int b, int c)
	{
		int A, B;
		A = -(b / 2*a);
		B = (4 * a * c - b ^ 2) / 4 * a;
		cout << "I vertici sono: " << A << ", " << B << endl;
	}
	// manca la funzione vertice


	virtual double direttrice(int a, int b, int c)
	{
		return -(1 + (b ^ 2) - (4 * a * c)) / (4 * a);
	};

	Parabole() {};

};

class Iperbole : public Coniche {

public:
	// manca equazione cartesiana X e Y; Ema: L'equazione cart c'�, ma non per X e Y perch� non esiste.
	double equazioneCartX(int a, int b, int c, int x) {

	};
	double equazioneCartY(int a, int b, int c, int y)
	{

	};
	double interAssX(int a, int b, int c)
	{
		int x;

		x = a;
		y = 0;
		return x;
	};
	double interAssY(int a, int b, int c)
	{
		int y;
		y = b;
		x = 0;
		return y;
	};
	void vertice(int a, int b, int c)
	{
		int A, A1, B, B1;

		A = a;
		A1 = -a;
		B = b;
		B1 = -b;

		cout << "I vertici sono: " << A << ", " << A1 << ", " << B << ", " << B1 << endl;

	};


	virtual void asintoti(int a, int b, int c, int x) {
		int y1;
		int y;
		y = -(b / a) * x;
		y1 = b / a * x;
		cout << "Gli asintoti sono: " << y1 << " e " << y << endl;

	
	};
	virtual double equazioneCart(int a, int b, int c)
	{
		int x;
		int y;
		return (x ^ 2 / a ^ 2) - (y ^ 2 / b ^ 2) - 1;
	};



};

class Elisse : public Coniche {

public:
	double equazioneCartX(int a, int b, int c, int x) {};
	double equazioneCartY(int a, int b, int c, int y) {};
	double interAssX(int a, int b, int c) {};
	double interAssY(int a, int b, int c) {};
	void vertice(int a, int b, int c) {
		int A, A1, B, B1;

		A = a;
		A1 = -a;
		B = b;
		B1 = -b;

		cout << "I vertici sono: " << A << ", " << A1 << ", " << B << ", " << B1 << endl;
	};
	virtual double asseMaggiore(int a) {

		return 2 * a;
	};
	virtual double asseMinore(int b) {

		return 2 * b;
	};
	virtual double equazioneCart(int a, int b, int c, int x, int y) {
		if (a > b)
		{
			return (x ^ 2 / a ^ 2) - (y ^ 2 / b ^ 2) - 1;
		}
		else
		{
			return 0;
		}
	};



};

class Circonferenza {

public:
#define Pi 3,14159;
	virtual double centro() {};
	virtual double realta() {};
	virtual double raggio(int a, int b, int c) {
		if ((a ^ 2) + (b ^ 2) - c > 0)
		{
			return sqrt((a ^ 2) + (b ^ 2) - c);
		}
		return 2;
	};
	virtual double equazioneCart() {};
	virtual double Area() {};
	virtual double circonferenza() {};


};

//istream& cin >>




