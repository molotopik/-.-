#include "missions.h"

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� ��������� win-cp 1251 � ����� ������

	const int N_MISSIONS = 6;
	string missions[N_MISSIONS] = {
		"������� � �������",
		"������� � �������",
		"�������",
		"����������",
		"�������� ��������� A*x + B = 0 (A != 0)",
		"������� �������� ��������� A1*x + B1*y = C1, A2*x + B2*y = C2"
	};

	bool restart = false;
	do {
		cout << "   ������ �����: \n";
		// ����� ������� ����� �� ����� 
		for (int i = 0; i < N_MISSIONS; i++)
		{
			short missionNum = i + 1;
			cout << missionNum << ") " << missions[i] << endl;
		}
		cout << "   ������� ����� ������: ";

		short choice;
		cin >> choice;
		if (choice == 1)
			mission_1();
		if (choice == 2)
			mission_2();
		if (choice == 3)
			mission_3();
		if (choice == 4)
			mission_4();
		if (choice == 5)
			mission_5();
		if (choice == 6)
			mission_6();
		if (choice == 0)
			break;
		restart = true;

	} while (restart);

	return 0;
}
