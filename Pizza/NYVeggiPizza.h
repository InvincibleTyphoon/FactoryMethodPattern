#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//����� ��ä ����
class NYVeggiPizza : public Pizza
{
public:
	NYVeggiPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

