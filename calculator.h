#pragma once

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
	virtual double asintoti();
	virtual double eccentricità();



};

class Elisse : public Coniche {

public:
	virtual double asseMaggiore();
	virtual double asseMinore();
	virtual double eccentricita();



};
#define Pi 3,1415926; //3,1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
class Circonferenza{

public:

	virtual double centro();
	virtual double realta();
	virtual double raggio(int a, int b, int c);
	virtual double equazioneCart();
	virtual double Area();
	virtual double circonferenza();


};





