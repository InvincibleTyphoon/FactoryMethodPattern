#pragma once
#include "PizzaStore.h"
#include "../Pizza/Pizza.h"
#include "../Pizza/ChicagoCheesePizza.h"
#include "../Pizza/ChicagoClamPizza.h"
#include "../Pizza/ChicagoPepperoniPizza.h"
#include "../Pizza/ChicagoVeggiPizza.h"

//시카고에 있는 피자 가게
class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore();

	Pizza * createPizza(const string& type) override;
};

