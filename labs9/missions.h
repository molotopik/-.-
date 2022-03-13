#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

const int N_MISSIONS = 5;
string missions[N_MISSIONS] = {
	"1) ����� � �������",
	"2) ���� ������ (1 ��� - �����������)",
	"3) ���� ������",
	"4) �������� � ��������������",
	"5) ����� ��������"
};
string missions_full[N_MISSIONS] = {
	"1) � ������ ����� ������ N ������ (N � �����).\n   ����� ���������� ������, ��������� � ������ ��������� ������.",
	"2) ��� ������ ������������� ��������� �������:\n   0 � �����������, 1 � �����������, 2 � �������, . . . , 6 � �������.\n   ���� ����� ����� K, ������� � ��������� 1�365.\n   ���������� ����� ��� ������ ��� K-�� ��� ����,\n   ���� ��������, ��� � ���� ���� 1 ������ ���� �������������.",
	"3) ��� ������ ������������� ��������� �������:\n   1 � �����������, 2 � �������, . . . , 6 � �������, 7 � �����������.\n   ���� ����� ����� K, ������� � ��������� 1�365,\n   � ����� ����� N, ������� � ��������� 1�7.\n   ���������� ����� ��� ������ ��� K-�� ��� ����,\n   ���� ��������, ��� � ���� ���� 1 ������ ���� ���� ������ � ������� N",
	"4) ���� ����� ������������� ����� A, B, C.\n   �� �������������� ������� A * B ��������� ����������� ��������� ���������� ���������\n   �� �������� C (��� ���������). ����� ���������� ���������,\n   ����������� �� ��������������, � ����� ������� ��������� ����� ��������������.",
	"5) ��� ����� ���������� ���� (����� ������������� �����).\n   ���������� ��������������� ��� ����� ��������, ��������, ���,\n   � �������, ������� 20 �������� ��� 1901 ���"
};


void mission_1()
{
	cout << missions_full[0] << endl;
	int sec, res;
	cout << "   ������� ���������� ������, ��������� � ������ �����: ";
	cin >> sec;
	res = sec % 60;
	cout << "   C ������ ��������� ������ ������: " << res << " ��� \n";

	cout << "____________________________________________________________\n";
}

void mission_2()
{
	cout << missions_full[1] << endl;
	int day, dayNum;
	string week[7] = {"�����������", "�����������", "�������", "�����", "�������", "�������", "�������"};
	do {
		cout << "   ������� ���� ���� (1�365): ";
		cin >> day;
	} while (1 > day || day > 365);
	dayNum = day % 7;
	cout << "   ��� " << week[dayNum] << endl;
	cout << "____________________________________________________________\n";
}

void mission_3()
{
	cout << missions_full[2] << endl;
	int day, dayNum, startDay;
	string week[7] = { "�����������", "�����������", "�������", "�����", "�������", "�������", "�������" };
	do {
		cout << "   ������� ���� ���� (1�365): ";
		cin >> day;
	} while (1 > day || day > 365);
	do {
		cout << "   1 � �����������\n   2 � �������\n   2 � �����\n   4 � �������\n   5 � �������\n   6 � �������\n   7 � �����������\n   ������ ���� ����: ";
		cin >> startDay;
	} while (1 > startDay || startDay > 7);
	dayNum = (day + startDay) % 7;
	cout << "   ��� " << week[dayNum - 1] << endl;

	cout << "____________________________________________________________\n";
}

void mission_4()
{
	cout << missions_full[3] << endl;
	int a, b, c, s1, s2, s3, sqrs;
	do {
		cout << "   ������� ����� ������������� ����� A B C: ";
		cin >> a >> b >> c;
	} while (1 > a || 1 > b || 1 > c);

	s1 = a * b;
	s2 = c * c;
	sqrs = s1 / s2;
	s3 = s1 - s2 * sqrs;

	cout << "   ���-�� ���������: " << sqrs << endl;
	cout << "   ��������� �����: " << s3 << " ��. ��." << endl;

	cout << "____________________________________________________________\n";
}

void mission_5()
{
	cout << missions_full[4] << endl;
	int year, res;
	do {
		cout << "   ������� ���: ";
		cin >> year;
	} while (year < 1);
	if (year > 99)
		res = year / 100 + 1;
	if (year < 100)
		res = 1;
	cout << "   ���������: " << res << "-� ��������" << endl;


	cout << "____________________________________________________________\n";
}
