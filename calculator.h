#pragma once

class Operator {
protected:
	virtual double addizione() = 0;
	virtual double sottrazione() = 0;
	virtual double moltiplicazione()  = 0;
	virtual double divisione() = 0; 
};


class OperatorPlus : public Operator
{
public:
	virtual double logaritmo() {};
	virtual double seno() {};
	virtual double coseno() {};
	virtual double tan() {};
	virtual double radice() {};
	virtual double logNat() {};
	virtual double potenza() {};
	virtual double valAss() {};
};

class Calculator : public OperatorPlus {

public:



};


