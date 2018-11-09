#pragma once
#include <string>
#include "../Pizza/Pizza.h"

using namespace std;

//���� ���� �߻� Ŭ����
class PizzaStore
{
public:
	PizzaStore();
	Pizza* orderPizza(const string& type);
protected:
	virtual Pizza* createPizza(const string& type) =  0;
};

