#pragma once

enum Scelta {
	Iperbole = 1, Parabola, Elisse, Circonferenza; };

class Coniche {
public:
	int a, b, c, x, y;

	virtual double asseSimm() = 0;
	virtual double equazioneCartX(int a, int b, int c, int x) = 0;
	virtual double equazioneCartY(int a, int b, int c, int y) = 0;
	virtual double interAssX(int a, int b, int c, int x)=0;
	virtual double interAssY(int a, int b, int c, int y)=0;
	virtual void vertice(int a, int b, int c);
	virtual double asse();
	virtual double direttrice();


	Coniche() {};


};


class Parabole : public Coniche
{
public:
	virtual double direttrice(int a, int b, int c);

	Parabole() {};
	
};

class Iperbole : public Coniche {

public:
	virtual void asintoti(int a, int b, int c, int x, int y);
	virtual double equazioneCart(int a, int b, int c, int x, int y);



};

class Elisse : public Coniche {

public:
	virtual double asseMaggiore(int a);
	virtual double asseMinore(int b);
	virtual double equazioneCart(int a, int b, int c, int x, int y);



};

class Circonferenza{

public:
#define Pi 3,14159;
	virtual double centro();
	virtual double realta();
	virtual double raggio(int a, int b, int c);
	virtual double equazioneCart();
	virtual double Area();
	virtual double circonferenza();


};





