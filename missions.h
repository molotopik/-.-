#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;



void mission_1()
{
	cout << "1) ������� � �������� ��������������." << endl << "������� ������ ��������������:" << endl;
	float a;
	cin >> a;
	cout << "� ������ ��������������:" << endl;
	float b;
	cin >> b;
	float area = a * b;
	float perimeter = 2 * (a + b);
	cout << "������� ��������������:  " << a << " * " << b << " = " << area << endl;
	cout << "�������� ��������������: " << "2(" << a << " + " << b << ") = " << perimeter << endl << endl;
}

void mission_2()
{
	cout << "2) ����� ����������." << endl << "������� ������� ����������:" << endl;
	float d;
	cin >> d;
	float pi = 3.14;
	float circumference = pi * d;
	cout << "����� ����������: " << pi << " * " << d << " = " << circumference << endl << endl;
}

void mission_3()
{
	cout << "3) ������� �������������� ���� �����." << endl << "������� ������ �����:" << endl;
	float a;
	cin >> a;
	cout << "� ������ �����:" << endl;
	float b;
	cin >> b;
	float arithmetical_mean = (a + b)/2;
	cout << "������� ��������������: (" << a << " + " << b << ")/2 = " << arithmetical_mean << endl << endl;
}

void mission_4()
{
	cout << "4) �����, ��������, ������������ � ������� ��������� ���� ��������� �����." << endl;
	float a;
	float b;
	do {
		cout << "������� ������ ����� (���������):" << endl;
		cin >> a;
	} while (a == 0);

	do {
		cout << "� ������ ����� (���������):" << endl;
		cin >> b;
	} while (b == 0);

	float addition       = pow(a, 2) + pow(b, 2);
	float subtraction    = pow(a, 2) - pow(b, 2);
	float multiplication = pow(a, 2) * pow(b, 2);
	double division      = pow(a, 2) / pow(b, 2);
	cout << "����� ���������:        " << pow(a, 2) << " + " << pow(b, 2) << " = " << addition << endl;
	cout << "�������� ���������:     " << pow(a, 2) << " - " << pow(b, 2) << " = " << subtraction << endl;
	cout << "������������ ���������: " << pow(a, 2) << " * " << pow(b, 2) << " = " << multiplication << endl;
	cout << "������� ���������:      " << pow(a, 2) << " / " << pow(b, 2) << " = " << division << endl << endl;
}

void mission_5()
{
	cout << "5) �����, ��������, ������������ � ������� ������� ���� ��������� �����." << endl;
	float a;
	float b;
	do {
		cout << "������� ������ ����� (���������):" << endl;
		cin >> a;
	} while (a == 0);

	do {
		cout << "� ������ ����� (���������):" << endl;
		cin >> b;
	} while (b == 0);
	

	float addition = fabs(a) + fabs(b);
	float subtraction = fabs(a) - fabs(b);
	float multiplication = fabs(a) * fabs(b);
	double division = fabs(a) / fabs(b);
	cout << "����� �������:        " << fabs(a) << " + " << fabs(b) << " = " << addition << endl;
	cout << "�������� �������:     " << fabs(a) << " - " << fabs(b) << " = " << subtraction << endl;
	cout << "������������ �������: " << fabs(a) << " * " << fabs(b) << " = " << multiplication << endl;
	cout << "������� �������:      " << fabs(a) << " / " << fabs(b) << " = " << division << endl << endl;
}

