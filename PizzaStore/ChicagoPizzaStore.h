#pragma once
#include "PizzaStore.h"
#include "../Pizza/Pizza.h"
#include "../Pizza/ChicagoCheesePizza.h"
#include "../Pizza/ChicagoClamPizza.h"
#include "../Pizza/ChicagoPepperoniPizza.h"
#include "../Pizza/ChicagoVeggiPizza.h"

//��ī�� �ִ� ���� ����
class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore();

	Pizza * createPizza(const string& type) override;
};

