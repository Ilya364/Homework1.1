#include <iostream>;
#include "Complex.h";


int main() {
	setlocale(LC_ALL, "rus");
	using namespace std;

	cout<<"������� �������������� � ������ ����� ������� ����� " << endl;
	double a;
	double b;
	cin >> a >> b;
	cout << endl;
	Complex c1 = complexCreate(a, b);

	cout << "������� �������������� � ������ ����� ������� ����� " << endl;
	double c;
	double d;
	cin >> c >> d;
	Complex c2 = complexCreate(c, d);


	cout << "�������� ��������:\n" << "1.��������\n" << "2.���������\n" << "3.���������\n" << "4.�������" << endl;
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