#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//����� ���۷δ� ����
class NYPepperoniPizza : public Pizza
{
public:
	NYPepperoniPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

