#pragma once
#include "Base.h"
#include "Dough.h"
#include "Souce.h"
#include "Cheese.h"
#include "Ham.h"
#include "Mushroom.h"
#include "Olives.h"
#include "Pizza.h"
#include "pizza_Builder.h"
class Pepperoni : public pizza_Builder, public Pizza
{
public:
	void createPizza();
	void addDough();
	void addSouce();
	void addCheese();
	void addHam();


	void showPrice();
};


