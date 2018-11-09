#include "PizzaStore.h"



PizzaStore::PizzaStore()
{
}

Pizza* PizzaStore::orderPizza(const string& type)
{
	Pizza * pizza;
	pizza = createPizza(type);

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}