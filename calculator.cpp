#include "calculator.h"
#include <math.h>

double Parabole::direttrice(int a, int b, int c)
{
	return -(1 + (b ^ 2) - (4 * a * c)) / (4 * a);
}


double Parabole::Coniche::asseSimm()
{
	
}

double Parabole::Coniche::equazioneCartX(int a, int b, int c, int x)
{
	return y = (a * (x ^ 2)) + (b * x) + c;
}

double Parabole::Coniche::equazioneCartY(int a, int b, int c, int y)
{
	return x = (a * (y ^ 2)) + (b * y) + c;
}

double Parabole::Coniche::interAssX(int a, int b, int c, int x)
{
	y = (a * (x ^ 2)) + (b * x) + c;
	x = 0;
	return x;
}

double Parabole::Coniche::interAssY(int a, int b, int c, int y)
{
	x = (a * (y ^ 2)) + (b * y) + c;
	y = 0;
	return y;
}

double Iperbole::equazioneCart(int a, int b, int c, int x, int y)
{
	return (x ^ 2 / a ^ 2) - (y ^ 2 / b ^ 2) - 1;
}


double Iperbole::Coniche::interAssX(int a, int b, int c, int x)
{
	
	x = a;
	y = 0;
	return x;
}

double Iperbole::Coniche::interAssY(int a, int b, int c, int y)
{
	y = b;
	x = 0;
	return y;
}

void Parabole::Coniche::vertice(int a, int b, int c)
{
	double gino, gianfrogno; //nomi dati da pozzi
	gino = (-b) / (2 * a);
	gianfrogno = (4 * a * c - (b ^ 2)) / (4 * a);
}

double Parabole::Coniche::asse()
{

}

double Parabole::Coniche::direttrice()
{

}


double Circonferenza::raggio(int a, int b, int c)
{
	if ((a ^ 2) + (b ^ 2) - c > 0)
	{
		return sqrt((a ^ 2) + (b ^ 2) - c);
	}
}

double Circonferenza::equazioneCart()
{
	double *r;
	r = *raggio;
	return 2 * r * Pi;
	//riguardare tutto
}

void Elisse::Coniche::vertice(int a, int b, int c)
{
	int A, A1, B, B1;

	A = a;
	A1 = -a;
	B = b;
	B1 = -b;

}

double Elisse::asseMaggiore(int a)
{

	return 2 * a;
}

double Elisse::asseMinore(int b)
{

	return 2 * b;
}

void Iperbole::Coniche::vertice(int a, int b, int c)
{
	int A, A1, B, B1;

	A = a;
	A1 = -a;
	B = b;
	B1 = -b;

}

void Iperbole::asintoti(int a, int b, int c, int x, int y)
{
	y = -(b / a) * x;
	y = b / a * x;
}

double Elisse::equazioneCart(int a, int b, int c, int x, int y)
{
	if (a > b)
	{
		return (x ^ 2 / a ^ 2) - (y ^ 2 / b ^ 2) - 1;
	}
	else
	{ }
}

