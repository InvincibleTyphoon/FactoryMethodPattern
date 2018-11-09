#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//����� ġ�� ����
class NYCheesePizza : public Pizza
{
public:
	NYCheesePizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

