#pragma once
#include "Base.h"
#include "Dough.h"
#include "Souce.h"
#include "Cheese.h"
#include "Ham.h"
#include "Mushroom.h"
#include "Olives.h"
#include "Pizza.h"


class pizza_Builder
{
protected:
	Pizza* p;
public:
	pizza_Builder() : p(0){}
	virtual ~pizza_Builder(){}
	virtual void createPizza(){}
	virtual void addDough(){}
	virtual void addSouce() {}
	virtual void addCheese() {}
	virtual void addHam() {}
	virtual void addMushroom() {}
	virtual void addOlives() {}
	virtual Pizza* getPizza();
};

