#include "Pizza.h"

void Pizza::pizza()
{
	int i;
	for (i = 0; i < d.size(); ++i)
		d[i].dough();
	for (i = 0; i < s.size(); ++i)
		s[i].souce();
	for (i = 0; i < c.size(); ++i)
		c[i].cheese();
	for (i = 0; i < h.size(); ++i)
		h[i].ham();
	for (i = 0; i < m.size(); ++i)
		m[i].mushroom();
	for (i = 0; i < o.size(); ++i)
		o[i].olives();

}