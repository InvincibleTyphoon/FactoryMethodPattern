#pragma once
#include <string>
#include "../Pizza/Pizza.h"

using namespace std;

//피자 가게 추상 클래스
class PizzaStore
{
public:
	PizzaStore();
	Pizza* orderPizza(const string& type);
protected:
	virtual Pizza* createPizza(const string& type) =  0;
};

