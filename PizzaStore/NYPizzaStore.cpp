#include "NYPizzaStore.h"



NYPizzaStore::NYPizzaStore()
{
}


Pizza * NYPizzaStore::createPizza(const string& type)
{
	if (type.compare("cheese"))
		return new NYCheesePizza();
	else if (type.compare("veggi"))
		return new NYVeggiPizza();
	else if (type.compare("clam"))
		return new NYClamPizza();
	else if (type.compare("pepperoni"))
		return new NYPepperoniPizza();

	return NULL;
}