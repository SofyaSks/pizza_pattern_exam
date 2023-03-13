#include "Base.h"
#include "Final.h"
#include "Windows.h"




int main() {
	

	cout << "PIZZERIA" << endl;
	cout << "1 - Margaritha" << endl;
	cout << "2 - Pepperoni" << endl;
	cout << "3 - All In" << endl;
	cout << "Choose pizza - > ";
	int ch;
	cin >> ch;
	system("cls");

	Builder b;
	Margarita m;
	Pepperoni p;
	All_In ai;
	Extra e;
	Pizza* pizza;
	
	switch (ch) {
	case 1:	
		cout << "Would you like one free extra ingridient?  (1 - yes; 0 - no) -> ";
		int ch1;
		cin >> ch1;
		system("cls");
		if (ch1 == 1) {
			//Souce s;
			pizza = b.createPizza(m);
			e.addExtraMargarita(m);
			cout << "Margarita:\n";
			pizza->pizza();	
			m.showPrice() /*+ s.getPrice()*/;
			break;
		}
		pizza = b.createPizza(m);
		cout << "Margarita:\n";
		pizza->pizza();
		m.showPrice();

		break;
	case 2: 
		cout << "Would you like one free extra ingridient?  (1 - yes; 0 - no) -> ";
		int ch2;
		cin >> ch2;
		system("cls");
		if (ch2 == 1) {
			pizza = b.createPizza(p);
			e.addExtraPepperoni(p);
			cout << "Pepperoni:\n";
			pizza->pizza();
			p.showPrice();
			break;
		}
		pizza = b.createPizza(p);
		cout << "Pepperoni:\n";
		pizza->pizza();
		p.showPrice();
		break;
	case 3:
		cout << "Would you like one free extra ingridient?  (1 - yes; 0 - no) -> ";
		int ch3;
		cin >> ch3;
		system("cls");
		if (ch3 == 1) {
			pizza = b.createPizza(ai);
			e.addExtraAll_In(ai);
			cout << "All In:\n";
			pizza->pizza();
			ai.showPrice();
			break;
		}
		pizza = b.createPizza(ai);
		cout << "All In:\n";
		pizza->pizza();
		ai.showPrice();
		break;
	default:
		cout << "ERROR" << endl;
	}
	



	return 0;
}