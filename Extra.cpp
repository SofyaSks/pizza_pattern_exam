#include "Extra.h"

void Extra::addExtraMargarita(Margarita m)
{
	int choice;
	cout << "1 - Souce\n";
	cout << "2 - Cheese\n";
	cout << "0 - exit\n";
	cin >> choice;
	system("cls");
	switch (choice) {
	case 1: m.addSouce();
		break;
	case 2: m.addCheese();
		break;
	case 0: break;
	default: cout << "ERROR\n";
		break;
	}
}

void Extra::addExtraPepperoni(Pepperoni p)
{
	int choice;
	cout << "1 - Souce\n";
	cout << "2 - Cheese\n";
	cout << "3 - Ham\n";
	cout << "0 - exit\n";
	cin >> choice;
	system("cls");
	switch (choice) {
	case 1: p.addSouce();
		break;
	case 2: p.addCheese();
		break;
	case 3: p.addHam();
		break;
	case 0: break;
	default: cout << "ERROR\n";
		break;
	}
}

void Extra::addExtraAll_In(All_In ai)
{
	int choice;
	cout << "1 - Souce\n";
	cout << "2 - Cheese\n";
	cout << "3 - Ham\n";
	cout << "4 - Olives\n";
	cout << "5 - Mushrooms\n";
	cout << "0 - exit\n";
	cin >> choice;
	system("cls");
	switch (choice) {
	case 1: ai.addSouce();
		break;
	case 2: ai.addCheese();
		break;
	case 3: ai.addHam();
		break;
	case 4: ai.addOlives();
		break;
	case 5: ai.addMushroom();
		break;
	case 0: break;
	default: cout << "ERROR\n";
		break;
	}
}
