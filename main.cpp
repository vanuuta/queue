#include "queue1.h"

int stateMenu;
void Menu() {
	cout << "Выберите пункт меню:" << endl;
	cout << "(1) Добавление элемента очереди (Очередь А)" << endl;
	cout << "(2) Извлечение элемента очереди" << endl;
	cout << "(3) Вывод очереди на экран" << endl;
	cout << "(4) Подсчет суммы элементов, меньших среднего арифметического" << endl;
	cout << "(5) Создание копии очереди" << endl;
	cout << "(6) Слияние оригинальной очереди с копией и вывод результата на экран" << endl;
	cout << "(7) Выход из программы" << endl;
	cin >> stateMenu;
	system("cls");
	if (stateMenu > 7 || stateMenu < 1) {
		system("cls");
		cout << "Неизвестное действие.\n";
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
			cout << "Какое количество элементов вы хотите добавить?" << endl;
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
			cout << queue.pop() << " - удален из очереди\n"; 
			break;
		case 3:
			cout << "Очередь:\n";
			queue.print();
			break;
		case 4:
			cout << "Результат вычисления: " << queue.sumResult() << endl;
			break;
		case 5:
			copyQueue = queue.copy();
			cout << "Копия скопирована: ";
			copyQueue.print();
			break;
		case 6:
			mergeQueue = queue.merge(copyQueue);
			cout << "Слияние:\n";
			mergeQueue.print();
			break;
		default:
			cout << "Неизвестное действие!\n";
			system("pause");
			break;
		}
		system("pause");
		system("cls");
		Menu();
	}
	return 0;
}
