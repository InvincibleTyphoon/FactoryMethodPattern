#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

//��ī��� ���� ����
class ChicagoClamPizza : public Pizza
{
public:
	ChicagoClamPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

