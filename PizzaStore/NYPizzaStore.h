#pragma once
#include "PizzaStore.h"
#include "../Pizza/Pizza.h"
#include "../Pizza/NYCheesePizza.h"
#include "../Pizza/NYClamPizza.h"
#include "../Pizza/NYPepperoniPizza.h"
#include "../Pizza/NYVeggiPizza.h"

//뉴욕의 피자 가게
class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore();
	
protected:

	Pizza * createPizza(const string& type) override;
};

