#include "ComplexNumber.h"


ComplexNumber::ComplexNumber()
{
	Re = 1;
	Im = 1;
}

ComplexNumber::ComplexNumber(double r, double i)
{
	Re = r;
	Im = i;
}

ComplexNumber::~ComplexNumber()
{
	//
}

ComplexNumber::ComplexNumber(const ComplexNumber&rhs)
{
	this->Re = rhs.Re;
	this->Im = rhs.Im;
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber&rhs)
{
	if (this != &rhs)
	{
		this->Re = rhs.Re;
		this->Im = rhs.Im;
	}
	return*this;
}



double ComplexNumber::getIm()const
{
	return Im;
}

double ComplexNumber:: getRe()const
{
	return Re;
}

void ComplexNumber::setIm(double i)
{
	Im = i;
}

void ComplexNumber::setRe(double r)
{
	Re = r;
}

bool ComplexNumber:: operator==(const ComplexNumber&num)const
{
	if (Re == num.Re && Im == num.Im)
		return true;
	return false;
}

bool ComplexNumber::IsComplexConjugate(const ComplexNumber&num)const
{
	if (Re == num.Re && Im == -num.Im)
		return true;
	return false;
}

