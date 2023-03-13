#include "All_In.h"

void All_In::createPizza()
{
	p = new Pizza;
}

void All_In::addDough()
{
	p->d.push_back(Dough());
}

void All_In::addSouce()
{
	p->s.push_back(Souce());
}

void All_In::addCheese()
{
	p->c.push_back(Cheese());
}

void All_In::addHam()
{
	p->h.push_back(Ham());
}

void All_In::addMushroom()
{
	p->m.push_back(Mushroom());
}

void All_In::addOlives()
{
	p->o.push_back(Olives());
}

void All_In::showPrice()
{
	cout << endl << "Price: " << d1.getPrice() + s1.getPrice() + c1.getPrice() + h1.getPrice() + m1.getPrice() + o1.getPrice() << endl << endl;
}
