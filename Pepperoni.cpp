#include "Pepperoni.h"

void Pepperoni::createPizza()
{
	p = new Pizza;
}

void Pepperoni::addDough()
{
	p->d.push_back(Dough());
}

void Pepperoni::addSouce()
{
	p->s.push_back(Souce());
}

void Pepperoni::addCheese()
{
	p->c.push_back(Cheese());
}

void Pepperoni::addHam()
{
	p->h.push_back(Ham());
}

void Pepperoni::showPrice()
{
	cout << endl << "Price: " << d1.getPrice() + s1.getPrice() + c1.getPrice() + h1.getPrice() << endl << endl;
}
