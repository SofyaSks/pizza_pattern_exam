#pragma once
#include "pizza_Builder.h"
class Builder
{
public:
	Pizza* createPizza(pizza_Builder& pizza) {
		pizza.createPizza();
		pizza.addDough();
		pizza.addSouce();
		pizza.addCheese();
		pizza.addHam();
		pizza.addMushroom();
		pizza.addOlives();
		return(pizza.getPizza());

	}

};

