#include <iostream>;
#include "Complex.h";


Complex complexCreate(double real, double imag) {
	Complex result = { real, imag };
	return result;
}

Complex complexAdd(Complex c1, Complex c2) {
	return complexCreate(c1.real + c2.real, c1.imag + c2.imag);
}

Complex complexSub(Complex c1, Complex c2) {
	return complexCreate(c1.real - c2.real, c1.imag - c2.imag);
}

Complex complexMult(Complex c1, Complex c2) {
	double a = c1.real;
	double b = c1.imag;
	double c = c2.real;
	double d = c2.imag;
	return complexCreate(a * c - b * d, b * c + a * d);
}

Complex complexConjugate(Complex c) {
	return complexCreate(c.real, -c.imag);
}

Complex complexDiv(Complex c1, Complex c2) {
	Complex conj = complexConjugate(c2);
	Complex num = complexMult(c1, conj);
	double denom = c2.real * c2.real + c2.imag * c2.imag;
	return complexCreate(num.real / denom, num.imag / denom);
}

double complexAbs(Complex c) {
	return sqrt(c.real * c.real + c.imag * c.imag);
}

void complexPrint(Complex c)
{
	if (c.imag > 0)
	{
		std::cout << c.real << "+" << c.imag << "i" << std::endl;
	}
	else
	{
		if (c.imag == 0)
		{
			std::cout << c.real << std::endl;
		}
		else
		{
			std::cout << c.real << c.imag << "i" << std::endl;
		}
	}
}
