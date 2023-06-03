#include "queue1.h"

int stateMenu;
void Menu() {
	cout << "�������� ����� ����:" << endl;
	cout << "(1) ���������� �������� ������� (������� �)" << endl;
	cout << "(2) ���������� �������� �������" << endl;
	cout << "(3) ����� ������� �� �����" << endl;
	cout << "(4) ������� ����� ���������, ������� �������� ���������������" << endl;
	cout << "(5) �������� ����� �������" << endl;
	cout << "(6) ������� ������������ ������� � ������ � ����� ���������� �� �����" << endl;
	cout << "(7) ����� �� ���������" << endl;
	cin >> stateMenu;
	system("cls");
	if (stateMenu > 7 || stateMenu < 1) {
		system("cls");
		cout << "����������� ��������.\n";
		system("pause");
		Menu();
	}

}
int main() {
	setlocale(LC_ALL, "Rus");
	Menu();
	QueuePublic queue, copyQueue, mergeQueue;
	while (stateMenu != 7) {
		switch (stateMenu) {
		case 1: {
			int num;
			cout << "����� ���������� ��������� �� ������ ��������?" << endl;
			cin >> num;
			int i = 0;
			while (num != 0) {
				cin >> i;
				queue.push(i);
				num--;
			}
			break;
		}
		case 2:
			cout << queue.pop() << " - ������ �� �������\n"; 
			break;
		case 3:
			cout << "�������:\n";
			queue.print();
			break;
		case 4:
			cout << "��������� ����������: " << queue.sumResult() << endl;
			break;
		case 5:
			copyQueue = queue.copy();
			cout << "����� �����������: ";
			copyQueue.print();
			break;
		case 6:
			mergeQueue = queue.merge(copyQueue);
			cout << "�������:\n";
			mergeQueue.print();
			break;
		default:
			cout << "����������� ��������!\n";
			system("pause");
			break;
		}
		system("pause");
		system("cls");
		Menu();
	}
	return 0;
}
