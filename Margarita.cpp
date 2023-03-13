#include "Margarita.h"

void Margarita::createPizza()
	{ p = new Pizza; }

void Margarita::addDough()
{
	p->d.push_back(Dough());
}

void Margarita::addSouce()
{
	p->s.push_back(Souce());
}

void Margarita::addCheese()
{
	p->c.push_back(Cheese());
}

void Margarita::showPrice()
{
	cout << endl << "Price: " << d1.getPrice() + s1.getPrice() + c1.getPrice() << endl << endl;
}
