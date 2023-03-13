#pragma once
#include "Base.h"
#include "Dough.h"
#include "Souce.h"
#include "Cheese.h"
#include "Ham.h"
#include "Mushroom.h"
#include "Olives.h"

class Pizza
{
public:
	vector <Dough> d;
	vector <Souce> s;
	vector <Cheese> c;
	vector <Ham> h;
	vector <Mushroom> m;
	vector <Olives> o;

	Dough d1;
	Souce s1;
	Cheese c1;
	Ham h1;
	Mushroom m1;
	Olives o1;

	void pizza();

	
};

