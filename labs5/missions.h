#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void mission_1()
{
	cout << "1) ����� ���������� ����� ����� ������� � ��������� ������������ (x1, y1) ? (x2, y2)" << endl;
	// v((x2 - x1)^2 + (y2 - y1)^2)
	double x1, y1, x2, y2, res;
	cout << "   ������� ���������� x1 y1: ";
	cin >> x1 >> y1;
	cout << "   ������� ���������� x2 y2: ";
	cin >> x2 >> y2;
	res = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "   ���������:  " << res << endl;
	cout << "____________________________________________________________" << endl;

}

void mission_2()
{
	cout << "2) ���� ��� ����� A, B, C �� �������� ���. ����� ����� �������� AC � BC � �� �����." << endl;
	int a, b, c, ac, bc, res;
	cout << "   ������� ���������� A B C: ";
	cin >> a >> b >> c;
	ac = c - a;
	bc = c - b;
	res = ac + bc;
	cout << "   ������� AC = " << ac << endl;
	cout << "   ������� BC = " << bc << endl;
	cout << "   ��������� = " << res << endl;
	cout << "____________________________________________________________" << endl;
}

void mission_3()
{
	cout << "3) ���� ��� ����� A, B, C �� �������� ���." << endl;
	cout << "   ����� C ����������� ����� ������� A � B!" << endl;
	cout << "   ����� ������������ ���� �������� AC � BC." << endl;
	int a, b, c, ac, bc, res;
	cout << "   ������� ���������� � ������� A C B: ";
	cin >> a >> c >> b;
	ac = c - a;
	bc = b - c;
	res = ac * bc;
	cout << "   ������� AC = " << ac << endl;
	cout << "   ������� BC = " << bc << endl;
	cout << "   ��������� = " << res << endl;
	cout << "____________________________________________________________" << endl;
}

void mission_4()
{
	cout << "4) ���� ���������� ���� ��������������� ������ ��������������: (x1, y1), (x2, y2)." << endl;
	cout << "   ������� �������������� ����������� ���� ���������." << endl;
	cout << "   ����� �������� � ������� ������� ��������������." << endl;
	int x1, x2, y1, y2, a, b, area, perimeter;
	cout << "   ������� ���������� x1 y1: ";
	cin >> x1 >> y1;
	cout << "   ������� ���������� x2 y2: ";
	cin >> x2 >> y2;
	a = abs(x1 - x2);
	b = abs(y1 - y2);
	area = a * b;
	perimeter = 2 * (a + b);
	cout << "   ��������� ������������� �� ��������� " << a << "x" << b << endl;
	cout << "   ������� = " << area << endl;
	cout << "   �������� = " << perimeter << endl;
	cout << "____________________________________________________________" << endl;
}

void mission_5()
{
	cout << "5) ���� ���������� ���� ������ ������������: (x1, y1), (x2, y2), (x3, y3)." << endl;
	cout << "   ����� ��� �������� � �������." << endl;
	double x1, x2, x3, y1, y2, y3, a, b, c, area, p, p2;
	cout << "   ������� ���������� x1 y1: ";
	cin >> x1 >> y1;
	cout << "   ������� ���������� x2 y2: ";
	cin >> x2 >> y2;
	cout << "   ������� ���������� x3 y3: ";
	cin >> x3 >> y3;
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	p = a + b + c;
	p2 = p / 2;
	area = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
	cout << "   ��������� ����������� �� ��������� " << a << "x" << b << "x" << c << endl;
	cout << "   ������� = " << area << endl;
	cout << "   �������� = " << p << endl;
	cout << "____________________________________________________________" << endl;
}


