#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//����� ���� ����
class NYClamPizza : public Pizza
{
public:
	NYClamPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

