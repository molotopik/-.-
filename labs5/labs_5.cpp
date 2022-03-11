	#include "missions.h"

int main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

	const int N_MISSIONS = 5;
	string missions[N_MISSIONS] = {
		"���������� ����� ����� �������.",
		"����� ����� �������� AC � BC � �� �����.",
		"����� ������������ ���� ������� AC � BC.",
		"����� �������� � ������� ��������������.",
		"����� ��� �������� � ������� ������������."
	};

	bool restart = false;
	do {
		cout << "  ������ �����:" << endl;
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
		restart = true;

	} while (restart);

	return 0;
}
	
