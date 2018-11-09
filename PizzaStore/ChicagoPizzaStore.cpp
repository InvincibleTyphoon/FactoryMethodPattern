#include "ChicagoPizzaStore.h"



ChicagoPizzaStore::ChicagoPizzaStore()
{
}

Pizza * ChicagoPizzaStore::createPizza(const string& type)
{
	if (type.compare("cheese"))
		return new ChicagoCheesePizza();
	else if (type.compare("veggi"))
		return new ChicagoVeggiPizza();
	else if (type.compare("clam"))
		return new ChicagoClamPizza();
	else if (type.compare("pepperoni"))
		return new ChicagoPepperoniPizza();

	return NULL;
}