#include <iostream>
#include "ComplexNumber.h"



bool CheckIfIsInArray(ComplexNumber*numbers,size_t n,const ComplexNumber*number)
{
	for (size_t i = 0; i < n; i++)
	{
		if (numbers[i] == *number)
			return true;
	}
	return false;
}

bool CheckCC(ComplexNumber*numbers, size_t n)
{
	for (size_t i = 0; i < n-1; i++)
	{
		for (size_t j = i + 1; j < n; j++)
		{
			if (numbers[i].IsComplexConjugate(numbers[j]))
				return true;
		}
	}
	return false;
}

int main()
{
	unsigned n = 0;

	std::cin >> n;

	ComplexNumber*numbers = new ComplexNumber[n];

	double a = 0, b = 0; //a+bi
	char c1, c2;

	for (size_t i = 0; i < n; i++)
	{
		std::cin.clear();
		std::cin >> a >> c1 >> b >> c2;
		numbers[i].setRe(a);
		numbers[i].setIm(b);
	}

	std::cout << "Which number do you search for?: ";
	std::cin >> a >> c1 >> b >> c2;
	ComplexNumber*searched = new ComplexNumber(a, b);

	if (CheckIfIsInArray(numbers, n, searched))
		std::cout << "\nThis number occures in the array!\n";
	else
		std::cout << "\nThis number does not occures in the array!\n";

	if (CheckCC(numbers, n))
		std::cout << "\nThere are two complex conjugate numbers in the array.\n";
	else
		std::cout << "\nThere are not two complex conjugate numbers in the array.\n";


	delete searched;
	searched = 0;
	delete[]numbers;
	numbers = 0;
	return 0;
}