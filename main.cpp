#include <iostream>;
#include "Complex.h";


int main() {
	setlocale(LC_ALL, "rus");
	using namespace std;

	cout<<"Введите действительную и мнимую часть первого числа " << endl;
	double a;
	double b;
	cin >> a >> b;
	cout << endl;
	Complex c1 = complexCreate(a, b);

	cout << "Введите действительную и мнимую часть второго числа " << endl;
	double c;
	double d;
	cin >> c >> d;
	Complex c2 = complexCreate(c, d);


	cout << "Выберите операцию:\n" << "1.Сложение\n" << "2.Вычитание\n" << "3.Умножение\n" << "4.Деление" << endl;
	int operation;
	cin >> operation;
	cout << endl;

	switch (operation)
	{
	case 1:
	{
		Complex result = complexAdd(c1, c2);
		cout << "Result = ";
		complexPrint(result);
		break;
	}
	case 2:
	{
		Complex result = complexSub(c1, c2);
		cout << "Result = ";
		complexPrint(result);
		break;
	}
	case 3:
	{
		Complex result = complexMult(c1, c2);
		cout << "Result = ";
		complexPrint(result);
		break;
	}
	case 4:
	{
		Complex result = complexDiv(c1, c2);
		cout << "Result = ";
		complexPrint(result);
		break;
	}
	default: 
	{
		cout << "Error!";	
	}

	}


}