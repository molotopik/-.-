#include "missions.h"
int main() {
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	bool restart = false;
	do {
		cout << "   ������ �����: \n";
		// ����� ������� ����� �� �����
		for (int i = 0; i < N_MISSIONS; i++) {
			cout << missions[i] << endl;
		}
		cout << "____________________________________________________________\n";
		cout << "   ������� ����� ������: (0 - �����) ";
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
		cout << "   ���������? ��(+)";
		char more;
		cin >> more;
		if (more == '+')
			restart = true;
		if (choice == 0)
			break;
	} while (restart);
	return 0;
}

