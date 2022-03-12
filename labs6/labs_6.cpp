#include "missions.h"

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

	const int N_MISSIONS = 7;
	string missions[N_MISSIONS] = {
		"�������� ������� ���������� ���������� A � B",
		"����������� �������� ���������� A � B, B � � C, C � � A",
		"����������� �������� ���������� A � C, C � � B, B � � A",
		"����� �������� ���������� y = 3x^6 - 6x^2 - 7",
		"����� �������� ���������� y = 4(x-3)^6 - 7(x-3)^3 + 2",
		"��������� A^8",
		"���������  A^15"
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
		if (choice == 7)
			mission_7();
		restart = true;

	} while (restart);

	return 0;
}
	
