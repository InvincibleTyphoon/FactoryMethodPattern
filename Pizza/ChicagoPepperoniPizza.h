#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//��ī��� ���۷δ� ����
class ChicagoPepperoniPizza : public Pizza
{
public:
	ChicagoPepperoniPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

