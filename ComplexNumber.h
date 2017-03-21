#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

const unsigned MAX_IMAGINER_LENGTH = 100;

class ComplexNumber
{
public:
	ComplexNumber();
	ComplexNumber(double r, double i);
	~ComplexNumber();
	ComplexNumber(const ComplexNumber&rhs);
	ComplexNumber&operator=(const ComplexNumber&rhs);
	double getIm()const;
	double getRe()const;
	void setIm(double i);
	void setRe(double r);
	bool operator==(const ComplexNumber&num1)const;
	bool IsComplexConjugate(const ComplexNumber&num)const;
private:
	double Im;
	double Re;
};


#endif