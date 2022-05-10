#ifndef COMPLEX_H;
#define COMPLEX_H

struct Complex {

	double real; double imag;
};


void complexPrint(Complex);
Complex complexCreate(double real, double imag);
Complex complexAdd(Complex c1, Complex c2);
Complex complexSub(Complex c1, Complex c2);
Complex complexMult(Complex c1, Complex c2);
Complex complexDiv(Complex c1, Complex c2);
Complex complexConjugate(Complex c);
double complexAbs(Complex c);



#endif;