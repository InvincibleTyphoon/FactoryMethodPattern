#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//��ī��� ��ä ����
class ChicagoVeggiPizza : public Pizza
{
public:
	ChicagoVeggiPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

